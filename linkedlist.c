#include <stdio.h>
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



//node ���� ������ ����
void addTail(int value)
{
	linked_t *ndptr, *newptr;
	
	if(list == NULL)//ù node�̸� list�� ������  node�� ����Ű���� �� 
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



