/*
 * proj_queue.c
 *
 * created on :
 * 	Author:
 *
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "queue.h"

int main()
{
	/* declaring and initialize variables 
	 */

	queue_t queue;
	queue.front =-1;
	queue.rear=-1;

	int arr[]={25,52 ,1152,72,0,68,59,33};
	size_t L=sizeof(arr)/sizeof(int);

	/* load queue */ 
	size_t i;

	/* iterating through the queue and increasing the front and reaer of the queue  as we are pushing the elements into the queue  */

	queue.front += 1;
	queue.rear+=1;
	for (i =0;i!=L ;i++)
	{
		printf("queue.front = %zu, ",queue.front);
		push(&queue, arr[i]);
		printf("pushing %d\n " ,arr[i]);
	}

	/* pop queue  */ 
	int x;
	while(queue_empty(&queue) ==false)
	{
		printf("queue.front = %zu , ",queue.front);
		x =pop(&stack);
		queue.front++;
		printf("popping%d\n",x);
	}

	return EXIT_SUCESS;
}
