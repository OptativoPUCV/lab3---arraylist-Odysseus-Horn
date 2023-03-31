#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
    
    ArrayList *array = (ArrayList*) malloc(sizeof(ArrayList));                 
    array->capacity = 2;
    array->data = malloc(array->capacity * sizeof(void**));
    array->size = 0;
    
    
    return array;
}

void append(ArrayList * l, void * data){

  if(l->capacity == l->size)
  {
    l->data = realloc(l->data, sizeof(void *) * l->capacity);
    l->capacity *= 2;
  }
  
  l->data[l->size] = data;
  l->size++;
}

void push(ArrayList * l, void * data, int i){

  if(i > l->size) return;
  
  if(l->capacity == l->size)
  {
    l->data = realloc(l->data, sizeof(void *) * l->capacity);
    l->capacity *= 2;
  }

  for(int k = l->size ; k >= i ; k--)
  {
    l->data[k] = l->data[k-1];
  }

  l->data[i] = data;
  l->size++;
}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
