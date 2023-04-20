#include <stdio.h>

int main(){
    int f;
    float c;

    f = 50; //F <- 50
    while (f <= 150){//ENQUANTO F <= 150 FAÇA
        c = (float)(5*(f-32.0)) / (float)9;
        printf("\n%i F = %f C", f, c);
        f = f + 1;
    } //FIMENQUANTO

    return 0;
}