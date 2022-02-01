//
//  simple.c
//  
//
//  Created by Sydney Carter on 1/20/22.
//

#include <stdio.h>
#include <math.h>

int main() {

    double nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double sum = 0;
    double average;
    int i;

  for(i=0; i < 10; ++i) {
      sum += sqrt(nums[i]);
  }

  average = sum / 10;
  printf("Average: %lf", average);

  return 0;
}
