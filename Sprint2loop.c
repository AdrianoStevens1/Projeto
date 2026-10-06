#include <stdio.h>

int main(void) {
    int x;

    while (1) {
        printf("Introduza o valor do sensor (0 a 1023): ");

        if (scanf("%d", &x) != 1) {
            int ch;
            if (feof(stdin)) {
                break;
            }
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            printf("Entrada inválida.\n");
            continue;
        }

        if (x < 0 || x > 1023) {
            printf("Valor inválido.\n");
            continue;
        }

        double temp = 260.0 * x / 1023.0 - 20.0;
        if (temp < -10.0 || temp > 190.0) {
            printf("Valor fora de gama.\n");
            continue;
        }

        printf("Temperatura: %.2f °C\n", temp);
    }

    return 0;
}