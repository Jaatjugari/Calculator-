#include<stdio.h>
int
main ()
{
  int i, j, k,m,n,p,q,x,transpose[3][3], a[3][3], b[3][3], multiply[3][3], add[3][3],
    sub[3][3], y;

  printf ("\t\t\t\t\t\t matrix calculator\n");
  
printf("--------------------------------------------------------------------------------------------------------------------\n");
 
printf("warning--- these operations only for square matrices\n\n");
    printf("enter the rows and columns of matrix a\n");
    scanf("%d%d",&m,&n);
    printf("enter the rows and columns for matrix b\n");
    scanf("%d%d",&p,&q);
  printf ("enter the matrix elements\n\n");
  printf("first matrix elements\n");

  for (i = 0; i <m; i++)
    {
      for (j = 0; j <n; j++)
	{ printf("a[%d][%d]\t",i,j);
	  scanf ("%d", &a[i][j]);
	}

    }
    printf("second matrix elements\n");
  for (i = 0; i < p; i++)
    {
      for (j = 0; j < q; j++)
	{
		printf("b[%d][%d]",i,j);
	  scanf ("%d", &b[i][j]);
	}

    }
 printf("\t type 1 for trnspose\n\ttype 2 for addition\n\ttype 3 for subtraction\n\ttype 4 for multiplication\n");
  printf ("enter the operation type\n");
  scanf ("%d", &y);
  switch(y)
    {
   case 1:{
   	printf("enter 1 for transpose of a and 2 for transpose of b\n");
   	scanf("%d",&x);
   	if(x=1){
	   
      for (i = 0; i < m; i++)
	{
	  for (j = 0; j < n; j++)
	    {

	      transpose[j][i] = a[i][j];
	    }

	} for (i = 0; i < m; i++)
	{
	  for (j = 0; j < n; j++)
	    {
	      printf ("%d\t", transpose[i][j]);
	    }
	  printf ("\n");
	}
	
	
	
	
	
	
	}else if(x=2){
		
		  
      for (i = 0; i < p; i++)
	{
	  for (j = 0; j < q; j++)
	    {

	      transpose[j][i] = b[i][j];
	    }

	}
	

      for (i = 0; i < p; i++)
	{
	  for (j = 0; j < q; j++)
	    {
	      printf ("%d\t", transpose[i][j]);
	    }
	  printf ("\n");
	}


}


    } break;
   case 2:
    {
      for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
	    {
	      add[i][j] = a[i][j] + b[i][j];
	    }

	}
      for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
	    {
	      printf ("%d\t", add[i][j]);
	    }
	  printf ("\n");
	}



    }break;
  case 3:
    {


      for (i = 0; i < m; i++)
	{
	  for (j = 0; j < n; j++)
	    {
	      sub[i][j] = a[i][j] - b[i][j];
	    }

	}
      for (i = 0; i < m; i++)
	{
	  for (j = 0; j < n; j++)
	    {
	      printf ("%d\t", sub[i][j]);
	    }
	  printf ("\n");
	}

    }break;
     case 4:
    { 
    if(n=p){
	
      for (i = 0; i < m; i++)
	{
	  for (j = 0; j < q; j++)
	    {
	      multiply[i][j] = 0;
	      for (k = 0; k < p; k++)
		{
		  multiply[i][j] += a[i][k] * b[k][j];
		}
	    }
	}
      for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
	    {
	      printf ("%d\t", multiply[i][j]);
	    }
	  printf ("\n");
	}


}
    }break;
 default:
 printf("operation does not complished");
}
  return 0;
}

