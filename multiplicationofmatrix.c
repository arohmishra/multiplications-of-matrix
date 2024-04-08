//wap to multiply two matrix


#include<stdio.h>
 int main()
 {
    int p,q,m,n;
    printf("enter the no. of rows and columns of first matrix:");
    scanf("%d%d",&p,&q);
    printf("enter the no. of rows and columns of second matrix:");
    scanf("%d%d",&m,&n);
   int matrix1[p][q], matrix2[m][n], matrix3[p][n],sum;
   printf("enter the elements of the first matrix\n");
   for(int i = 0; i<p; i++)
     {
        for(int j = 0; j<q; j++)
        {
            scanf("%d",&matrix1[i][j]);
          
        }
     }
printf("enter the elements of the second matrix\n");
   for(int i = 0; i<m; i++)
     {
        for(int j = 0; j<n; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
     }

     printf("first matrix is :\n");
   for(int i = 0; i<p; i++)
     {
        for(int j = 0; j<q; j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
     }
printf("second matrix is :\n");
   for(int i = 0; i<m; i++)
     {
        for(int j = 0; j<n; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
     }
     if(q==m)
     {
     	
printf("multiplication of the two matrix is:\n");
    for(int i = 0; i<p; i++)
     {
        for(int j = 0; j<n; j++)
        {
        	sum=0;
          for(int k =0; k<3; k++)
          {
            sum= sum + matrix1[i][k] * matrix2[k][j];
          }
          matrix3[i][j] = sum;
        }
     }

     for(int i = 0; i<p; i++)
     {
        for(int j = 0; j<n; j++)
        {
          printf("%d ",matrix3[i][j]);
        }
        printf("\n");
     }

	 }
	 else
	 {
	  printf("multiplication is not possible");
	 }
 }