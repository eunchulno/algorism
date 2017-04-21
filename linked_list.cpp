/*Linked List*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct tagNode{
	int Data;
	struct tagNode* NextNode;
} Node;

/*create node*/
Node* CreateNode(int NewData){
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->Data = NewData; // save data
	NewNode->NextNode = NULL; // pointer initialize NULL
	return NewNode;
}

/*destroy node*/
void DestoryNode(Node* Node){
	free(Node);
}

/*append node*/
void AppendNode(Node** Head, Node* NewNode){
	if((*Head)==NULL){
		*Head = NewNode;
	}
	else{
		Node* Tail = (*Head);
		while(Tail->NextNode != NULL){
			Tail = Tail->NextNode;
		}
		Tail->NextNode = NewNode;
	}
}

Node* GetNodeAt(Node* Head, int Location){
	Node* Current = Head;
	while(Current != NULL && (--Location)>=0){
		Current = Current->NextNode;
	}
	return Current;
}

int main(){
	Node* List = NULL;
	Node* NewNode = NULL;

	NewNode = CreateNode(123);
	AppendNode(&List, NewNode);
	NewNode = CreateNode(321);
	AppendNode(&List, NewNode);
	return 0;
}

