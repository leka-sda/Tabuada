#include <stdio.h>

int main(void) {
  
  // VARIÁVEIS
    int numero; 
    
    printf("Me dê um número e te darei a tabuada desse número! \n");
    scanf ("%d", &numero);
    printf ("Tranquilo! A tabuada de %d é:\n", numero);
  
  // CALCULA A TABUADA 
  
    for (int i=0; i<=10; i++) {
        printf ("%d x %d = %d\n", numero, i, numero*i);
    }
 }