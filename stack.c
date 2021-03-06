#include<stdio.h>
#include<malloc.h>
#include "stack.h"
#include "graph.h"

int top;
int *stack;
int vertexid;
//int top = -1;


void push(int item) {
	stack[++top] = item;
}

int pop() {
	if(top != -1)
		return stack[top--];
	else
		return -1;	
}

//Returns 0 if no duplicate, else return 1
int checkduplicate(int a) {
	int i;
	while(top != -1) {
		for(i = 0; i < top; i++)
			if(a == stack[i])
				return 1;
		return 0;		
	}
	return 0;
}
