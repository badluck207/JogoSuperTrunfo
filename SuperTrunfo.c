#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char estado1, nomedacidade1[50], carta1;
    char estado2, nomedacidade2[50], carta2;
    char *atributos[] = {"Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade Populacional", "PIB per Capita", "Super Poder"};
    int populacao1 = 0, populacao2 = 0, pontoturistico1 = 0, pontoturistico2 = 0;
    int codigodacarta1 = 0, codigodacarta2 = 0, opcao, escolha1, escolha2, primeiraOpcao;
    float area1 = 0, area2 = 0, densidade1 = 0, densidade2 = 0, pibper1 = 0, pibper2 = 0;
    double pib1 = 0, pib2 = 0, superpoder1 = 0, superpoder2 = 0;

    do
    {
        // Sistema de Menu
        printf("_____________________________\n");
        printf("Bem Vindo ao Super Trunfo!");
        printf("\n_____________________________\n");
        printf("1) Adicionar Cartas\n");
        printf("2) Mostrar Cartas\n");
        printf("3) Regras\n");
        printf("4) Jogar\n");
        printf("5) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Regras do Menu
        switch (opcao)
        {
        case 1: // Adicionamento das Cartas
            printf("\nAdicione a primeira carta!\n");
            printf("Carta 1!\n");
            printf("Digite o Estado(A-H):\n");
            scanf(" %c", &estado1);
            printf("Digite o Codigo da Carta(1-4):\n");
            scanf("%d", &codigodacarta1);
            getchar();
            printf("Digite o Nome da Cidade:\n");
            scanf(" %[^\n]", nomedacidade1);
            for (int i = 0; nomedacidade1[i] != '\0'; i++)
            {
                nomedacidade1[i] = toupper(nomedacidade1[i]);
            }

            printf("Digite a Populacao:\n");
            scanf("%d", &populacao1);
            printf("Digite a Area em Km^:\n");
            scanf("%f", &area1);
            printf("Digite o PIB: \n");
            scanf("%lf", &pib1);
            printf("Digite o Numero de Ponto Turistico:\n");
            scanf("%d", &pontoturistico1);

            printf("\nAdicione a segunda carta!\n");
            printf("Carta 2!\n");
            printf("Digite o Estado(A-H):\n");
            scanf(" %c", &estado2);
            printf("Digite o Codigo da Carta(1-4):\n");
            scanf("%d", &codigodacarta2);
            getchar();
            printf("Digite o Nome da Cidade:\n");
            scanf(" %[^\n]", nomedacidade2);
            for (int i = 0; nomedacidade2[i] != '\0'; i++)
            {
                nomedacidade2[i] = toupper(nomedacidade2[i]);
            }
            printf("Digite a Populacao:\n");
            scanf("%d", &populacao2);
            printf("Digite a Area em Km^:\n");
            scanf("%f", &area2);
            printf("Digite o PIB: \n");
            scanf("%lf", &pib2);
            printf("Digite o Numero de Ponto Turistico:\n");
            scanf("%d", &pontoturistico2);

            // Calculo da Densidade Populacional e Pib Per
            // Evita divisão por zero na densidade populacional
            densidade1 = (area1 > 0) ? (populacao1 / area1) : 0;
            pibper1 = (populacao1 > 0) ? ((pib1 * 1000000000) / populacao1) : 0;

            densidade2 = (area2 > 0) ? (populacao2 / area2) : 0;
            pibper2 = (populacao2 > 0) ? ((pib2 * 1000000000) / populacao2) : 0;

            // Calcular superpoder corretamente agora que temos valores válidos
            superpoder1 = pib1 + area1 + populacao1 + pontoturistico1 + densidade1 + pibper1;
            superpoder2 = pib2 + area2 + populacao2 + pontoturistico2 + densidade2 + pibper2;

            printf("CARTAS ADICIONADAS COM SUCESSO!\n");
            break;

        case 2: // Exibicao das Cartas Adicionadas
            printf("\nCARTAS ADICIONADAS!\n");
            printf("Carta1\n");
            printf("Codigo: %c%02d\n", toupper(estado1), codigodacarta1);
            printf("Cidade: %s\n", nomedacidade1);
            printf("Populacao: %d\n", populacao1);
            printf("Area: %.2f\n", area1);
            printf("Pib: %.2lf\n", pib1);
            printf("Ponto Turistico: %d\n", pontoturistico1);
            printf("Densidade Populacional: %.2f\n", densidade1);
            printf("Pib Per Capita: %.2f\n", pibper1);
            printf("Super Poder: %lf\n", superpoder1);
            printf("_____________________________________________\n");
            printf("Carta2\n");
            printf("Codigo: %c%02d\n", toupper(estado2), codigodacarta2);
            printf("Cidade: %s\n", nomedacidade2);
            printf("Populacao: %d\n", populacao2);
            printf("Area: %.2f\n", area2);
            printf("Pib: %.2lf\n", pib2);
            printf("Ponto Turistico: %d\n", pontoturistico2);
            printf("Densidade Populacional: %.2f\n", densidade2);
            printf("Pib Per Capita: %.2f\n", pibper2);
            printf("Super Poder: %lf\n", superpoder2);
            break;

        case 3: // Exibicao das Regras do jogo
            printf("\n***REGRA DO JOGO SUPER TRUNFO***\n");
            printf("1) Adicione duas cartas, definindo suas propriedades.\n");
            printf("2) Apos adicionar as cartas, verique na opcao ('Mostrar Cartas') se esta tudo certo.\n");
            printf("3) Clique em Jogar para escolher uma Propriedade que deseja Comparar.\n");
            printf("4) Vence o Jogo quem tiver o Maior Valor na Propriedade.\n");
            printf("5) Porem se escolher a Densidade Populacional vence quem tiver o Menor Valor!\n");
            break;

        case 4:
            // Menu de comparacao das propriedas
            printf("\nBem vindo ao Jogo Super-Trunfo, Qual Propriedade deseja Comparar:\n");
            printf("1) Populacao\n");
            printf("2) Area\n");
            printf("3) PIB\n");
            printf("4) Pontos Turisticos\n");
            printf("5) Densidade Populacional\n");
            printf("6) PIB PER CAPITA\n");
            printf("7) Super Poder\n");
            printf("8) Voltar ao Menu Principal\n");

            printf("Escolha a primeira opcao: ");
            scanf("%d", &escolha1);
            if (escolha1 == 8)
            {
                printf("Voltando ao menu principal...\n");
                continue;
            }

            printf("Escolha a segunda opcao: ");
            scanf("%d", &escolha2);

            if (escolha1 == escolha2)
            {
                printf("Escolha uma opcao diferente, a mesma ja foi escolhida! Tente Novamente\n");
                continue;
            }

            // comparação das escolhas definidadas pelo usuario
            double valor1 = (escolha1 == 1)   ? populacao1
                            : (escolha1 == 2) ? area1
                            : (escolha1 == 3) ? pib1
                            : (escolha1 == 4) ? pontoturistico1
                            : (escolha1 == 5) ? densidade1
                            : (escolha1 == 6) ? pibper1
                            : (escolha1 == 7) ? superpoder1
                                              : 0;

            double valor2 = (escolha2 == 1)   ? populacao1
                            : (escolha2 == 2) ? area1
                            : (escolha2 == 3) ? pib1
                            : (escolha2 == 4) ? pontoturistico1
                            : (escolha2 == 5) ? densidade1
                            : (escolha2 == 6) ? pibper1
                            : (escolha2 == 7) ? superpoder1
                                              : 0;

            double valor3 = (escolha1 == 1)   ? populacao2
                            : (escolha1 == 2) ? area2
                            : (escolha1 == 3) ? pib2
                            : (escolha1 == 4) ? pontoturistico2
                            : (escolha1 == 5) ? densidade2
                            : (escolha1 == 6) ? pibper2
                            : (escolha1 == 7) ? superpoder2
                                              : 0;

            double valor4 = (escolha2 == 1)   ? populacao2
                            : (escolha2 == 2) ? area2
                            : (escolha2 == 3) ? pib2
                            : (escolha2 == 4) ? pontoturistico2
                            : (escolha2 == 5) ? densidade2
                            : (escolha2 == 6) ? pibper2
                            : (escolha2 == 7) ? superpoder2
                                              : 0;

            double soma1 = valor1 + valor2;
            double soma2 = valor3 + valor4;

            printf("=================================================\n");
            printf("Carta 1 - %s: %s: %.2lf + %s: %.2lf = %.2lf\n",
                   nomedacidade1, atributos[escolha1 - 1], valor1, atributos[escolha2 - 1], valor2, soma1);

            printf("\nCarta 2 - %s: %s: %.2lf + %s: %.2lf = %.2lf\n",
                   nomedacidade2, atributos[escolha1 - 1], valor3, atributos[escolha2 - 1], valor4, soma2);

            // Regra da Densidade Populacional: menor valor vence
            if (escolha1 == 5 || escolha2 == 5)
            {
                if (soma1 < soma2)
                {
                    printf("\nResultado: Carta 1 - %s Venceu!\n", nomedacidade1);
                }
                else if (soma2 < soma1)
                {
                    printf("\nResultado: Carta 2 - %s Venceu!\n", nomedacidade2);
                }
                else
                {
                    printf("\nResultado: Empate!\n");
                }
            }
            else
            {
                // Para os outros atributos, o maior valor vence
                if (soma1 > soma2)
                {
                    printf("\nResultado: Carta 1 - %s Venceu!\n", nomedacidade1);
                }
                else if (soma2 > soma1)
                {
                    printf("\nResultado: Carta 2 - %s Venceu!\n", nomedacidade2);
                }
                else
                {
                    printf("\nResultado: Empate!\n");
                }
            }

            break;

        case 5:
            system("PAUSE");
            printf("Saindo do Jogo.......\n"); // Fechamento do jogo

            getchar();
            break;
        default:
            printf("Opcao Invalida, Tente Novamente!\n"); // Se nenhuma opção for valida exibe essa mensagem de erro.
            break;
        }
    } while (opcao != 5);

    return 0;
}
