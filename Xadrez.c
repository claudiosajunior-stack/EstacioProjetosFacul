#include <stdio.h>

int main() {
    // Definição de constantes para o número de casas
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    printf("--- Simulação de Movimentação de Peças de Xadrez ---\n\n");

    // --- Movimentação da TORRE (usando FOR) ---
    // A Torre move-se 5 casas para a DIREITA.
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentação do BISPO (usando WHILE) ---
    // O Bispo move-se 5 casas na diagonal para CIMA e DIREITA.
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // --- Movimentação da RAINHA (usando DO-WHILE) ---
    // A Rainha move-se 8 casas para a ESQUERDA.
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= MOVIMENTO_RAINHA);
    printf("\n");

    return 0;
}