#include <stdio.h>
#include <stdlib.h>

struct node{
  char *nome;
  int value;
  struct node *nextNode;
};
typedef struct node Node;

Node *initialize(void);
Node *createNewNode(int value);
Node *insertAtFirst(Node **head, Node *nodeToInsert);
Node *insertAtMiddle(Node *head, Node *nodeToInsert);
Node *findNode(Node *head, int valueToFind);
Node *growOrderNodes(Node **head);
void printNode(Node *nodeToPrint);


int main(void){
  Node *head = NULL;
  Node *aux;
  char *nome;

  
  int i;
  for(i=0; i< 10; i++){
    aux=createNewNode(i);
    insertAtFirst(&head, aux);
  }

  printNode(head);
  return 0;
}

Node *initialize(void){
  return NULL;
}

Node *createNewNode(int value){
  Node *newNode = malloc(sizeof(Node));
  newNode-> value = value;
  newNode-> nextNode = NULL;
  return newNode;
}

Node *insertAtFirst(Node **head, Node *nodeToInsert){
  nodeToInsert->nextNode = *head;
  *head = nodeToInsert;
  return nodeToInsert;
}

Node *insertAtMiddle(Node *head, Node *nodeToInsert){
  //gotta make
}

//if you only need the content of the node, this function may be turned to a int, void or whatever if the struct has no more than one thing to return(like this case), but for general purpose, i`m making it a Node to be reused and return any type of struct.
Node *findNode(Node *head, int valueToFind){
  Node *foundNode = head;
  while( foundNode !=NULL && foundNode->value != valueToFind)  {
    foundNode = foundNode->nextNode;
  }
  return foundNode;
}


Node *growOrderNodes(Node **head){

  return *head;
}


void printNode(Node *nodeToPrint){
  Node *temp = nodeToPrint;
  while (temp != NULL){
    printf("%d - ",temp->value);
    temp = temp->nextNode;
  }
  printf("NULL\n");

}