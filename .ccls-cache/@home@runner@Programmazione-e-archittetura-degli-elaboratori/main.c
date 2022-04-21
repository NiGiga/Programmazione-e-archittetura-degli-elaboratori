#include <stdio.h>

int main(void) {

    int a,b;

    printf("Prego, inserire il primo numero\n");
    scanf("%d",&a);

    printf("Prego, inserire il secondo numero\n");
    scanf("%d",&b);

    if(b>=0){
        printf("b è positivo\n");
    }
    else{
        printf("b è negativo\n");
    }

    if(a%2==0){
        printf("a è pari\n");
    }
    else{
        printf("a è dispari\n");
    }

    printf("La somma di a e b è: %d\n", a+b);

    int abs_a = a;
    int abs_b = b;

    if(a<0){
        abs_a = a*(-1);
    }
    if(b<0){
        abs_b = b*(-1);
    }

    printf("La somma dei valori assoluti di a e b è: %d\n", abs_a+abs_b);

    
  return 0;
}