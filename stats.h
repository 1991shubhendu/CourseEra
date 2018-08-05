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
 * @file stats.h
 * @brief Header file containing declarations of different
 * functions required to perform statistical analysis
 *
 * These functions are required to analyze an array of unsigned
 * char data items and report analytics on the maximum, minimum,
 * mean, and median of the data set.
 *
 * @author Shubhendu Rajput
 * @date 5 August 2018 
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

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
void print_statistics(unsigned char* char_ptr, unsigned int size);

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
void print_array(unsigned char* char_ptr, unsigned int size);

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
unsigned char find_median(unsigned char* char_ptr, unsigned int size);

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
unsigned char find_mean(unsigned char* char_ptr, unsigned int size);

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
unsigned char find_maximum(unsigned char* char_ptr, unsigned int size);

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
unsigned char find_minimum(unsigned char* char_ptr, unsigned int size);

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
void sort_array(unsigned char* char_ptr, unsigned int size);
#endif /* __STATS_H__ */
