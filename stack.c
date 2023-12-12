#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr) {
    if(ptr->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct stack *ptr) {
    if(ptr->top == (ptr->size - 1)) {
        return 1;
    }
    else {
        return 0;
    }
}

void insert(data) {
    
}

int main() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->top = -1;


    // s->arr[0] = 7;
    // s->top++;

    if(isEmpty(s) == 1) {
        printf("Stack is empty\n");
    }
    else {
        printf("Stack is not empty\n");
    }

    if(isFull(s) == 1) {
        printf("Stack is Full\n");
    }
    else {
        printf("Stack is not full\n");
    }
    return 0;
}

