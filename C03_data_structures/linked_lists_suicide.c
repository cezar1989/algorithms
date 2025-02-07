/*This algorithm creates N numbers of elements in a continuous linked lists
 * then at each iteration the M-th element is removed from list leaving in the 
 * end just one element in the linked list which will be displayed by index.*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int index;
    struct node *next;
};

int main(){
    int i, N, M;
    struct node *t, *x;
    printf("Please specify the number of suiciders:\n");
    scanf("%d", &N);
    printf("Please specify the M-th iteration by which the suiciders are killed:\n");
    scanf("%d", &M);
    t = (struct node *) malloc(sizeof *t);
    t->index = 1; 
    x = t;
    for (i = 2; i <= N; i++){
        t->next = (struct node *) malloc(sizeof *t);
        t = t->next;
        t->index = i;
    }
    t->next = x; 
    while (t != t->next){
        for(i = 1; i < M; i++)
            t = t->next;
        printf("%d ", t->next->index);
        x = t->next;
        t->next = t->next->next;
        free(x);
        
    }
    printf("\nThe last remaining suicider is: %d\n", t->index);

    return 0;
}
