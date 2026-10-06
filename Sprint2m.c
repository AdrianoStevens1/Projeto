#include <stdio.h>

int main(void)
{
    int x;
    float temp;

    while (scanf("%d", &x) != 1) {
        while (getchar() != '\n');
    }
    temp = 260.0 * x / 1023 - 20;

    if (temp < -10 || temp > 190) {
        printf("Valor fora da gama\n");
    } else {
        printf("%.2f\n", temp);
    }

    return 0;
}
