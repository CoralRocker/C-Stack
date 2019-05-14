#pragma once
#include <stdlib.h>

typedef struct Stack {
	int* stack;
} Stack;

Stack initStack(int val)
{
	Stack s = { val };
	return s;
}
