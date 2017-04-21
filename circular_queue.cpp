#include <stdio.h>
#define QUEUE_CAPACITY 8

int queue[QUEUE_CAPACITY]; // queue
int head = 0;		// head address
int tail = -1;		// tail address
int queueSize = 0;	// current size

void PushQueue(int n){
	if(queueSize == QUEUE_CAPACITY){
		printf("queue full!\n");
		return;
	}
	tail = (tail+1)%QUEUE_CAPACITY;
	queueSize++;
	queue[tail] = n;
}

int PopQueue(){
	int r;	
	if(queueSize == 0){
		printf("queue empty!\n");
		return 0;
	}
	r = queue[head];
	head = (head+1)%QUEUE_CAPACITY;
	queueSize--;
	return 	r;
}

int main(){
	int number, r;
	do{
		printf("input number: ");
		scanf("%d",&number);

		if(number>0){
			PushQueue(number);
		}
		else if (number == 0){
			r = PopQueue();
			if (r>0)
				printf("[%d]\n",r);
		}
	}
	while(number >= 0);
	return 0;
}





