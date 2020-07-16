#include <stdio.h>
#include "array_sort.h"

void swap(int list[],int i, int j) {
  int temp;
  temp = list[i];
  list[i] = list[j];
  list[j] = temp;
};

void insert_at(int list[], int length, int to, int from) {
  for(size_t i = from; i <= to; i++)
    swap(list,i,to);
};

void insertion_sort(int list[], int length) {
  for(size_t i = 0; i < length; i++) {
    for(size_t j = 0; j <= i; j++) {
      if(list[i] < list[j]) {
        insert_at(list,length,i,j);
        break;
      }
    }
  }
};

void selection_sort(int list[],int length) {
  for( size_t i = 0; i < length; i++) {
    int min_index = i;
    for (size_t j = i + 1; j < length; j++) {
      if(list[min_index] > list[j]) min_index = j;
    }
    swap(list,min_index,i);
  }
};

void bubble_sort(int list[],int length) {
  for(size_t i = 0; i < length; i++) {
    for(size_t j = 0; j < length -1; j++) {
      if(list[j] > list[j+1]) swap(list,j+1,j);
    }
  }
};