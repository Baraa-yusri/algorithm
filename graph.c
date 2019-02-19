#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int **A;
int n;

int main(){
  int i,j,w;
  printf("Enter the size of the matrix");
  scanf("%d\n",&n);
  A=(int **)malloc(sizeof(int*)*n);
  for(i=0;i<n;i++)
      A[i]=(int *)malloc(sizeof(int)*n);

  for(i=0;i<n;i++)
      for(j=0;j<n;j++)
            A[i][j]=0;

    while (scanf("%d %d %d",&i,&j,&w)!=EOF)
    	{
            	A[i][j] = w;
            	A[j][i] = w;
      	}


/*  for(i=0;i<n;i++){
      for(j=0;j<n;j++)
            printf("%d ",A[i][j]);
      printf("\n");
}*/
int k=0;
for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++){
          if(A[i][j]>0) k++;}
printf(" the number of edges is %d\n",k);


return 0;
}
