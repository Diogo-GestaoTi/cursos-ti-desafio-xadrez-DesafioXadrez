#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   int movimentocompleto = 1; //flag para indicar se o movimento é completo ou não
    // Exemplo de movimentação da torre no tabuleiro de xadrez
    for (int i = 0; i < 5; i++){
        printf("Direita\n"); // imprime a direção do movimento
    }
    // Exemplo de movimentação do bispo no tabuleiro de xadrez
    for (int i = 0; i < 5; i++){
        printf("Cima Direita\n"); // imprime a direção do movimento
    } 
     //Exemplo de movimentação da Rainha no tabuleiro de xadrez 
    for (int i = 0; i < 8; i++){
        printf("Esquerda\n"); // imprime a direção do movimento
    }
    //Exemplo de Movimentação do Cavalo no tabuleiro de xadrez
    while (movimentocompleto --){
        for (int i = 0; i < 2; i++){
            printf("Cima\n"); // imprime a direção do movimento
        }
        for (int i = 0; i < 1; i++){
            printf("Direita\n"); // imprime a direção do movimento
        }
    }
return 0;
}
