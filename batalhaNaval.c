// #include <stdio.h>

// // Desafio Batalha Naval - MateCheck
// // Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// // Siga os comentários para implementar cada parte do desafio.

// #define TAM_TABULEIRO 10
// #define TAM_NAVIO 3
// #define AGUA 0
// #define NAVIO 3

// int main() {
//     // Nível Novato - Posicionamento dos Navios
//     // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
//     // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
//     // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

//      // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
//     // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
//     // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
//     // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

   
//        /* ===============================
//        REPRESENTAÇÃO DO TABULEIRO
//        =============================== */

    
//     int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

//     // ---------- Inicializa o tabuleiro ----------
//     for (int i = 0; i < TAM_TABULEIRO; i++) {
//         for (int j = 0; j < TAM_TABULEIRO; j++) {
//             tabuleiro[i][j] = AGUA;
//         }
//     }

//     // ==========================================
//     // NAVIOS (vetores unidimensionais)
//     // ==========================================
//     int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
//     int navioVertical[TAM_NAVIO]   = {3, 3, 3};
//     int navioDiagonal1[TAM_NAVIO]  = {3, 3, 3};
//     int navioDiagonal2[TAM_NAVIO]  = {3, 3, 3};

//     // ---------- Navio Horizontal ----------
//     int linhaH = 5;
//     int colunaH = 3;

//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (colunaH + i < TAM_TABULEIRO &&
//             tabuleiro[linhaH][colunaH + i] == AGUA) {

//             tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
//         }
//     }

//     // ---------- Navio Vertical ----------
//     int linhaV = 6;
//     int colunaV = 8;

//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (linhaV + i < TAM_TABULEIRO &&
//             tabuleiro[linhaV + i][colunaV] == AGUA) {

//             tabuleiro[linhaV + i][colunaV] = navioVertical[i];
//         }
//     }

//     // ---------- Navio Diagonal Principal (↘) ----------
//     int linhaD1 = 0;
//     int colunaD1 = 0;

//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (linhaD1 + i < TAM_TABULEIRO &&
//             colunaD1 + i < TAM_TABULEIRO &&
//             tabuleiro[linhaD1 + i][colunaD1 + i] == AGUA) {

//             tabuleiro[linhaD1 + i][colunaD1 + i] = navioDiagonal1[i];
//         }
//     }

//     // ---------- Navio Diagonal Secundária (↙) ----------
//     int linhaD2 = 0;
//     int colunaD2 = TAM_TABULEIRO - 1;

//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (linhaD2 + i < TAM_TABULEIRO &&
//             colunaD2 - i >= 0 &&
//             tabuleiro[linhaD2 + i][colunaD2 - i] == AGUA) {

//             tabuleiro[linhaD2 + i][colunaD2 - i] = navioDiagonal2[i];
//         }
//     }

//     // ---------- Exibição do Tabuleiro ----------
//     printf("TABULEIRO BATALHA NAVAL\n\n");

//     for (int i = 0; i < TAM_TABULEIRO; i++) {
//         for (int j = 0; j < TAM_TABULEIRO; j++) {
//             printf("%d ", tabuleiro[i][j]);
//         }
//         printf("\n");
//     }



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

//     return 0;
// }
#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define TAM_HABILIDADE 5

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    printf("\nTABULEIRO BATALHA NAVAL\n\n");

    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função genérica para sobrepor habilidade no tabuleiro
void aplicarHabilidade(
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO],
    int habilidade[TAM_HABILIDADE][TAM_HABILIDADE],
    int origemLinha,
    int origemColuna
) {
    int offset = TAM_HABILIDADE / 2;

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {

            if (habilidade[i][j] == 1) {
                int linhaTab = origemLinha + (i - offset);
                int colunaTab = origemColuna + (j - offset);

                // Verifica limites do tabuleiro
                if (linhaTab >= 0 && linhaTab < TAM_TABULEIRO &&
                    colunaTab >= 0 && colunaTab < TAM_TABULEIRO) {

                    // Não sobrescreve navios
                    if (tabuleiro[linhaTab][colunaTab] == 0) {
                        tabuleiro[linhaTab][colunaTab] = 5;
                    }
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

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
    // ===============================
    // NAVIOS (níveis anteriores)
    // ===============================

    int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
    int navioVertical[TAM_NAVIO]   = {3, 3, 3};

    // Navio horizontal
    int linhaH = 2, colunaH = 2;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // Navio vertical
    int linhaV = 5, colunaV = 7;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // ===============================
    // MATRIZ DE HABILIDADE - CONE
    // ===============================
    int cone[TAM_HABILIDADE][TAM_HABILIDADE] = {0};

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (j >= (TAM_HABILIDADE / 2 - i) &&
                j <= (TAM_HABILIDADE / 2 + i)) {
                cone[i][j] = 1;
            }
        }
    }

    // ===============================
    // MATRIZ DE HABILIDADE - CRUZ
    // ===============================
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE] = {0};

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (i == TAM_HABILIDADE / 2 || j == TAM_HABILIDADE / 2) {
                cruz[i][j] = 1;
            }
        }
    }

    // ===============================
    // MATRIZ DE HABILIDADE - OCTAEDRO
    // ===============================
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE] = {0};
    int centro = TAM_HABILIDADE / 2;

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                octaedro[i][j] = 1;
            }
        }
    }

    // ===============================
    // APLICANDO HABILIDADES
    // ===============================

    aplicarHabilidade(tabuleiro, cone, 1, 4);
    aplicarHabilidade(tabuleiro, cruz, 6, 2);
    aplicarHabilidade(tabuleiro, octaedro, 7, 7);

    // ===============================
    // EXIBIÇÃO FINAL
    // ===============================
    imprimirTabuleiro(tabuleiro);

    return 0;
}

