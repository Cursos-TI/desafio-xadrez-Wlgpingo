#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

#include <stdio.h>

// Constantes para os movimentos
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Movimentação do Bispo (diagonal superior direita)
    // Usaremos "Cima" seguido de "Direita" para simular diagonal
    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação da Torre (para a direita)
    printf("Movimentação da Torre (Direita):\n");
    int j = 0;
    while (j < MOVIMENTO_TORRE) {
        printf("Direita\n");
        j++;
    }

    printf("\n");

    // Movimentação da Rainha (para a esquerda)
    printf("Movimentação da Rainha (Esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOVIMENTO_RAINHA);

    return 0;
}

#include <stdio.h>

#define NUM_MOVIMENTOS 3  // Quantas vezes o cavalo vai fazer o L

int main() {
    printf("Movimentação do Cavalo (em L para Baixo + Esquerda):\n\n");

    // Loop externo usando FOR para repetir o movimento L
    for (int i = 0; i < NUM_MOVIMENTOS; i++) {
        int passos_baixo = 0;

        // Loop interno usando WHILE para 2 passos para baixo
        while (passos_baixo < 2) {
            printf("Baixo\n");
            passos_baixo++;
        }

        // Um passo para a esquerda
        printf("Esquerda\n");

        printf("---\n"); // Separador visual entre os movimentos L
    }

    return 0;
}

