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

  int atributo1, atributo2;

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
  pibPerCapita1 = (pib1 * 1e9) / populacao1;
  pibPerCapita2 = (pib2 * 1e9) / populacao2;

  // Menu para seleção dos atributos
  printf("\n===== COMPARAR CARTAS COM DOIS ATRIBUTOS =====\n");
  printf("Atributos disponíveis:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Demografica\n");
  printf("6 - PIB per Capita\n");

  // Escolha do primeiro atributo
  do {
    printf("Escolha o PRIMEIRO atributo (1 a 6): ");
    scanf("%d", &atributo1);
    if (atributo1 < 1 || atributo1 > 6) printf("Opcao invalida. Tente novamente.\n");
  } while (atributo1 < 1 || atributo1 > 6);

  // Escolha do segundo atributo
  do {
    printf("Escolha o SEGUNDO atributo (1 a 6 e diferente do primeiro): ");
    scanf("%d", &atributo2);
    if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1)
      printf("Opcao invalida ou repetida. Tente novamente.\n");
  } while (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1);

  float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

  // Obtem valores para atributo 1
  switch (atributo1) {
    case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
    case 2: valor1_c1 = area1; valor1_c2 = area2; break;
    case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
    case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
    case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
    case 6: valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2; break;
  }

  // Obtem valores para atributo 2
  switch (atributo2) {
    case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
    case 2: valor2_c1 = area1; valor2_c2 = area2; break;
    case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
    case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
    case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
    case 6: valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2; break;
  }

  // Exibição
  printf("\n===== RESULTADO =====\n");
  printf("Carta 1: %s (%c)\n", cidade1, estado1);
  printf("Carta 2: %s (%c)\n\n", cidade2, estado2);

  char *nomesAtributos[] = {
    "", "Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade Demografica", "PIB per Capita"
  };

  printf("Comparando atributo 1: %s\n", nomesAtributos[atributo1]);
  printf("%s: %.2f\n", cidade1, valor1_c1);
  printf("%s: %.2f\n", cidade2, valor1_c2);
  printf("-> %s venceu o atributo 1!\n\n", 
    (atributo1 == 5) ? (valor1_c1 < valor1_c2 ? cidade1 : (valor2_c2 < valor2_c1 ? cidade2 : "Empate"))
                    : (valor1_c1 > valor1_c2 ? cidade1 : (valor1_c2 > valor1_c1 ? cidade2 : "Empate")));

  printf("Comparando atributo 2: %s\n", nomesAtributos[atributo2]);
  printf("%s: %.2f\n", cidade1, valor2_c1);
  printf("%s: %.2f\n", cidade2, valor2_c2);
  printf("-> %s venceu o atributo 2!\n\n", 
    (atributo2 == 5) ? (valor2_c1 < valor2_c2 ? cidade1 : (valor2_c2 < valor2_c1 ? cidade2 : "Empate"))
                    : (valor2_c1 > valor2_c2 ? cidade1 : (valor2_c2 > valor2_c1 ? cidade2 : "Empate")));

  // Soma final
  float soma1 = valor1_c1 + valor2_c1;
  float soma2 = valor1_c2 + valor2_c2;

  printf("Soma dos atributos:\n");
  printf("%s: %.2f\n", cidade1, soma1);
  printf("%s: %.2f\n", cidade2, soma2);

  if (soma1 > soma2)
    printf("Resultado Final: Carta 1 (%s) venceu!\n", cidade1);
  else if (soma2 > soma1)
    printf("Resultado Final: Carta 2 (%s) venceu!\n", cidade2);
  else
    printf("Resultado Final: Empate!\n");

  return 0;
}
