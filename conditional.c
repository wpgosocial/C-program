#include <stdio.h>


int main(void){
    int x;
    int y;
     printf ("What is X?: ", &x);
     scanf ("%dWhat is X?: ", &x);
     printf ("What is y?: ", &y);
     scanf ("%dWhat is Y?: ", &y);

     int sum = x + y;
     printf("The Sum is: %d\n", sum);
     /*printf("The Sum is: ", sum);*/

if (x > y){
        printf("X is greater than Y\n" );
}
else if (x < y){

    printf("Y is greater than x\n" );
}
else {
    printf("X and Y are equal\n" );
}

        return 0;
}