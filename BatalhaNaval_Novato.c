#include <stdio.h>

/**
 * Desafio Batalha Naval - Nível Aventureiro
 * Objetivo: Posicionar 4 navios (Horizontal, Vertical e Diagonais) em uma matriz 10x10.
 */

int main() {
    // Requisito: Matriz 10x10 inicializada com 0 (água)
    int tabuleiro[10][10] = {0};
    int tamanho = 3;
    int valorNavio = 3;

    // --- POSICIONAMENTO DOS NAVIOS ---
    // 1. Navio Horizontal (Linha 1, Colunas 1 a 3)
    // [1][1+i] => significa que para se fazer na horizontal, a linha [1] é fixa, variando as colunas [1+i]
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[1][1 + i] = valorNavio;
    }

    // 2. Navio Vertical (Linhas 4 a 6, Coluna 5)
    // [1+i][5] => significa que para se fazer na vertical, a linha [1+i] varia, e a coluna fica fixa [5]
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[4 + i][5] = valorNavio;
    }

    // 3. Navio Diagonal 1 (Canto superior direito: baixo e direita)
    // Fiz as coordenadas com os valores: (0,7), (1,8), (2,9)
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[0 + i][7 + i] = valorNavio;
    }

    // 4. Navio Diagonal 2 (Canto inferior esquerdo: baixo e esquerda)
    // Fiz as coordenadas com os valores: (7,2), (8,1), (9,0)
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[7 + i][2 - i] = valorNavio;
    }

    // --- EXIBIÇÃO DO TABULEIRO ---
    printf("--- TABULEIRO BATALHA NAVAL (AVENTUREIRO) ---\n\n");
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // Exibe 0 para água e 3 para navio com espaço para alinhar
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Pula linha para organizar a visualização
    }

    // ---------------- NAVIOS ----------------

    for (int i = 0; i < 3; i++) tabuleiro[1][1 + i] = valorNavio;
    for (int i = 0; i < 3; i++) tabuleiro[4 + i][5] = valorNavio;
    for (int i = 0; i < 3; i++) tabuleiro[i][7 + i] = valorNavio;
    for (int i = 0; i < 3; i++) tabuleiro[7 + i][2 - i] = valorNavio;

    // ---------------- FORMATO DE CRUZ ----------------

    int habilidade[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            // CRUZ
            if (i == 2 || j == 2)
                habilidade[i][j] = 1;
            else
                habilidade[i][j] = 0;
        }
    }

    // ---------------- APLICAR HABILIDADE ----------------

    int origemLinha = 5;
    int origemColuna = 5;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            if (habilidade[i][j] == 1) {

                int l = origemLinha + (i - 2);
                int c = origemColuna + (j - 2);

                if (l >= 0 && l < 10 && c >= 0 && c < 10) {

                    if (tabuleiro[l][c] == 0)
                        tabuleiro[l][c] = 5;
                }
            }
        }
    }

    // ---------------- EXIBIÇÃO NA TELA ----------------

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            if (tabuleiro[i][j] == 0) printf(". ");
            else if (tabuleiro[i][j] == 3) printf("N ");
            else if (tabuleiro[i][j] == 5) printf("* ");

        }
        printf("\n");
    }






    return 0;
}