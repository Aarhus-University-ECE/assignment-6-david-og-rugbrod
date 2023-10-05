#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
int size(node *head) 
{
  int count = 0;
  node *p = head;
  while (p->next != NULL)
  {
    count++;
    p = p->next;
  }
  
	return count;
}

// exersice 3.c and 3.d
void printout(node *head) {

  /*
    Answer to 3.c
    initially the code doesnt run. because we dont 
    go to the next element in the tree. thus the code
    will run indefinetly
  */


  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  node *p = head->next;
  while (p != NULL) 
  {
    printf("%d, ", p->data); 
    p = p->next;
  }
  printf("\n");
}

// exersice 3.e
int largest(node *head) {
  // pre:  head points to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list

int x = head->data;
  node *p = head->next;
  while (p != NULL) 
  {
    if(p->data > x){
      x = p->data;
    }
    //printf("%d, ", p->data); 
    p = p->next;
  }
  return x;
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  /*
      root
         \
          1
           \ 
            3
             \
              2
               \
                null       
  */

 printf("%d\n",size(list));
  add(list, 2);
  /*
      root 
         \
          1
           \ 
            3
             \
              2
               \
                2
                 \
                  null
  */
  printf("%d\n",size(list));
  return 0;
}

#endif