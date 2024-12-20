/******************************************************************************
 * Copyright (C) 2024 by Chirag Kaushik
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Chirag Kaushik is not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file : stats.h 
 * @brief : Header file containing function declarations and MACROS
 *
 * @author : Chirag Kaushik
 * @date : 20 Dec,2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


#define UCHAR unsigned char

/**
* @brief Given an array of data and a length, returns the median
 *
 * @param ptr : unsigned char*: pointer pointing to  array of data
 * @param size: int: length of array
 *
 * @return retVal: unsigned char: median value
 */
UCHAR find_median(UCHAR* ptr, int size);

/**
* @brief Given an array of data and a length, returns the mean
 *
 * @param ptr : unsigned char*: pointer pointing to  array of data
 * @param size: int: length of array
 *
 * @return retVal: unsigned char: mean value
 */

float find_mean(UCHAR* ptr, int size);
/**
* @brief Given an array of data and a length, returns the maximum
 *
 * @param ptr : unsigned char*: pointer pointing to  array of data
 * @param size: int: length of array
 *
 * @return retVal: unsigned char: maximum value
 */
UCHAR find_maximum(UCHAR* ptr, int size);

/**
* @brief Given an array of data and a length, returns the max
 *
 * @param ptr : unsigned char*: pointer pointing to  array of data
 * @param size: int: length of array
 *
 * @return retVal: unsigned char: minimum value
 */
UCHAR find_minimum(UCHAR* ptr, int size);

/**
* @brief This function prints Mean value, Median value, Maximum value and Minimum value of the array 
 *
 * @param median : unsigned char: median value to be printed
 * @param mean : float: mean value to be printed
 * @param max : unsigned char: max value to be printed
 * @param min : unsigned char: min value to be printed
 *
 * @return retVal: void 
 */
void print_statistics(UCHAR median, float mean, UCHAR max, UCHAR min);

/**
 * * @brief This function sorts the array in decreasing order
 *
 * @param ptr : unsigned char*: pointer pointing to  array of data
 * @param size: int: length of array
 *
 * @return retVal: void 
 */
void sort_array(UCHAR* ptr, int size);

/**
 * * @brief This function prints the value stored in the array
 *
 * @param ptr : unsigned char*: pointer pointing to  array of data
 * @param size: int: length of array
 *
 * @return retVal: void 
 */
void print_array(UCHAR* ptr, int size);
#endif /* __STATS_H__ */

