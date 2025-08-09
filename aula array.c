#include <stdio.h>
 
int main() {
    char coluna[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    char linha[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    int tabuleiro [10][10]; {
        {0,0,0,0,0,0,0,0,0,0}, //inicializa a primeira linha do tabuleiro
        {0,0,3,3,3,0,0,0,0,0}, //inicializa a segunda linha do tabuleiro
        {0,0,0,0,0,0,0,0,0,0}, //inicializa a terceira linha do tabuleiro
        {0,0,0,3,0,0,0,0,0,0}, //inicializa a quarta linha do tabuleiro
        {0,0,0,0,3,0,0,0,0,0}, //inicializa a quinta linha do tabuleiro
        {0,0,0,0,0,3,0,0,0,0}, //inicializa a sexta linha do tabuleiro
        {0,0,0,0,0,0,0,0,0,0}, //inicializa a sétima linha do tabuleiro
        {0,0,0,0,0,0,0,0,0,3}, //inicializa a oitava linha do tabuleiro
        {0,0,0,0,0,0,0,0,0,3}, //inicializa a nona linha do tabuleiro
        {0,0,0,0,0,0,0,0,0,3}  //inicializa a décima linha do tabuleiro
    }

    printf("---TABULEIRO BATALHA NAVAL---\n");

    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf(" %c ", coluna[i]); //imprime as colunas
    }
    printf("\n");
    
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]); //imprime as linhas
        for (int i = 0; i < 10; i++) {
            tabuleiro[j][i] = 0; //inicializa o tabuleiro com 0
            printf(" %d ", tabuleiro[j][i]); //imprime o tabuleiro
        }
        printf("\n");
    }   

    return 0;
}