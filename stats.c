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
 * @brief Basic statistical operations on an array of 40 characters.
 *
 * The given array is of length 40 and some basic operations like finding mean
 *median, maximum, minimum, sorting and printing of array is done in this program.
 * @author Karan Doshi
 * @date 17th May 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned int len=SIZE;
  unsigned char *p=&test;
  unsigned char max,min;
  float mean=0,median=0;
  /* Statistics and Printing Functions Go Here */
  mean = find_mean(p,len);
  median = find_median(p,len);
  max = find_maximum(p,len);
  min = find_minimum(p,len,max);
  print_statistics(max,min,mean,median);
  printf("Before sorting\n");
  print_array(p,len);
  sort_array(p,len);
  printf("After sorting\n");
  print_array(p,len);
}

float find_mean(unsigned char *p,unsigned int len)
{
	unsigned int sum=0,i=0;
	for( i=0;i<len;i++)
	{
		sum+=*(p+i);
	}
return (float)sum/len;
}


float find_median(unsigned char *p,unsigned int len)
{
	if(len%2==0)
	{
		return (float) (*(p+((len+1)/2))+*(p+len/2))/2;

	}
	else
	{
		return (float) *(p+((len+1)/2));
	}
}

void print_statistics(unsigned char max,unsigned char min,float mean,float median)
{
	printf("\nMaximum=%d",max);
	printf("\nMinimum=%d",min);
	printf("\nMean=%f",mean);
	printf("\nMedian=%f\n",median);

}

void print_array(unsigned char *p,unsigned int len)
{
	printf("\n");
	unsigned int i=0;
	for(i=0;i<len;i++)
	{
		printf("%d,",*(p+i));
	}
	printf("\n");

}

unsigned char find_maximum(unsigned char *p,unsigned int len)
{
	unsigned char temp=0;
	unsigned int i=0;
	for(i=0;i<len;i++)
	{
		if(*(p+i)>temp)
		{
			temp=*(p+i);
		}
	}
	return temp;
}

unsigned char find_minimum(unsigned char *p,unsigned int len,unsigned char max)
{
	unsigned char temp=max;
	unsigned int i=0;
	for(i=0;i<len;i++)
	{
		if(*(p+i)<temp)
		{
			temp=*(p+i);
		}
	}
return temp;
}

void sort_array(unsigned char *p,unsigned int len)
{
	unsigned char temp=0;
	unsigned i=0,j=0;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<=len;j++)
		{
		if(p[i]<p[j])
		{
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
		}
		}
	}

}
