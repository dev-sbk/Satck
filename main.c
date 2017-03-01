#include "stack.c"

int main (void){
	Stack st=newStack();
	st=pushStack(st,5);
	st=pushStack(st,10);
	st=pushStack(st,15);
    printStack(st);
    printf("---- la sommer  de la pile est : %i -------\n",topStack(st));
    printf("---- la longeur de la pile est : %i -------\n",stackLength(st));
    system("PAUSE");
	return 0;
}
