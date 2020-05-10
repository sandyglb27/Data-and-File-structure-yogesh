///Single linked list


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct list{
	int info;
	struct list *next;	
};

struct list *start = NULL;
void insert_node(int n);
void delete_node();
void display();


main()
{
	int n,choice;
	while(1)
	{
		
		printf("\n main menu");
		printf("1.\n insert node");
		printf("2.\n delete node");
		printf("3.\n display node value");
		printf("4. \n exit");
		printf("enter your choice (1-4);");
		scanf("%d",&choice);
		
		switch(choice)
		{
		      case 1:printf("enter the value");
		           scanf("%d",&n);
		           insert_node(n);
		           break;
		           
		           
	               case 2: delete_node();
	                        break;
	                
	                case 3:display();
			       break;
			       
			case 4:exit(0);
				           
		 }  
	}
}
//end of main()//
//en of while ()//
//end of switch case()//




void  insert_node(int n)
{
	struct list *node, *temp;
	if(start==NULL)
	{
		node=((struct list *)malloc(sizeof(struct list)) );
		node->info=n;
		node->next=NULL;
		start=node;
	}
	else
	{
		node=start;
		while(node->next!=NULL)
		{
		node=node->next;
		}
		temp=((struct list*)malloc(sizeof(struct list)));
		temp->info=n;
		temp->next=NULL;
		node->next=temp;
	}

}

 void delete_node()

{
	struct list *node,*prev;
	prev = start;
	node = prev->next;
	if(prev->next==NULL)
	{
		start=NULL;
		free(prev);
	}
	
	
	else{
		while(node->next!=NULL)
{
	node=node->next;
	prev=prev->next;
}
prev->next=NULL;
free(node);
}
}

void display()
{
	struct list *node;
	node = start;
	while(node!=NULL)
	{
		printf("%d \n",node->info);
		node = node->next;
	}
}

//Happy coding 
😊😊😊




