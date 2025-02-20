#include <stdio.h>

int main(){

    char estado, cidade[30];
    long long int populacao, populacao2, area, area2;
    int pontosturisticos, pontosturisticos2, codigo;
    double pib, pibper, densidade, superpoder1, superpoder2, carta1, carta2, resultado;
    double pib2, pibper2, densidade2;

   

    printf("Carta 1\n");
    //Estado
    printf("Digite o Estado:(Uma Letra de A - H)\n");
    scanf(" %c" , &estado);
    getchar();

    //Cidade
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", cidade);

    //Cidade
    printf("Digite o Codigo da Carta:(01 - 04)\n");
    scanf("%d", &codigo);    

    //População
    printf("Digite o Numero da Populacao:\n");
    scanf("%lld" , &populacao);

    //Area total da cidade
    printf("Digite a Area da Cidade:\n");
    scanf("%lld" , &area);

    //Numero de Pontos Turisticos da  cidade
    printf("Digite a Quantidade de Pontos Turistico da Cidade:\n");
    scanf("%d" , &pontosturisticos);

    //Numero do PIB da Cidade
    printf("Digite o numero do PIB da Cidade:\n");
    scanf("%lf", &pib);

    //Calculo da Densidade Populacional
    densidade = (double)populacao / area;

    //Calculo do PIB Per Capita
    pibper = pib / populacao;


    //Resultado das Coletas dos Dados
    printf("\n***CARTA1 ADICIONADA!***\n");

    printf("Estado: %c\n",estado);
    printf("Numero da Carta: %c%02d\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %lld habitantes\n", populacao);
    printf("Area: %lld km²\n", area);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade);
    printf("PIB: %.0f Bilhões\n" ,pib);
    printf("PIB Per Capita: %.2f Bilhões\n" ,pibper);
    printf("Ponto Turistico: %d\n", pontosturisticos);
    //Calculo do super poder
    superpoder1 = (double)area + populacao + densidade + pib + pontosturisticos + pibper;
    printf("SuperPoder: %.2f\n", superpoder1);

    getchar();
    //Condição para tomar a decisao final do programa
    printf("\nCarta 2\n");

    //=======================================================================================

    //Estado
    printf("Digite o Estado:(Uma Letra de A - H)\n");
    scanf(" %c" , &estado);
    getchar();

    //Cidade
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", cidade);

    //Cidade
    printf("Digite o Codigo da Carta:(01 - 04)\n");
    scanf("%d", &codigo);    

    //População
    printf("Digite o Numero da Populacao:\n");
    scanf("%lld" , &populacao2);

    //Area total da cidade
    printf("Digite a Area da Cidade:\n");
    scanf("%lld" , &area2);

    //Numero de Pontos Turisticos da  cidade
    printf("Digite a Quantidade de Pontos Turistico da Cidade:\n");
    scanf("%d" , &pontosturisticos2);

    //Numero do PIB da Cidade
    printf("Digite o numero do PIB da Cidade:\n");
    scanf("%lf", &pib2);

    //Calculo da Densidade Populacional
    densidade2 = (double)populacao2 / area2;

    //Calculo do PIB Per Capita
    pibper2 = pib2 / populacao2;


    //Resultado das Coletas dos Dados
    printf("\n***CARTA2 ADICIONADA!***\n");

    printf("Estado: %c\n",estado);
    printf("Numero da Carta: %c%02d\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %lld habitantes\n", populacao2);
    printf("Area: %lld km²\n", area2);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade2);
    printf("PIB: %.0f Bilhões\n" ,pib2);
    printf("PIB Per Capita: %.2f Bilhões\n" ,pibper2);
    printf("Ponto Turistico: %d\n", pontosturisticos2);
    //Calculo do super poder
    superpoder2 = (double)area2 + populacao2 + densidade2 + pib2 + pontosturisticos2 + pibper2;
    printf("SuperPoder: %.2f\n\n", superpoder2);
    
     //Armazenamento dos dados das cartas
    carta1 = populacao + area + pontosturisticos + pib + densidade + pibper;
    printf("Carta1: %.2f\n", carta1);
    getchar();

    carta2 = populacao2 + area2 + pontosturisticos2 + pib2 + densidade2 + pibper2;
    printf("Carta2: %.2f\n", carta2);

    //Comparacao de cartas
    carta1 > carta2;
    printf("\n**Se for '1' Carta1 é Vencedora se for '0' Carta 2 Vénceu!**\n");
    printf("Resultado: %d", carta1 > carta2);
    getchar();
    
    getchar();
    printf("\nPressione N para fechar o jogo...\n");
    scanf(" %c", "N");
    getchar();

    return  0;
}
