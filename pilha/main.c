#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(int agrc, char*agrv[]){
    StackNode* top = NULL;

    push(&top, 'A');
    push(&top, 'B');
    push(&top, 'C');

    display(top);


    printf("%c", pop(&top));

    display(top);



    printf("%c", pop(&top));
    
    printf("%c", pop(&top));
    printf("%c", pop(&top));

    exit(0);
}