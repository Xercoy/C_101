/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 21: Argv                                                            */
/* Created On: 01/08/2014                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  int i;
  i = 0;

  printf("\nArgv:\n");

  for (; i <= (argc - 1); i++)
  {
    printf("\n%s", argv[i]);
  }

  printf("\n\n");

  return 0;
}

