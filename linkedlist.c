#include <stdlib.h>

typedef struct linknode{
	
	int data;
	
	void *next;//struct linked *next;
}linked_t;


static linked_t *list;//linked list ��ü 

linked_t* create_node(int value){
	linked_t* ndptr;
	
	//�����޸� �Ҵ�& ������ ����
	
	ndptr = (linked_t*)malloc( sizeof(linked_t) ); 
	if (ndptr == NULL)
	{   printf("ERROR\n"); 
		return NULL;
	}//ndptr�� NULL���� Ȯ��
	 
	
	ndptr -> data = value;
	ndptr -> next = NULL;
	
	return ndptr;
	
} 
