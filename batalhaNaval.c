#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int tabuleiro[10][10];
    int i;
    int t;
    int b;
    int agua = 0;
    int navio = 3;
    int tamanho_navio = 3;

    int posicaoNavioUmLinha = 2;
    int posicaoNavioUmColuna = 4;

    int posicaoNavioDoisLinha = 5;
    int posicaoNavioDoisColuna = 7;

    int posicaoNavioTresLinha = 3;
    int posicaoNavioTresColuna = 2;

    int posicaoNavioQuatroLinha = 6;
    int posicaoNavioQuatroColuna = 2;

    for(i = 0; i < 10; i++) {
        for(t = 0; t < 10; t++) {
            tabuleiro[i][t] = agua;
        }
    }


    for(int b = 0; b < tamanho_navio; b++){
        if(posicaoNavioUmColuna + b < 10){
           tabuleiro[posicaoNavioUmLinha][posicaoNavioUmColuna + b] = navio;
        }
    }


    for(int b = 0; b < tamanho_navio; b++){
        if(posicaoNavioDoisLinha + b < 10){
           tabuleiro[posicaoNavioDoisLinha + b][posicaoNavioDoisColuna] = navio;
        }
    }

    for(int b = 0; b < tamanho_navio; b++){
        if(posicaoNavioTresLinha + b < 10){
           tabuleiro[posicaoNavioTresLinha + b][posicaoNavioTresColuna + b] = navio;
        }
    }

    for(int b = 0; b < tamanho_navio; b++){
        if(posicaoNavioQuatroLinha + b < 10){
           tabuleiro[posicaoNavioQuatroLinha + b][posicaoNavioQuatroColuna + b] = navio;
        }
    }


    for (int i = 0; i < 10; i++) {
        for (int t = 0; t < 10; t++) {
            printf("%d", tabuleiro[i][t]);
        }
        printf("\n");
    }

    return 0;
}
