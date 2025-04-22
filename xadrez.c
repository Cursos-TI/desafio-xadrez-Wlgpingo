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

#include <stdio.h>

// Recursão para mover a Torre
void moverTorre(int passo, int limite) {
    if (passo >= limite) return;
    printf("Direita\n");
    moverTorre(passo + 1, limite);
}

// Recursão para mover a Rainha
void moverRainha(int passo, int limite) {
    if (passo >= limite) return;
    printf("Esquerda\n");
    moverRainha(passo + 1, limite);
}

// Bispo - loops aninhados para mover na diagonal superior direita
void moverBispo(int movimentos) {
    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    printf("---\n");
}

// Cavalo - loop com variáveis múltiplas e uso de continue/break
void moverCavalo() {
    printf("Movimentação do Cavalo (L para Cima + Direita):\n");
    for (int i = 0, j = 0; i < 3 && j < 2; i++, j++) {
        if (i == 1) {
            printf("Direita\n");
            break;
        }
        if (j == 1) {
            continue;
        }
        printf("Cima\n");
    }
    printf("---\n");
}

int main() {
    // Bispo
    moverBispo(5);

    // Torre
    printf("Movimentação da Torre (Direita):\n");
    moverTorre(0, 5);
    printf("---\n");

    // Rainha
    printf("Movimentação da Rainha (Esquerda):\n");
    moverRainha(0, 8);
    printf("---\n");

    // Cavalo
    moverCavalo();

    return 0;
}
