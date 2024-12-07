#include<stdio.h>
void main()
{
    //variable declaration
    int a[10][10],i,j,row,col,zeroele=0;
    printf("Enter the row and colum:\n");
    scanf("%d%d",&row,&col);
    printf("Enter the element\n");
//scan the element
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0){
                ++zeroele;
        }
    }
    }
//Display matrix
    printf("Given matrix is\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }
    //sparce condition
if(zeroele>(row*col)/2)
{
    printf("Given matrix is sparse matrix\n");

    // Three represatation colum 
    
    printf("\nrow\tcol\tvalue\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(a[i][j]!=0){
                printf("\n%d\t %d\t %d\t",i,j,a[i][j]);
            }
            
            
        }
    }
}
else
printf("Given matrix is not sparce matrix\n");
}
/* 
output:
Enter the row and colum:
3
3
Enter the element
1
2
3
1
2
2
2
2
3
4
4
Given matrix is
	 1	 2	 3
	 1	 2	 2
	 3	 4	 4
Given matrix is not sparce matrix
output :
Enter the row and colum:
3
3
Enter the element
1
2
0
0
0
0
0
0
0
0
0
00
Given matrix is
	 1	 2	 0
	 0	 0	 0
	 0	 0	 0
Given matrix is sparse matrix
row	col	value
0	 0	 1	
0	 1	 2*/