#include <stdio.h>
// Desafio Xadrez - Movimentação das Peças Nível Avançado
// Tema 3
// Utilizando recursão para movimentação das peças

//recursividadde movimentação da torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
//recursividade movimentação do bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispo(casas - 1); 
    }
}
//recursividade movimentação da rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}
//recursividade movimentação do cavalo
void moverCavalo(int movimentos) {
    if (movimentos > 0) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        for (int i = 0; i < 1; i++) {
            printf("Direita\n");
        }
        moverCavalo(movimentos - 1);
    }
}
//função principal
int main() {
    // Movimentação da torre no tabuleiro de xadrez
    moverTorre(5);
    // Movimentação do bispo no tabuleiro de xadrez
    moverBispo(5);
    // Movimentação da Rainha no tabuleiro de xadrez
    moverRainha(8);
    // Movimentação do Cavalo no tabuleiro de xadrez
    moverCavalo(1);
    return 0;
}
