#include <stdio.h>

int main(void)
{
  int x;
  float temp;
  
  scanf("%d", &x);
  
  temp = 260.0 * x / 1023 - 20;
  
  printf("%.2f\n", temp);
  
  if (temp < -10)
  {
    printf("Valor fora de gama!/n");
  }
  else if (temp > 190)
  {
    printf("Valor fora de gama!\n");
  }
  else
  {
    printf("Temperatura normal.\n");
  }
  
	return 0;
}

