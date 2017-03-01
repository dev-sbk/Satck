#include<stdio.h>
#include<stdlib.h>
/*------- Définition des structures --------*/
typedef enum boolean{
	false ,
	true  
}boolean;
typedef struct StackElement{ 
    int value;
    struct StackElement *next;
}StackElement,*Stack;
/* --------------- Prototype des fonctions -------------------*/
Stack newStack();
boolean isEmptyStack(Stack st);
Stack pushStack(Stack st,int x);
Stack popStack(Stack st);
void printStack(Stack st);
int topStack(Stack st);
int stackLength(Stack st);

