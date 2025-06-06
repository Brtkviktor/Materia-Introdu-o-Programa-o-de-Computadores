#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int pontosTuristicos1;
    int populacao1;
    float area1, pib1;
    float densidade1, pibPerCapita1;
  

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int pontosTuristicos2;
    int populacao2;
    float area2,pib2;
    float densidade2, pibPerCapita2;


    // Entrada de dados para a primeira carta
    printf("Digite a letra do estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", &nomeCidade1);
    printf("Digite a populacao da cidade da Carta 1: ");
    scanf(" %d", &populacao1);
    printf("Digite a area da cidade da Carta 1 (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade da Carta 1 (em bilhoes de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculo da densidade populacional Carta 1
    densidade1 = populacao1 / area1;

    // Cálculo do PIB per capita Carta 1
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB está em bilhões

    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da Carta 2 (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", &nomeCidade2);
    printf("Digite a populacao da cidade da Carta 2: ");
    scanf(" %d", &populacao2);
    printf("Digite a area da cidade da Carta 2 (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade da Carta 2 (em bilhoes de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da densidade populacional Carta 2
    densidade2 = populacao2 / area2;

    // Cálculo do PIB per capita Carta 2
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB está em bilhões

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f por habitante\n", pibPerCapita2);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populaçao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional:  %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f por habitante\n", pibPerCapita2);

    system("pause");
    return 0;
}
