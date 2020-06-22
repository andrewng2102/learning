/*
 *
 * queue.h
 *
 *
 */

#ifndef INCLUDES_QUEUE_H_
#define INCLUDES_QUEUE_H_

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 	1024

/*
 * creating structure and typedef declarations
 *
 */

struct queue_struct
{
	int data[N];
	int rear;
	int front;
};

typedef struct queue_struct queue_t;

bool queue_empty(queue_t *q);

void push(queue_t *q , int x);

int pop(queue_t *q);

#endif 

/* we use INCLUDES_QUEUE_H_   */
