#include <stdio.h>

// Desafio Batalha Naval - Nível Novato


#define TAM 10   // Tamanho do tabuleiro 10x10
#define NAVIO 3  // Tamanho fixo dos navios

int main() {
    int tabuleiro[TAM][TAM]; // Matriz representando o tabuleiro
    int i, j;

    // 1. Inicializando o tabuleiro com 0 (água)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Definindo as coordenadas iniciais dos navios
    int linhaH = 2, colunaH = 4; // Navio horizontal
    int linhaV = 5, colunaV = 7; // Navio vertical

    // 3. Validando se os navios cabem no tabuleiro
    if (colunaH + NAVIO > TAM || linhaV + NAVIO > TAM) {
        printf("Erro: um dos navios ultrapassa os limites do tabuleiro.\n");
        return 1;
    }

    // 4. Posicionando o navio horizontal (valor 3)
    for (j = 0; j < NAVIO; j++) {
        if (tabuleiro[linhaH][colunaH + j] != 0) {
            printf("Erro: sobreposição de navios detectada.\n");
            return 1;
        }
        tabuleiro[linhaH][colunaH + j] = 3;
    }

    // 5. Posicionando o navio vertical (valor 3)
    for (i = 0; i < NAVIO; i++) {
        if (tabuleiro[linhaV + i][colunaV] != 0) {
            printf("Erro: sobreposição de navios detectada.\n");
            return 1;
        }
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // 6. Exibindo o tabuleiro
    printf("\n=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0; // Final do programa
}