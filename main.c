#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int m,n,p,q,i,j,k,sumatemp;
  
  //primera matriz
  printf("Ingresa los valores de m y n: ");
  scanf("%d,%d",&m,&n);

  int MAT[m][n];
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("\nIngresa el valor [%d][%d] de la matriz: ",i,j);
      scanf("%d",&MAT[i][j]);
    }
  }
  //segunda matriz
  printf("Ingresa los valores de p y q: ");
  scanf("%d,%d",&p,&q);
  int MAT2[p][q];
  i=0;j=0;
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
      printf("\nIngresa el valor [%d][%d] de la matriz: ",i,j);
      scanf("%d",&MAT2[i][j]);
    }
  }
  printf("\n\n");
  //IMPRESION PRIMER MATRIZ
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%3d ",MAT[i][j]);
      if(j==n-1)
        printf("\n");
    }
  }
  printf("\n\n");
  //SEGUNDA MATRIZ IMPRESION
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
      printf("%3d ",MAT2[i][j]);
      if(j==q-1)
        printf("\n");
    }
  }

  //MUltiplicacion de matrices
   if(n==p){  
    printf("\nLa nueva matriz será\n");
    int i=0,j=0,k=0,sumatemp=0;
    
    /*MAT3=(int **)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
      MAT3[i]=(int*)malloc(q*sizeof(int)); */
    int MAT3[m][q];
    
    //i=0;j=0;
    while(i<m)
    {
      while(j<q)
      {
        while(k<p)
        { 
          sumatemp=sumatemp+MAT[i][k]*MAT2[k][j];  
          k++;
        }
        MAT3[i][j]=sumatemp;
        j++;
        sumatemp=0;
        k=0;
      }
      i++;
      j=0;
    }

    printf("\n\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
      {
        printf("%3d ",MAT3[i][j]);
        if(j==q-1)
          printf("\n");
      }
    }   
  }  
  else 
  {//Si las matrices no son compatibles
    printf("\nLas matrices no pueden ser multiplicadas ya que sus dimensiones no son compatibles.\n");
  }
  return 0;
}
