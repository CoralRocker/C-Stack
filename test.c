#include <stdio.h>
#include "Stack.h"

void printStack(Stack s)
{
	while(s._size != 0)
	{
		printf("%d\t", topStack(&s));
		popStack(&s);
	}
}

int main()
{
	Stack* s = initStack();
	pushStack(s, 10);
	pushStack(s, 30);
	pushStack(s, 20);
	pushStack(s, 5);
	pushStack(s, 1);

	printf("Stack: ");
	printStack(*s);

	printf("\nStack Size: %d\n", s->_size);
	printf("Stack Top: %d\n", topStack(s));

	printf("Stack Pop: ");
	popSt
}
