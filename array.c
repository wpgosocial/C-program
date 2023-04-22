#include <stdio.h>

int main(int argc, char *argv[]){
    int theNumbers[]= {5,10,15,20};
    theNumbers [0] = 12;

    printf("The number is: %d",  theNumbers[0]);

    return 0;
}