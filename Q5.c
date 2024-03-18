#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    int i;

    printf("Digite uma frase/palavra: ");
    gets(s);

    for(i = strlen(s) - 1; i >= 0; i--){
        printf("%c", s[i]);
    }

    return 0;
}