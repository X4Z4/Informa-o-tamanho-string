#include <stdio.h>
#include <string.h>

int main(void) {
  char s1[50], s2[50];
  
  printf("Escreva um texto: ");
  fgets(s1,200,stdin);
  int n = strlen(s1);
  printf("\nA string: %s tem comprimento de %d caracteres",s1,n-1);
  return 0;
}
