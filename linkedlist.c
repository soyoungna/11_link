#include <stdlib.h>

typedef struct linknode{
	
	int data;
	
	void *next;//struct linked *next;
}linked_t;


static linked_t *list;//linked list 실체 

linked_t* create_node(int value){
	linked_t* ndptr;
	
	//동적메모리 할당& 정수값 저장
	
	ndptr = (linked_t*)malloc( sizeof(linked_t) ); 
	if (ndptr == NULL)
	{   printf("ERROR\n"); 
		return NULL;
	}//ndptr이 NULL인지 확인
	 
	
	ndptr -> data = value;
	ndptr -> next = NULL;
	
	return ndptr;
	
} 
