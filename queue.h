typedef struct Queue_ Queue;

Queue* create_queue();

int insert(Queue* queue, int value);
int remove(Queue* queue, int* value);
int peek(Queue* queue, int* value);
void free_queue(Queue* queue);
