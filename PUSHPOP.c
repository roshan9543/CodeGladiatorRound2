/*----- FILE PUSHPOP.C -----------------------------------------------*/
/*                                                                    */
/* A push and pop function for a stack of integers                    */
/*--------------------------------------------------------------------*/
#include <stdlib.h>
/*calc.h changed into CALC.h  */
#include "CALC.h"
/*--------------------------------------------------------------------*/
/* input:  stk - stack of integers                                    */
/*         num - value to push on the stack                           */
/* action: get a link to hold the pushed value, push link on stack    */
/*                                                                    */
/*  WE REMOVED extern   */
void push(IntStack * stk, int num)
{
  IntLink * ptr;
  ptr       = (IntLink *) malloc( sizeof(IntLink));  /*  PUSHPOP1   */
  /*   – CHANGED INTO  -(HYPEN)   */
  ptr->i    = num;                /*  PUSHPOP2  statement */
  ptr->next = stk->top;
  stk->top  = ptr;

}
/*--------------------------------------------------------------------*/
/* return: int value popped from stack                                */
/* action: pops top element from stack and gets return value from it  */
/*--------------------------------------------------------------------*/
/*  WE REMOVED extern   */
int pop(IntStack * stk)
{
  IntLink * ptr;
  int num;
   /*   – CHANGED INTO  -(HYPEN)   */
  ptr      = stk->top;
  num      = ptr->i;
  stk->top = ptr->next;
  free(ptr);
  return num;
}
