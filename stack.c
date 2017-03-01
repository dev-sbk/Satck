#include "stack.h"
/*
* Créer une pile 
*/
Stack newStack(){
	
	return NULL;
}
/*
* Vérifier si la pile est vide ou bien non
*/
boolean isEmptyStack(Stack st){
	
	if(st == NULL){
		puts("------------ Warning : stack is empty ----------\n");
		return true;
	}
	return false;
}
/*
* Ajouter une nouvelle value a la pile => empiler la pile
*/
Stack pushStack(Stack st,int x){
	StackElement *element;
	element=(StackElement*) malloc(sizeof(StackElement));
	if(element == NULL){
		puts("------------ Warning : problem malloc memory ---------------\n");
		exit(EXIT_FAILURE);
	}
	element->value=x;
	element->next=st;
	return element;
}

/*
* Supprimer une valuer depuis la pile => depiler
*/
Stack popStack(Stack st){
	StackElement *elem;
	if(!isEmptyStack(st)){
		elem=st->next;
		free(st);
		return elem;
	}
	return st;	
}
/*
* Afficher le contenu de la pile
*/
void printStack(Stack st){
	
	if(!isEmptyStack(st)){
		puts("--------------- AFFICHAGE--------------\n");
		while(st != NULL){
			printf("[%i] \n",st->value);
			st=st->next;
		}
	}
}
/*
* Retourner la sommer (valuer) de la pile
*/
int topStack(Stack st){
	if(!isEmptyStack(st)){
	   return st->value;	
	}
	return 0;
}
/*
* Retourner la longeur de la pile (taille)
*/
int stackLength(Stack st){
	int length=0;
	while(st != NULL){
		length++;
		st=st->next;
	}
	return length;
}
