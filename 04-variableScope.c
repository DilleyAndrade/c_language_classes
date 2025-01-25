//Variable scope
#include <stdio.h>;

int j = 25; //variável global
extern int x; //Variável global não declarada
//extern informa ao compilador qeu essa variável ainda será declarada, isso evita que ocorra um erro.

int main() {
  int y = 15; //Variável local
  int x = 10;

  printf("%d", j);
  printf("%d", x);
  printf("%d", y);

  return 0;
}