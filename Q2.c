#include <stdio.h>

int main() {
    int limite = 100; 
    int fib[limite];
    int ok;;
    int i;

    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i < limite; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    printf("Digite um numero: ");
    scanf("%d", &ok);
    
    int pertence = 0; 
    for (i = 0; i < limite; i++) {
        if (fib[i] == ok) {
            pertence = 1; 
            break;
        }
    }
    
    if(pertence){
        printf("%d pertence a sequencia de fibonacci.\n", ok);
    } 
    
    else{
        printf("%d nao pertence a sequencia de fibonacci.\n", ok);
    }
    
    return 0;
}
