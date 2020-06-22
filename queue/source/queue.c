/*
 * queue.c
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"queue.h"

/*****************FUCTIONS *************/

/* queue_empty implementation */

bool queue_empty(queue_t *q)
{
	if((q->rear)==(q->front) ||  (q->front ==-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

/* queue push() implementation */

void push(queue_t *q ,int x)
{
	q->data[(q->rear)]=x;
	(q->rear)++;
	/*  pushing element into rear and increasing */
	return;
}

/* pop implementation */

int pop(queue_t *q)
{
	if(queue_empty(q))
	{
		printf("underflow error!");
		exit(EXIT_FAILURE);
	}
	else
	{
		return (q->data)[--(q->front)];
	}
}
