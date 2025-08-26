#include <stdio.h>


int main() {
       
    // Tamanho do tabuleiro
    const int linhas = 10;
    const int colunas = 10;

    // Vetores para armazenar coordenadas dos navios
    int navioVertical [3][2]; // navio com 3 partes (linha, coluna)
    int navioHorizontal [4][2]; // navio com 4 partes (linha, coluna)

    // Posição dos navios vertical (coluna fixa linha diferente)
    int colunaV = 2; // coluna fixa
    int linhaInicialV = 4; // começa na linha 4
    for (int i = 0; i < 3; i++){
        navioVertical[i][0] = linhaInicialV + i; // linha
        navioVertical[i][1] = colunaV; // coluna
    }
    //posição do navio horizontal (linha fixa coluna diferente)
    int linhaH = 7; //linha fixa
    int colunaInicialH = 5; // começa na coluna 5
    for (int i = 0; i < 4; i++) {
        navioHorizontal[i][0] = linhaH;  //linha
        navioHorizontal[i][1] = colunaInicialH + i; // coluna
    }

    // Coordenadas dos navios
    printf("=== Coordenandas dos Navios ===\n");

    printf("\nNavio Vertical ( 3 partes):\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d -> Linha: %d | coluna: %d\n",
            i+1, navioVertical[i][0], navioVertical[i][1]);

    }

    printf("\nNavio Horizontal (4 partes):\n\n");
    for (int i = 0; i < 4; i++) {
        printf("Parte %d -> linha: %d | Coluna %d\n", i + 1, navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    return 0;

    }
