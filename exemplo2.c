#include <stdio.h>
/*Algoritmo "programa3valores"

Var

   cod: inteiro

Inicio


   escreva( " Digite código entre 1 a 15:")

   leia( cod )

   ESCOLHA ( cod )

   CASO 1

      escreval("Não perecível")

   CASO 2 ATE 4 

         escreval("Perecível")

   CASO 5, 6

   

   CASO 7

   

   CASO 8 ATE 15

   

   OUTROCASO

        escreval("Código inválido")

   FIMESCOLHA

Fimalgoritmo*/

int main(){
    int cod;
    printf("Digite código entre 1 a 15:");
    scanf("%i", &cod); //Leia ( cod )
    switch(cod){//Escolha( cod )
        case 1:
            printf("\nNão perecível");
            break; //SENAO
        case 2:
        case 3:
        case 4:
            printf("\nPerecível");
            break;
        case 5:
        case 6:
            printf("\nHigiene");
            break;
        case 7:
            printf("\nLimpeza e utensílios");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        printf("\nVestuario");
        break;
        default: //o default se o número n for especificado antes
        printf("\nCódigo Inválido");
    } //FIMESCOLHA

    return 0;
}