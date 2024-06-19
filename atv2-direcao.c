#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para converter a direção em ângulo
int direcao_para_angulo(const char *direcao) {
    if (strcmp(direcao, "norte") == 0) return 0;
    if (strcmp(direcao, "leste") == 0) return 90;
    if (strcmp(direcao, "sul") == 0) return 180;
    if (strcmp(direcao, "oeste") == 0) return 270;
    return -1; // Valor inválido (não deve acontecer com entradas válidas)
}

int main() {
    char direcao_inicial[10], direcao_oasis[10];

    // Leitura das direções
    scanf("%s %s", direcao_inicial, direcao_oasis);

    // Conversão das direções para ângulos
    int angulo_inicial = direcao_para_angulo(direcao_inicial);
    int angulo_oasis = direcao_para_angulo(direcao_oasis);

    // Cálculo do menor ângulo
    int diferenca = abs(angulo_oasis - angulo_inicial);
    int menor_angulo = diferenca > 180 ? 360 - diferenca : diferenca;

    // Impressão do resultado
    printf("%d\n", menor_angulo);

    return 0;
}
