/* Name : Rutik Santosh Harbale
class: SY-A
Roll no :126
*/
#include<stdio.h>
int size;
int a[100];
// display 
int display(){
    printf("\nArray after operation:\n ");
    for(int i=0;i<size;i++){
        printf("\t%d",a[i]);
    }
}
int insert(int position,int element){
    if (position<=size)
    {
        size++;
    for(int i=size-1;i>=position-1;i--){
        a[i+1]=a[i];
    }
    a[position-1]=element;
    display();
 }
    else
    {
        printf("plese enter valid position");
    }
}

int insert_last(int element){
    size++;
a[size-1]=element;
}
int delete(int position){
   if (position<=size)
   {
     
    for(int i=position-1;i<size-1;i++){
        a[i]=a[i+1];
    }
   size--;
     display();
   }
   else
   {
   printf("\ninvalid position");
   }
   
}

int serch(int element){
    for(int i=0;i<size;i++){
if(a[i]==element){
printf("the serched element is present at %d position",i+1);
}
    }
}
//main array
void main(){
    int i;
    printf("Enter array size :");
    scanf("%d",&size);
    printf("\nplese enter element in arry:\n");
     
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    printf("array Before operation");
    for(int i=0;i<size;i++){
        printf("\t%d",a[i]);
    }
    int ch ;
    int p,ele ;

    printf("\nEnter the choice:");
   do{ 
    printf("\n1.insert\n2.insert at last\n3.delete element in array\n4.Serch  element \n5.display array:\n 6.Exit\n");
    scanf("%d",&ch);

    switch (ch)    //Switch case
    {
        case 1:
        printf("Enter the insert element:\nplese input: \nposition and Element\t");
        scanf("%d%d",&p,&ele);
        insert(p,ele);
        break;
         case 2:
         printf("Enter the insert element at last\n element");
         scanf("%d",&ele);
         insert_last(ele);
	display();
         break;
         case 3:
         printf("Enter the delete element position\n  ");
         scanf("%d",&p);
         delete(p);
	display();
         break;
         case 4:
         printf("serch element");
         scanf("%d",&ele);
         serch(ele);
	display();

         break;
         
        case 5:
              display();
    
    default :
    printf("exit");
        break;
    }
}while(ch<=5);
}

/*
output :
Enter array size :6

plese enter element in arry:
1 2 3 4 5 6
array Before operation	1	2	3	4	5	6
Enter the choice:
1.insert
2.insert at last
3.delete element in array
4.Serch  element 
5.display array:
 6.Exit
1
Enter the insert element:
plese input: 
position and Element	2
3

Array after operation:
 	1	3	2	3	4	5	6
1.insert
2.insert at last
3.delete element in array
4.Serch  element 
5.display array:
 6.Exit
3
Enter the delete element position
  5

Array after operation:
 	1	3	2	3	5	6
Array after operation:
 	1	3	2	3	5	6
1.insert
2.insert at last
3.delete element in array
4.Serch  element 
5.display array:
 6.Exit
4
serch element5
the serched element is present at 5 position
Array after operation:
 	1	3	2	3	5	6
1.insert
2.insert at last
3.delete element in array
4.Serch  element 
5.display array:
 6.Exit
5

Array after operation:
 	1	3	2	3	5	6exit
1.insert
2.insert at last
3.delete element in array
4.Serch  element 
5.display array:
 6.Exit
6

   
/*






















