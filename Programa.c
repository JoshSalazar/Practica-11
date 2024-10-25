/*Salazar Anicasiop Joshua
Práctica 11
Programa.*/

#include <stdio.h>
#define apar == 10
#define comp == 100

void ini_matrix (int arr[apar][comp])
{
  int i, j;
  for(i = 0; i < apar; i++)
  {
    for(j = 0; j < comp; j++)
    {
      arr[i][j]=0
    }
  }
}

void llenar (arr[apar][comp])
{
  int i, j, num, num2;

  for(i = 0; i<10; i++)
  {
    printf("Dame la cantidad de componentes para el aparato %d: ", i);
    scanf("%d", &num);
    for(j = 0; j < num; j++)
    {
      prinft("Dame el número del componente(0-99): ");
      scanf("%d", &num2);
      arr[i][num2] = 1;
    }
  }
}

void mensual (aparmen[10])
{
  int i;
  for(i = 0; i < 10; i++)
  {
    printf("Número de aparatos mensuales de %d: ");
    scanf("%d", &aparmen[i]);
  }
}
 
