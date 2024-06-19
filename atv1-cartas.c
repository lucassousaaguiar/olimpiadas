#include <stdio.h>

// Função para verificar se a sequência está ordenada crescentemente
int is_crescente(int cartas[]) {
    for (int i = 0; i < 4; i++) {
        if (cartas[i] > cartas[i+1]) {
            return 0;
        }
    }
    return 1;
}

// Função para verificar se a sequência está ordenada decrescentemente
int is_decrescente(int cartas[]) {
    for (int i = 0; i < 4; i++) {
        if (cartas[i] < cartas[i+1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int cartas[5];

    // Leitura das 5 cartas
    for (int i = 0; i < 5; i++) {
        scanf("%d", &cartas[i]);
    }

    // Verificação da ordem das cartas
    if (is_crescente(cartas)) {
        printf("C\n");
    } else if (is_decrescente(cartas)) {
        printf("D\n");
    } else {
        printf("N\n");
    }

    return 0;
}
