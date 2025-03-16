#include "queue.h"
#include <stdio.h>

/*Precis criar : inserção, remoção e
consulta
Tenho que criar uma forma de pular o proximo quando a fila andar*/
struct Queue_ {
    int *elements;
    int quantity, length;
};

*Queue create_queue(int length){
    *Queue queue =(Queue*) malloc(sizeof(Queue));
    queue->elements  = (int*)malloc(sizeof(int*));
    queue->quantity = 0;  
    queue->length = length;        
};

int insert(Queue* queue, int value){
    if(queue =! NULL) return 1;/*n deveria ser se ela for nula?*/
    if(queue->quantity >= queue->length)return 2;/*nao deveria ser maior ou igual?*/
    queue->elements[queue->quantity]= value;
    queue->quantity++
    // queue->elements[queue->quantity++] = value;  Dessa forma ele n vai colocar o valor no quantity +1 aon inves de colocar no quantity?
    return 0;
};
int remove(Queue* queue, int* value){
    if(queue =! NULL) return 1;
    if(queue-> quantity >= queue->lenght)return 2;
    //*value = queue->elements[0];//Pq o professor colocou essa linha??
    int i;
    for(i=1;i<queue->quantity;i++){
        queue->elements[i]= queue->elements[i-1]
    }
    queue->quantity--
    return 0;
}
int peek(Queue* queue, int* value){
    if(queue =! NULL) return 1;
    if(queue->quantity == queue->lenght)return 2;
    printf("O valor do primeiro da fila eh %d\n", queue->elements[0]);
    return 0;
}
void free_queue(Queue* queue){
    free(queue);
    free(queue->elements);
}

   