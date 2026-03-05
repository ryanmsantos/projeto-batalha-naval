#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {

    // 1. Criando o tabuleiro 10x10
    int tabuleiro[TAM][TAM];

    // 2. Inicializando todas as posições com 0 (água)
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // 3. Criando vetores que representam os navios
    int navio_horizontal[NAVIO] = {3,3,3};
    int navio_vertical[NAVIO] = {3,3,3};

    // 4. Coordenadas iniciais dos navios
    int linhaH = 2;
    int colunaH = 4;

    int linhaV = 5;
    int colunaV = 7;

    // 5. Validação se o navio horizontal cabe no tabuleiro
    if(colunaH + NAVIO <= TAM){

        // Verificando sobreposição
        int podePosicionar = 1;

        for(int i = 0; i < NAVIO; i++){
            if(tabuleiro[linhaH][colunaH + i] != 0){
                podePosicionar = 0;
            }
        }

        // Posicionando o navio
        if(podePosicionar){
            for(int i = 0; i < NAVIO; i++){
                tabuleiro[linhaH][colunaH + i] = navio_horizontal[i];
            }
        }
    }

    // 6. Validação se o navio vertical cabe no tabuleiro
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

    // 7. Exibindo o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
