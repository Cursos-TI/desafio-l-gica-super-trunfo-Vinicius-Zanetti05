#include <stdio.h>
#include <string.h>

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
  int opcao;

  // Entrada carta 1
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

  // Entrada carta 2
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

  // Cálculos
  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;
  superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pibPerCapita1 + (1 / densidade1);
  superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibPerCapita2 + (1 / densidade2);

  // Menu interativo
  printf("\n===== COMPARAR CARTAS =====\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Demografica\n");
  printf("6 - PIB per Capita\n");
  printf("7 - Super Poder\n");
  printf("Escolha o atributo (1 a 7): ");
  scanf("%d", &opcao);

  printf("\nComparacao de Cartas:\n\n");

  switch(opcao) {
    case 1:
      printf("Atributo: Populacao\n");
      printf("%s (%c): %lu\n", cidade1, estado1, populacao1);
      printf("%s (%c): %lu\n", cidade2, estado2, populacao2);
      if (populacao1 > populacao2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      else if (populacao2 > populacao1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      else
        printf("Resultado: Empate!\n");
      break;

    case 2:
      printf("Atributo: Area\n");
      printf("%s (%c): %.2f km2\n", cidade1, estado1, area1);
      printf("%s (%c): %.2f km2\n", cidade2, estado2, area2);
      if (area1 > area2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      else if (area2 > area1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      else
        printf("Resultado: Empate!\n");
      break;

    case 3:
      printf("Atributo: PIB\n");
      printf("%s (%c): %.2f bilhoes\n", cidade1, estado1, pib1);
      printf("%s (%c): %.2f bilhoes\n", cidade2, estado2, pib2);
      if (pib1 > pib2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      else if (pib2 > pib1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      else
        printf("Resultado: Empate!\n");
      break;

    case 4:
      printf("Atributo: Pontos Turisticos\n");
      printf("%s (%c): %d\n", cidade1, estado1, pontos1);
      printf("%s (%c): %d\n", cidade2, estado2, pontos2);
      if (pontos1 > pontos2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      else if (pontos2 > pontos1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      else
        printf("Resultado: Empate!\n");
      break;

    case 5:
      printf("Atributo: Densidade Demografica\n");
      printf("%s (%c): %.2f hab/km2\n", cidade1, estado1, densidade1);
      printf("%s (%c): %.2f hab/km2\n", cidade2, estado2, densidade2);
      if (densidade1 < densidade2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      else if (densidade2 < densidade1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      else
        printf("Resultado: Empate!\n");
      break;

    case 6:
      printf("Atributo: PIB per Capita\n");
      printf("%s (%c): %.2f reais\n", cidade1, estado1, pibPerCapita1);
      printf("%s (%c): %.2f reais\n", cidade2, estado2, pibPerCapita2);
      if (pibPerCapita1 > pibPerCapita2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      else if (pibPerCapita2 > pibPerCapita1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      else
        printf("Resultado: Empate!\n");
      break;

    case 7:
      printf("Atributo: Super Poder\n");
      printf("%s (%c): %.2f\n", cidade1, estado1, superPoder1);
      printf("%s (%c): %.2f\n", cidade2, estado2, superPoder2);
      if (superPoder1 > superPoder2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      else if (superPoder2 > superPoder1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      else
        printf("Resultado: Empate!\n");
      break;

    default:
      printf("Opcao invalida. Por favor, escolha um numero de 1 a 7.\n");
  }

  return 0;
}
