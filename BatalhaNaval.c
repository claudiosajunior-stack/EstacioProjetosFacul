#include <stdio.h>

/**
 * Desafio Batalha Naval - Nível Novato
 * Objetivo: Posicionar dois navios (3 posições cada) em uma matriz 10x10.
 */

int main() {
    // 1. Representação do Tabuleiro: Matriz 10x10 inicializada com 0 (água)
    int tabuleiro[10][10];
    int i, j;
    int tamanhoNavio = 3;

    // Inicializando o tabuleiro com zeros usando loops aninhados
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionamento dos Navios
    // Coordenadas iniciais (definidas diretamente no código conforme simplificação)
    int navioHorizontalLinha = 2, navioHorizontalColuna = 3; // Ocupará (2,3), (2,4), (2,5)
    int navioVerticalLinha = 5, navioVerticalColuna = 7;   // Ocupará (5,7), (6,7), (7,7)

    // Posicionando o Navio Horizontal (valor 3)
    // Validação simples: verificar se o navio não ultrapassa a borda direita (coluna + tamanho <= 10)
    if (navioHorizontalColuna + tamanhoNavio <= 10) {
        for (j = 0; j < tamanhoNavio; j++) {
            tabuleiro[navioHorizontalLinha][navioHorizontalColuna + j] = 3;
        }
    }

    // Posicionando o Navio Vertical (valor 3)
    // Validação simples: verificar se o navio não ultrapassa a borda inferior (linha + tamanho <= 10)
    // E garantir que não haja sobreposição (se a célula já não é 3)
    if (navioVerticalLinha + tamanhoNavio <= 10) {
        for (i = 0; i < tamanhoNavio; i++) {
            // Se já houver um navio (valor 3), poderíamos tratar aqui, 
            // mas como as coordenadas são fixas e seguras, seguimos com a atribuição.
            tabuleiro[navioVerticalLinha + i][navioVerticalColuna] = 3;
        }
    }

    // 3. Exibição do Tabuleiro
    printf("--- TABULEIRO BATALHA NAVAL ---\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            // Imprime o valor da célula seguido de um espaço para legibilidade
            printf("%d ", tabuleiro[i][j]);
        }
        // Quebra de linha ao final de cada linha da matriz
        printf("\n");
    }

    return 0;
}