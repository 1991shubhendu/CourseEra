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
 * @param char_ptr char pointer to an n-element data array
 * @param size size of the array
 *
 * @return nothing: just print the statistics 
 */
void print_statistics(unsigned char* char_ptr, unsigned int size) {

}

/**
 * @brief Print the array
 *
 * This function prints all the elements of the array 
 *
 * @param char_ptr char pointer to an n-element data array
 * @param size size of the array
 *
 * @return nothing: just print all the elments of the array 
 */
void print_array(unsigned char* char_ptr, unsigned int size) {

}

/**
 * @brief Find the median
 *
 * This Function finds the median from the data values 
 * provided in the input character array
 *
 * @param char_ptr char pointer to an n-element data array
 * @param size size of the array
 *
 * @return  median value in the given array
 */
unsigned char find_median(unsigned char* char_ptr, unsigned int size) {

  unsigned char median;

  return median;

}

/**
 * @brief Find the mean
 *
 * This Function finds the mean from the data values 
 * provided in the input character array
 *
 * @param char_ptr char pointer to an n-element data array
 * @param size size of the array
 *
 * @return  mean value in the given array
 */
unsigned char find_mean(unsigned char* char_ptr, unsigned int size) {

  unsigned char mean;

  return mean;
}

/**
 * @brief Find the maximum element
 *
 * This Function finds the maximum from the data values 
 * provided in the input character array
 *
 * @param char_ptr char pointer to an n-element data array
 * @param size size of the array
 *
 * @return  maximum element in the given array
 */
unsigned char find_maximum(unsigned char* char_ptr, unsigned int size){

  unsigned char maximum;

  return maximum;
}

/**
 * @brief Find the minimum element 
 *
 * This Function finds the minimum from the data values 
 * provided in the input character array
 *
 * @param char_ptr char pointer to an n-element data array
 * @param size size of the array
 *
 * @return  minimum element in the given array
 */
unsigned char find_minimum(unsigned char* char_ptr, unsigned int size) {

  unsigned char minimum;

  return minimum;
}

/**
 * @brief Sort the array in descending order
 *
 * This function sorts all the elements of the array 
 * in order from largest to smallest element
 *
 * @param char_ptr char pointer to an n-element data array
 * @param size size of the array
 *
 * @return nothing: just sort all the elements of the array
 *                  in descending order
 */
void sort_array(unsigned char* char_ptr, unsigned int size) {

}
