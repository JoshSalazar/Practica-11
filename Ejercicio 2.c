#include <stdio.h>

int enteraGlobal;

void incremento();

int main()
{
  int cont;
  
  enteraGlobal = 0;  // La función main accede a la variable global
  
  for (cont = 0 ; cont < 5 ; cont++)
  {
    incremento();
  }
  return 0;
}
void incremento()
{

  int enteraLocal = 5;
  
  enteraGlobal += 2;
  
  printf("global(%i) + local(%i) = %d\n",enteraGlobal, enteraLocal, enteraGlobal+enteraLocal);
}
