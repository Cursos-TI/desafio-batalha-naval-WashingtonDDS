#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
       /* ===============================
       REPRESENTAÇÃO DO TABULEIRO
       =============================== */

    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // Inicializa o tabuleiro com 0 (água)
    for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    /* ===============================
       DECLARAÇÃO DOS NAVIOS
       =============================== */

    int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
    int navioVertical[TAM_NAVIO]   = {3, 3, 3};

    /* ===============================
       COORDENADAS INICIAIS
       =============================== */

    // Navio horizontal
    int linhaH = 2;
    int colunaH = 3;

    // Navio vertical
    int linhaV = 5;
    int colunaV = 6;

    /* ===============================
       POSICIONAMENTO DO NAVIO HORIZONTAL
       =============================== */

    // Validação de limites
    if (colunaH + TAM_NAVIO <= TAM_TABULEIRO) {

        // Verifica sobreposição
        int podePosicionar = 1;
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaH][colunaH + i] != 0) {
                podePosicionar = 0;
            }
        }

        // Posiciona o navio
        if (podePosicionar) {
            for (int i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
            }
        }
    }

    /* ===============================
       POSICIONAMENTO DO NAVIO VERTICAL
       =============================== */

    // Validação de limites
    if (linhaV + TAM_NAVIO <= TAM_TABULEIRO) {

        // Verifica sobreposição
        int podePosicionar = 1;
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaV + i][colunaV] != 0) {
                podePosicionar = 0;
            }
        }

        // Posiciona o navio
        if (podePosicionar) {
            for (int i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[linhaV + i][colunaV] = navioVertical[i];
            }
        }
    }

    /* ===============================
       EXIBIÇÃO DO TABULEIRO
       =============================== */

    printf("TABULEIRO DE BATALHA NAVAL (10x10)\n\n");

    for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
