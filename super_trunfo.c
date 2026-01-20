#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1, codigo1[4], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Variáveis para a Carta 2
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // --- Cadastro da Carta 1 ---
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\n--- Cadastro da Carta 2 ---\n");
    // --- Cadastro da Carta 2 ---
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // --- Lógica de Comparação (Atributo: População) ---
    printf("\n==========================\n");
    printf("COMPARAÇÃO DE ATRIBUTO: POPULAÇÃO\n");
    printf("==========================\n");

    printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, populacao2);

    // Estrutura de decisão para determinar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    /* Nota: Se você fosse comparar a Densidade Populacional, 
       a lógica do if seria invertida:
       if (densidade1 < densidade2) { vence carta 1 }
    */

    return 0;
}