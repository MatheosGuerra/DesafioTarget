#include <stdio.h>

int main(){
    int INDICE = 13, SOMA = 0, K = 0;

    while(K < INDICE){
        K++;
        SOMA = SOMA + K;
    }
    printf("%d", SOMA);

    return 0;
}

// O valor da variavel soma no final do programa é 91.