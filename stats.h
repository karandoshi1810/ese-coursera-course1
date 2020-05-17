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
 * @file <stats.h> 
 * @brief Basic statistical operations on an array of 40 characters.
 *
 * The given array is of length 40 and some basic operations like finding mean
 *median, maximum, minimum, sorting and printing of array is done in this program.
 * @author Karan Doshi
 * @date 17th May 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

float find_mean(unsigned char *p,unsigned int len);
/**
 * Its job is to calculate mean of array and return result.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 *
 * @return returns a float value, mean of array.
 */
float find_median(unsigned char *p,unsigned int len);
/**
 * Its job is to calculate median of array and return result.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 *
 * @return returns a float value, median of array.
 */

void print_statistics(unsigned char max,unsigned char min,float mean,float median);
/**
 * Its job is to print all statistics calculated in program.
 *
 * unsigned char max ;print maximum of array.
 * unsigned char min ;print minimum of array.
 * float mean        ;print mean of array.
 * float median      ;print median of array.
 */

void print_array(unsigned char *p,unsigned int len);
/**
 * Its job is to print the array.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 */

unsigned char find_maximum(unsigned char *p,unsigned int len);
/**
 * Its job is to find maximum from array and return its value.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 *
 * @return returns a unsigned char value, maximum of array.
 */

unsigned char find_minimum(unsigned char *p,unsigned int len,unsigned char max);
/**
 * Its job is to find minimum from array and return its value.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 * unsigned char max;needed to compare temp variable inorder to find miminum value.
 *
 * @return returns a unsigned char value, minimum of array.
 */

void sort_array(unsigned char *p,unsigned int len);
/**
 * Its job is to sort the array in descending order.
 *
 * unsigned char *p  ;to access array and iterate through it.
 * unsigned int len ;to know about the length for length of loop.
 */

#endif /* __STATS_H__ */
