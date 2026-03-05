#include <stdio.h>
#include <stdlib.h>

#define TAM 10
#define HAB 5

int main() {

    int tabuleiro[TAM][TAM];

    // =============================
    // Inicializar tabuleiro
    // =============================
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // =============================
    // NAVIOS (mantendo níveis anteriores)
    // =============================

    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;

    tabuleiro[5][1] = 3;
    tabuleiro[6][1] = 3;
    tabuleiro[7][1] = 3;

    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;

    // =============================
    // MATRIZES DE HABILIDADE
    // =============================

    int cone[HAB][HAB];
    int cruz[HAB][HAB];
    int octaedro[HAB][HAB];

    // Inicializando todas com 0
    for(int i = 0; i < HAB; i++){
        for(int j = 0; j < HAB; j++){
            cone[i][j] = 0;
            cruz[i][j] = 0;
            octaedro[i][j] = 0;
        }
    }

    // =============================
    // CONE (expande para baixo)
    // =============================

    int meio = HAB / 2;

    for(int i = 0; i <= meio; i++){
        for(int j = meio - i; j <= meio + i; j++){
            cone[i][j] = 1;
        }
    }

    // =============================
    // CRUZ
    // =============================

    for(int i = 0; i < HAB; i++){
        cruz[i][meio] = 1;
        cruz[meio][i] = 1;
    }

    // =============================
    // OCTAEDRO (losango)
    // =============================

    for(int i = 0; i < HAB; i++){
        for(int j = 0; j < HAB; j++){

            int distancia = abs(i - meio) + abs(j - meio);

            if(distancia <= meio){
                octaedro[i][j] = 1;
            }
        }
    }

    // =============================
    // POSIÇÃO DAS HABILIDADES NO TABULEIRO
    // =============================

    int origemConeLinha = 2;
    int origemConeColuna = 5;

    int origemCruzLinha = 6;
    int origemCruzColuna = 6;

    int origemOctLinha = 4;
    int origemOctColuna = 2;

    // =============================
    // APLICAR CONE
    // =============================

    for(int i = 0; i < HAB; i++){
        for(int j = 0; j < HAB; j++){

            if(cone[i][j] == 1){

                int linha = origemConeLinha + i - meio;
                int coluna = origemConeColuna + j - meio;

                if(linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM){

                    if(tabuleiro[linha][coluna] == 0){
                        tabuleiro[linha][coluna] = 5;
                    }

                }
            }
        }
    }

    // =============================
    // APLICAR CRUZ
    // =============================

    for(int i = 0; i < HAB; i++){
        for(int j = 0; j < HAB; j++){

            if(cruz[i][j] == 1){

                int linha = origemCruzLinha + i - meio;
                int coluna = origemCruzColuna + j - meio;

                if(linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM){

                    if(tabuleiro[linha][coluna] == 0){
                        tabuleiro[linha][coluna] = 5;
                    }

                }
            }
        }
    }

    // =============================
    // APLICAR OCTAEDRO
    // =============================

    for(int i = 0; i < HAB; i++){
        for(int j = 0; j < HAB; j++){

            if(octaedro[i][j] == 1){

                int linha = origemOctLinha + i - meio;
                int coluna = origemOctColuna + j - meio;

                if(linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM){

                    if(tabuleiro[linha][coluna] == 0){
                        tabuleiro[linha][coluna] = 5;
                    }

                }
            }
        }
    }

    // =============================
    // EXIBIR TABULEIRO FINAL
    // =============================

    printf("\nTABULEIRO FINAL\n\n");

    for(int i = 0; i < TAM; i++){

        for(int j = 0; j < TAM; j++){

            printf("%d ", tabuleiro[i][j]);

        }

        printf("\n");

    }

    return 0;
}
