#include "queue.h"
#include <stdio.h>

/*Precis criar : inserção, remoção e
consulta
Tenho que criar uma forma de pular o proximo quando a fila andar*/
struct Queue_ {
    int *elements;
    int front, rear, length, quantity;
};

Queue* create_queue(int length){
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    if(queue != NULL){/*se ela estiver nula ele vai criar*/
        queue->elements = (int*) malloc(length * sizeof(int));/*Ta fazendo aquela operação para ver quantos bytes são necessarios*/
        queue->front = 0;
        queue->rear = 0;
        queue->quantity = 0;
        queue->length = length;
    }else{
        free(queue)
        return NULL
    }
    return stack
}

int insert(Queue* queue, int value){;/* insere o valor passado pelo parâmetro value no final da
fila. Se o retorno da função for zero, a inserção foi realizada com sucesso.*/
    if(queue == NULL) return 1; //Verifica se ta nulo
    if(queue -> quantity == queue-> length) return 2; //Verifica se ta cheia

    queue->element[queue->rear] = value;
    queue->rear = (queue->rear + 1)
    return 0;
}

int remove(Queue* queue, int* value);/* retira o valor do início da fila e devolve no ponteiro passado
por parâmetro value. Se o retorno da função for zero, a remoção foi realizada
com sucesso*/
int peek(Queue* queue, int* value);/*onsulta o elemento que está no início da fila, sem retirá-lo.
O retorno do valor do início da fila acontece pelo ponteiro value passado como
parâmetro*/
void free_queue(Queue* queue);