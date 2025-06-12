#include <stdio.h>

int main() {

  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[100], cidade2[100];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos1, pontos2;
  float densidade1, densidade2;
  float pibPerCapita1, pibPerCapita2;
  float superPoder1, superPoder2;

  printf("Carta 1:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Codigo da Carta (ex: A01): ");
  scanf("%s", codigo1);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);
  printf("Populacao: ");
  scanf("%lu", &populacao1);
  printf("Area (em km2): ");
  scanf("%f", &area1);
  printf("PIB (em bilhoes de reais): ");
  scanf("%f", &pib1);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Codigo da Carta (ex: B02): ");
  scanf("%s", codigo2);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);
  printf("Populacao: ");
  scanf("%lu", &populacao2);
  printf("Area (em km2): ");
  scanf("%f", &area2);
  printf("PIB (em bilhoes de reais): ");
  scanf("%f", &pib2);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  printf("\n");

  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;

  superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pibPerCapita1 + (1 / densidade1);
  superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibPerCapita2 + (1 / densidade2);

  printf("=== Cartas Cadastradas ===\n\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  printf("\nComparacao de Cartas:\n");

 printf("\nComparacao de Cartas (Atributo: Populacao):\n\n");
printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);
printf("Resultado: Carta %d (%s) venceu!\n\n", 
       (populacao1 > populacao2) ? 1 : 2, 
       (populacao1 > populacao2) ? cidade1 : cidade2);

printf("Comparacao de Cartas (Atributo: Area):\n\n");
printf("Carta 1 - %s (%c): %.2f km2\n", cidade1, estado1, area1);
printf("Carta 2 - %s (%c): %.2f km2\n", cidade2, estado2, area2);
printf("Resultado: Carta %d (%s) venceu!\n\n", 
       (area1 > area2) ? 1 : 2, 
       (area1 > area2) ? cidade1 : cidade2);

printf("Comparacao de Cartas (Atributo: PIB):\n\n");
printf("Carta 1 - %s (%c): %.2f bilhoes\n", cidade1, estado1, pib1);
printf("Carta 2 - %s (%c): %.2f bilhoes\n", cidade2, estado2, pib2);
printf("Resultado: Carta %d (%s) venceu!\n\n", 
       (pib1 > pib2) ? 1 : 2, 
       (pib1 > pib2) ? cidade1 : cidade2);

printf("Comparacao de Cartas (Atributo: Pontos Turisticos):\n\n");
printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, pontos1);
printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, pontos2);
printf("Resultado: Carta %d (%s) venceu!\n\n", 
       (pontos1 > pontos2) ? 1 : 2, 
       (pontos1 > pontos2) ? cidade1 : cidade2);

printf("Comparacao de Cartas (Atributo: Densidade Populacional):\n\n");
printf("Carta 1 - %s (%c): %.2f hab/km2\n", cidade1, estado1, densidade1);
printf("Carta 2 - %s (%c): %.2f hab/km2\n", cidade2, estado2, densidade2);
printf("Resultado: Carta %d (%s) venceu!\n\n", 
       (densidade1 < densidade2) ? 1 : 2, 
       (densidade1 < densidade2) ? cidade1 : cidade2);

printf("Comparacao de Cartas (Atributo: PIB per Capita):\n\n");
printf("Carta 1 - %s (%c): %.2f reais\n", cidade1, estado1, pibPerCapita1);
printf("Carta 2 - %s (%c): %.2f reais\n", cidade2, estado2, pibPerCapita2);
printf("Resultado: Carta %d (%s) venceu!\n\n", 
       (pibPerCapita1 > pibPerCapita2) ? 1 : 2, 
       (pibPerCapita1 > pibPerCapita2) ? cidade1 : cidade2);

printf("Comparacao de Cartas (Atributo: Super Poder):\n\n");
printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, superPoder1);
printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, superPoder2);
printf("Resultado: Carta %d (%s) venceu!\n\n", 
       (superPoder1 > superPoder2) ? 1 : 2, 
       (superPoder1 > superPoder2) ? cidade1 : cidade2);


  return 0;
}
