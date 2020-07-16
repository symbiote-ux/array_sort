#include<stdio.h>
#include "array_sort.h"

void display_list(int list[], int length) {
  for(int i = 0; i < length; i++) {
    printf("%d\n",list[i]);
  }
};

int main(void) {
  int numbers[] = {5,3,1,2,4};
  int length = sizeof(numbers) / sizeof(int);
  insertion_sort(numbers,length);
  selection_sort(numbers,length);
  bubble_sort(numbers,length);
  display_list(numbers,length);
  return 0;
};