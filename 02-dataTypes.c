//Data types

#include <stdio.h>
#include <stdbool.h> //Library that supports boolean

int main() {
  int age = 39;
  char name[7] = "Sanddep";
  float weight = 65.5;
  bool isMarried = true;
  char gender = "M";

  printf("%d\n", age); //You must use these identifiers before calling the variables
  printf("%s\n", name); //Each identifier accesses a variable type
  printf("%f\n", weight);
  printf("%d\n", isMarried);
  printf("%c\n", gender);

  return 0;
}

