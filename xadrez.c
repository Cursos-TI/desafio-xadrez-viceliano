#include <stdio.h>

// ------------------ Torre ------------------
// Movimento recursivo para a direita (5 casas)
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// ------------------ Rainha ------------------
// Movimento recursivo para a esquerda (8 casas)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// ------------------ Bispo ------------------
// Movimento recursivo com loop aninhado: diagonal para cima e direita (5 casas)
void moverBispo(int passos) {
    if (passos == 0) return;

    // Loop aninhado obrigatório (ainda que simples)
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passos - 1);
}

// ------------------ Cavalo ------------------
// Movimento em "L" (uma vez): 2 para cima, 1 para a direita
void moverCavalo() {
    int movimentos[8][2] = {
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };

    printf("Movimento do Cavalo:\n");

    // Loop para simular os possíveis movimentos e selecionar o desejado
    for (int i = 0; i < 8; i++) {
        int dx = movimentos[i][0];
        int dy = movimentos[i][1];

        // Ignora movimentos que não sejam para cima e direita
        if (dx < 0 || dy < 0) continue;

        // Seleciona o movimento 2 cima + 1 direita
        if (dx == 2 && dy == 1) {
            printf("Cavalo move: 2 para cima, 1 para direita (em L)\n");
            break;
        }
    }
}

// ------------------ Função Principal ------------------
int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\n");
    moverCavalo();

    return 0;
}
