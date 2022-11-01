/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
void
addition ()
{
  int a[3][3], b[3][3], sum[3][3], i, j;
  int *p = &a[0][0];
  int *q = &b[0][0];
  int *r = &sum[0][0];

  printf ("ENTER THE ELEMENTS OF FIRST MATRIX\n");
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j)
      {
	scanf ("%d", (p + (i * 3) + j));
      }

  printf ("ENTER THE ELEMENTS OF SECOND MATRIX\n");
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j)
      {
	scanf ("%d", (q + (i * 3) + j));
      }

  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j)
      {
	*(r + (i * 3) + j) = *(p + (i * 3) + j) + *(q + (i * 3) + j);
      }

  printf ("ADDITION OF TWO MATIRCES IS : \n");
  for (i = 0; i < 3; ++i)
    {
      for (j = 0; j < 3; ++j)
	{
	  printf ("%d   ", *(r + (i * 3) + j));
	}
      printf ("\n");
    }

}

void
multiplication ()
{
  int a[10][10], b[10][10], c[10][10], i, j, k;
  int *p = &a[0][0];
  int *q = &b[0][0];
  int *r = &c[0][0];

  printf ("ENTER THE ELEMENTS OF THE FIRST MATRIX:\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  scanf ("%d", (p + (i * 3) + j));
	}
    }

  printf ("ENTER THE ELEMENTS OF SECOND MATRIX\n");

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  scanf ("%d", (q + (i * 3) + j));
	}
    }

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  *(r + (i * 3) + j) = 0;
	  for (k = 0; k < 3; k++)
	    {
	      *(r + (i * 3) + j) += *(p + (i * 3) + k) * *(q + (k * 3) + j);
	    }
	}
    }

  printf ("The product of the two matrices is: \n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("%d\t", *(r + (i * 3) + j));
	}
      printf ("\n");
    }
}

void
saddlepoint ()
{

  int i, j, k, n, min, max, a[3][3], c[2][2];





  printf ("Enter your entries for the input matrix:\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }


  for (i = 0; i < 3; i++)
    {
      min = a[i][0];
      for (j = 0; j < 3; j++)
	{
	  if (min >= a[i][j])
	    {
	      min = a[i][j];
	      c[0][0] = i;
	      c[0][1] = j;
	    }
	}

      j = c[0][1];
      max = a[0][j];
      for (k = 0; k < 3; k++)
	{
	  if (max <= a[k][j])
	    {
	      max = a[i][j];
	      c[1][0] = k;
	      c[1][1] = j;
	    }
	}


      if (min == max)
	{
	  if (c[0][0] == c[1][0] && c[0][1] == c[1][1])
	    {
	      printf ("Saddle point : %d \n", min);
	    }
	}
    }
  return 0;
}

int
main ()
{
  char c, d;
  do
    {
      printf
	("Please enter \n1 FOR THE ADDITION OF TWO MATRICES \n2 FOR MULTIPLICATION OF TWO MATRIX\n3 TO FIND SADDLE POINT OF A MATRIX\n");
      scanf (" %c", &c);
      switch (c)
	{
	case '1':
	  addition ();
	  break;
	case '2':
	  multiplication ();
	  break;
	case '3':
	  saddlepoint ();
	  break;
	default:
	  printf ("Wrong input");
	}
      printf ("Enter y to continue or n to stop\n");
      scanf (" %c", &d);
    }
  while (d == 'y');
  return 0;
}

