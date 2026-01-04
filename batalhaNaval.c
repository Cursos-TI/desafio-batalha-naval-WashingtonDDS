#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

     // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

   
       /* ===============================
       REPRESENTAÇÃO DO TABULEIRO
       =============================== */

    
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // ---------- Inicializa o tabuleiro ----------
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // ==========================================
    // NAVIOS (vetores unidimensionais)
    // ==========================================
    int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
    int navioVertical[TAM_NAVIO]   = {3, 3, 3};
    int navioDiagonal1[TAM_NAVIO]  = {3, 3, 3};
    int navioDiagonal2[TAM_NAVIO]  = {3, 3, 3};

    // ---------- Navio Horizontal ----------
    int linhaH = 5;
    int colunaH = 3;

    for (int i = 0; i < TAM_NAVIO; i++) {
        if (colunaH + i < TAM_TABULEIRO &&
            tabuleiro[linhaH][colunaH + i] == AGUA) {

            tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
        }
    }

    // ---------- Navio Vertical ----------
    int linhaV = 6;
    int colunaV = 8;

    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linhaV + i < TAM_TABULEIRO &&
            tabuleiro[linhaV + i][colunaV] == AGUA) {

            tabuleiro[linhaV + i][colunaV] = navioVertical[i];
        }
    }

    // ---------- Navio Diagonal Principal (↘) ----------
    int linhaD1 = 0;
    int colunaD1 = 0;

    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linhaD1 + i < TAM_TABULEIRO &&
            colunaD1 + i < TAM_TABULEIRO &&
            tabuleiro[linhaD1 + i][colunaD1 + i] == AGUA) {

            tabuleiro[linhaD1 + i][colunaD1 + i] = navioDiagonal1[i];
        }
    }

    // ---------- Navio Diagonal Secundária (↙) ----------
    int linhaD2 = 0;
    int colunaD2 = TAM_TABULEIRO - 1;

    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linhaD2 + i < TAM_TABULEIRO &&
            colunaD2 - i >= 0 &&
            tabuleiro[linhaD2 + i][colunaD2 - i] == AGUA) {

            tabuleiro[linhaD2 + i][colunaD2 - i] = navioDiagonal2[i];
        }
    }

    // ---------- Exibição do Tabuleiro ----------
    printf("TABULEIRO BATALHA NAVAL\n\n");

    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
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
