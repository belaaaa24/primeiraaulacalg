#include <stdio.h>
#include <math.h>

/* exemplo de algoritmos */
/*Algoritmo "programa1"

Var

   x1, x2, y1, y2: inteiro

   d : real

Inicio


     leia(x1, y1)

     leia(x2, y2)

     d<- RAIZQ(EXP(x2-x1,2)+EXP(y2-y1,2) )

     escreva( " Distancia" , d )


Fimalgoritmo*/
int main(){ /*VAR E INICIO*/
    int x1, x2, y1, y2;
    float d;
    
    printf("Digite os valores x1, y1:\n");
    scanf("%i", &x1); /*Leia x1*/
    scanf("%i", &y1); /*Leia y1*/
    printf("Digite os valores x2, y2:\n");
    scanf("%i", &x2); /*Leia x2*/
    scanf("%i", &y2); /*Leia y2*/
    printf("Leu os valores P1(%i,%i) e P2(%i, %i)", x1, y1, x2, y2);

    d = sqrt ( pow(x2-x1,2)+pow(y2-y1,2));

    printf("\nDistância %f\n", d);


    return 0;
} /*FIMALGORITMO*/