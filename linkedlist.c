#include <stdio.h>
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



//node 연결 끝에다 연결
void addTail(int value)
{
	linked_t *ndptr, *newptr;
	
	if(list == NULL)//첫 node이면 list가 생성한  node를 가리키도록 함 
	{
	  return;
	}
	else
	{
		ndptr = list;
		while (ndptr->next != NULL){
			ndptr = ndptr->next;
		}
		
		newptr = create_node(value);
		ndptr->next = newptr;
	}
} 

void genlist(void)
{
	list = create_node(0);

	return;
}

void print_list(int n)
{
    linked_t *ndptr;
	int i=0;
	
     ndptr = (linked_t*)list->next;
	while(ndptr != NULL)
	{
	  i++;
	  if(i == n)
	  {
	  	printf("%i-th value : %i\n",i,ndptr->data);
	  	break;
	  }

	  ndptr = ndptr->next;	
	}
}



