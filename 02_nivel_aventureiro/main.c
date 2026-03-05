#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {

    // 1. Criando o tabuleiro 10x10
    int tabuleiro[TAM][TAM];

    // 2. Inicializando o tabuleiro com água (0)
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // 3. Criando vetores que representam os navios
    int navio_horizontal[NAVIO] = {3,3,3};
    int navio_vertical[NAVIO] = {3,3,3};
    int navio_diagonal1[NAVIO] = {3,3,3};
    int navio_diagonal2[NAVIO] = {3,3,3};

    // ================================
    // NAVIO HORIZONTAL
    // ================================

    int linhaH = 1;
    int colunaH = 2;

    if(colunaH + NAVIO <= TAM){

        int podePosicionar = 1;

        for(int i = 0; i < NAVIO; i++){
            if(tabuleiro[linhaH][colunaH + i] != 0){
                podePosicionar = 0;
            }
        }

        if(podePosicionar){
            for(int i = 0; i < NAVIO; i++){
                tabuleiro[linhaH][colunaH + i] = navio_horizontal[i];
            }
        }
    }

    // ================================
    // NAVIO VERTICAL
    // ================================

    int linhaV = 5;
    int colunaV = 1;

    if(linhaV + NAVIO <= TAM){

        int podePosicionar = 1;

        for(int i = 0; i < NAVIO; i++){
            if(tabuleiro[linhaV + i][colunaV] != 0){
                podePosicionar = 0;
            }
        }

        if(podePosicionar){
            for(int i = 0; i < NAVIO; i++){
                tabuleiro[linhaV + i][colunaV] = navio_vertical[i];
            }
        }
    }

    // ================================
    // NAVIO DIAGONAL ↘
    // linha e coluna aumentam
    // ================================

    int linhaD1 = 0;
    int colunaD1 = 0;

    if(linhaD1 + NAVIO <= TAM && colunaD1 + NAVIO <= TAM){

        int podePosicionar = 1;

        for(int i = 0; i < NAVIO; i++){
            if(tabuleiro[linhaD1 + i][colunaD1 + i] != 0){
                podePosicionar = 0;
            }
        }

        if(podePosicionar){
            for(int i = 0; i < NAVIO; i++){
                tabuleiro[linhaD1 + i][colunaD1 + i] = navio_diagonal1[i];
            }
        }
    }

    // ================================
    // NAVIO DIAGONAL ↙
    // linha aumenta / coluna diminui
    // ================================

    int linhaD2 = 0;
    int colunaD2 = 9;

    if(linhaD2 + NAVIO <= TAM && colunaD2 - NAVIO + 1 >= 0){

        int podePosicionar = 1;

        for(int i = 0; i < NAVIO; i++){
            if(tabuleiro[linhaD2 + i][colunaD2 - i] != 0){
                podePosicionar = 0;
            }
        }

        if(podePosicionar){
            for(int i = 0; i < NAVIO; i++){
                tabuleiro[linhaD2 + i][colunaD2 - i] = navio_diagonal2[i];
            }
        }
    }

    // ================================
    // EXIBIÇÃO DO TABULEIRO
    // ================================

    printf("TABULEIRO BATALHA NAVAL\n\n");

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
