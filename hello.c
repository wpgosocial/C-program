#include <stdio.h>

int main(void){
    char str[20];
    printf("What is your name? ");
    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);
    return 0;
}