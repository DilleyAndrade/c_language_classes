//Sizeof operator in C
//Informs the amount of bits of a variable
#include<stdio.h>;

int main(){
  printf("%zu\n", sizeof(int));       //4bytes
  printf("%zu\n", sizeof(char));      //1bytes
  printf("%zu\n", sizeof(long long)); //8bytes
  printf("%zu\n", sizeof(float));     //4bytes
}