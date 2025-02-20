#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Aluno Igor Gomes

int main(){
    int torre = 1, bispo = 1, rainha = 1;

    for(torre; torre <= 5; torre++){
        printf("\nTorre se moveu para a %dº casa na direita.", torre);
    }
    printf("\n");

    while (bispo <= 5){
        printf("\nBispo se moveu para a %dº casa por cima, direita.", bispo);
        bispo++;
    }
    printf("\n");

    do
    {
        printf("\nRainha se moveu para a %dº casa na esquerda.", rainha);
        rainha++;
    } while (rainha <= 8);

    return 0;
}
