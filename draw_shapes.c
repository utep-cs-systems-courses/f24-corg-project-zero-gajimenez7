#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
     }
}

void print_arrow(int leftCol, int size)
{
  int col;
  for (int row = 0; row <= size; row++)
    {
      int minCol, maxCol;
      minCol = leftCol + size - row;
      maxCol = leftCol + size + row;

      for (col = 0; col < minCol; col++)
	{
	  putchar(' ');
	}
      for (       ; col <= maxCol; col++)
	{
	  putchar('*');
	}
      putchar('\n');
    }

  leftCol = leftCol + (size / 2);
  int endCol = leftCol + size;
  for (int row = 2; row < size; row++)
    {
      for (col = 0; col < leftCol; col++)
	{
	  putchar(' ');
	}
      for (      ; col < endCol; col++)
	{
	  putchar('*');
	}
      putchar('\n');
    }
}

