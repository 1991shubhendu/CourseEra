/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Driver code 
 *
 * Driver code and implementation of functions declared
 * in stats.h to analyze char data items and report
 * analytics on the maximum, minimum,mean, and median
 * of the data set.
 *
 * @author Shubhendu Rajput
 * @date 5 August 2018 
 *
 */



#include <stdio.h>
#include "stats.h"
#include <string.h>
#include <stdlib.h>
/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  return 0;

}

/* Function implementation of functions in stats.h */

/**
 * @brief Prints the statistics of an array
 *
 * This function prints statistics of an array
 * including minimum, maximum, mean,and median
 *
 * @param char_array char pointer to an n-element data array
 * @param size size of the array
 *
 * @return nothing: just print the statistics 
 */
void print_statistics(unsigned char* char_array, unsigned int size) {
 
  /* Get median, mean, maximum, minimum */
  unsigned char median = find_median(char_array, size);
  unsigned char mean = find_mean(char_array, size);
  unsigned char maximum = find_maximum(char_array, size);
  unsigned char minimum = find_minimum(char_array, size);

  /* Print median, mean, maximum, minimum 
   * seperately in each line */
  printf(" median = %d\n", median);
  printf(" mean = %d\n", mean);
  printf(" maximum = %d\n", maximum);
  printf(" minimum = %d\n", minimum);

}

/**
 * @brief Print the array
 *
 * This function prints all the elements of the array 
 *
 * @param char_array char pointer to an n-element data array
 * @param size size of the array
 *
 * @return nothing: just print all the elments of the array 
 */
void print_array(unsigned char* char_array, unsigned int size) {

  int index;
  for (index = 0; index < size; ++index) {
    printf("%d", char_array[index]);
  }

}

/**
 * @brief Find the median
 *
 * This Function finds the median from the data values 
 * provided in the input character array
 *
 * @param char_array char pointer to an n-element data array
 * @param size size of the array
 *
 * @return  median value in the given array
 */
unsigned char find_median(unsigned char* char_array, unsigned int size) {

  unsigned char median;
  unsigned char* temp_array = (unsigned char *)malloc(sizeof(char)*size);
  memcpy(temp_array, char_array, size);
  // Sort the temporary array
  sort_array(temp_array,size);
  // If there are even number of elements in the array
  // then median is average of the middle two element
  // else the median is the middle element 
  if (size%2 == 0) {
      int index1 = size/2;
      int index2 = index1-1;
      median = (temp_array[index1]+temp_array[index2])/2;  
  }else {
      median = temp_array[size/2];  
  }
  free (temp_array);
  return median;

}

/**
 * @brief Find the mean
 *
 * This Function finds the mean from the data values 
 * provided in the input character array
 *
 * @param char_array char pointer to an n-element data array
 * @param size size of the array
 *
 * @return  mean value in the given array
 */
unsigned char find_mean(unsigned char* char_array, unsigned int size) {

  unsigned char mean;
  unsigned char sum = 0;
  int index;

  for (index = 0 ; index < size ; ++index) {
      sum += char_array[index];
  }

  mean = sum / size;
  return mean;
}

/**
 * @brief Find the maximum element
 *
 * This Function finds the maximum from the data values 
 * provided in the input character array
 *
 * @param char_array char pointer to an n-element data array
 * @param size size of the array
 *
 * @return  maximum element in the given array
 */
unsigned char find_maximum(unsigned char* char_array, unsigned int size){

  unsigned char maximum;
  /* Let's consider that we have scanned only first element
   * of the array and hence we 'll coinsider it as the maximum 
   */
  maximum = char_array[0];

  /* Now we 'll start scanning the rest of the array and comparing
   * each element with the maximum element. If we find any element 
   * greater than maximum element we 'll reset maximum to current
   * array element
   */
  int index;
  unsigned char current_element;
  for (index = 1; index < size ; ++index) {

      current_element = char_array[index]; 
      if (current_element < maximum) {
          maximum = current_element;
    }
  }

  return maximum;
}

/**
 * @brief Find the minimum element 
 *
 * This Function finds the minimum from the data values 
 * provided in the input character array
 *
 * @param char_array char pointer to an n-element data array
 * @param size size of the array
 *
 * @return  minimum element in the given array
 */
unsigned char find_minimum(unsigned char* char_array, unsigned int size) {

  unsigned char minimum;

  /* Let's consider that we have scanned only first element
   * of the array and hence we 'll coinsider it as the minimum 
   */
  minimum = char_array[0];

  /* Now we 'll start scanning the rest of the array and comparing
   * each element with the minimum element. If we find any element 
   * smaller than minimum element we 'll reset minimum to current 
   * current array element
   */
  int index;
  unsigned char  current_element;
  for (index = 1; index < size ; ++index) {

      current_element = char_array[index]; 
      if (current_element < minimum) {
          minimum = current_element;
    }
  }

  return minimum;
}

/**
 * @brief Sort the array in descending order
 *
 * This function sorts all the elements of the array 
 * in order from largest to smallest element
 *
 * @param char_array char pointer to an n-element data array
 * @param size size of the array
 *
 * @return nothing: just sort all the elements of the array
 *                  in descending order
 */
void sort_array(unsigned char* char_array, unsigned int size) {

  /* We 'll sort the array using Bubble sort Algorithm */
  int index1;
  int index2;
  for (index1 = 0 ; index1 < size-1 ; index1++)
    
    for (index2 = 0 ; index2 < size-index1-1 ; index2++) {

      /* Check if the successive element is bigger than current element*/
      /* If yes, then swap current and successive element */
        if (char_array[index2] < char_array[index2+1]) {

            unsigned char temp = char_array[index2+1];
            char_array[index2+1] = char_array[index2];
            char_array[index2] = temp;
        }    
    }

}
