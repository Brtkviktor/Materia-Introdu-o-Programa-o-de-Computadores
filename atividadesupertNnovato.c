#include <stdio.h>
#include <stdlib.h>
int main() { 
// Declaração das variáveis para a primeira carta 

char estado1; 
char codigo1[4]; 
char nomeCidade1[50]; 
int populacao1; 
float area1; 
float pib1; 
int pontosTuristicos1;

// Declaração das variáveis para a segunda carta
char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

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

// Cálculo da densidade populacional
double densidadePopulacional1 = populacao1 / area1;

// Cálculo do PIB per capita
double pibPerCapita1 = pib1 / populacao1;

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

// Cálculo da densidade populacional
double densidadePopulacional2 = populacao2 / area2;

// Cálculo do PIB per capita
double pibPerCapita2 = pib2 / populacao2;

// Exibição dos dados da primeira carta
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
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
printf("Densidade Populacional:  %.2f habitantes/km²\n", densidadePopulacional1);
printf("PIB per capita: %.2f por habitante\n", pibPerCapita2);

// logica de comparaçõa das cartas

printf("\n");
printf("Comparação de Populaçao.\n");
printf("Cidade %s: %d\n", nomeCidade1, populacao1);
printf("Cidade %s: %d\n", nomeCidade2, populacao2);

if (populacao1 > populacao2)
{
    printf("Carta %s Venceu!\n" , nomeCidade1);
} else{
        printf("Carta %s Venceu!\n" , nomeCidade2);
}

printf("\n");
printf("Comparação de Àrea.\n");
printf("Cidade %s: %.2f km²\n", nomeCidade1, area1);
printf("Cidade %s: %.2f km²\n", nomeCidade2, area2);

if (area1 > area2)
{
    printf("Carta %s Venceu!\n" , nomeCidade1);
} else{
        printf("Carta %s Venceu!\n" , nomeCidade2);
}
 
printf("\n");
printf("Comparação de PIB.\n");
printf("Cidade %s: %.2f km²\n", nomeCidade1, pib1);
printf("Cidade %s: %.2f km²\n", nomeCidade2, pib2);

if (pib1 > pib2)
{
    printf("Carta %s Venceu!\n" , nomeCidade1);
} else{
        printf("Carta %s Venceu!\n" , nomeCidade2);
}

printf("\n");
printf("Comparação de Demcidade Populacional.\n");
printf("Cidade %s: %.2f km²\n", nomeCidade1, densidadePopulacional1);
printf("Cidade %s: %.2f km²\n", nomeCidade2, densidadePopulacional2);

if (densidadePopulacional1 > densidadePopulacional2)
{
    printf("Carta %s Venceu!\n" , nomeCidade1);
} else{
        printf("Carta %s Venceu!\n" , nomeCidade2);
}

printf("\n");
printf("Comparação de PIB Per Capita.\n");
printf("Cidade %s: %.2f km²\n", nomeCidade1, pibPerCapita1);
printf("Cidade %s: %.2f km²\n", nomeCidade2, pibPerCapita2);

if (pibPerCapita1 > pibPerCapita2)
{
    printf("Carta %s Venceu!\n" , nomeCidade1);
} else{
        printf("Carta %s Venceu!\n" , nomeCidade2);
}
    
       

system("pause"); 
return 0;



}