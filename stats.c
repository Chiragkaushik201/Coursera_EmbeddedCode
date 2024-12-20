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
 * @file  : stats.c
 * @brief : Contains all the function definition and main function to implement the functionality
 *
 * @author : Chirag Kaushik 
 * @date   : 20,Dec,2024
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
  /* Statistics and Printing Functions Go Here */
  /*Initialising Variables*/
  UCHAR medianVal = 0;
  float meanVal = 0;
  UCHAR maxVal = 0;
  UCHAR minVal = 0;


/*Calling functions for all the functionality*/
  sort_array(test,SIZE);
  medianVal = find_median(test,SIZE);
  meanVal = find_mean(test,SIZE);
  maxVal = find_maximum(test,SIZE);
  minVal = find_minimum(test,SIZE);

  //printing the desired ouput
  print_statistics(medianVal, meanVal, maxVal, minVal);
  print_array(test,SIZE);

}

UCHAR find_median(UCHAR* ptr, int size)
{
  if(ptr!=NULL)
  {
    if(size%2 ==0)
    {
      return ptr[(size-1)/2];
    }
    else
    {
      return ptr[size/2];
    }
  }
  return 0;
}

void sort_array(UCHAR* ptr,int size)
{
  if(ptr !=NULL)
  {int temp=0;
    for(int i =0;i<SIZE;i++)
    {
      for(int j =i;j<SIZE;j++)
      {
        if(ptr[i]<ptr[j])
        {
          temp = ptr[i] ;
          ptr[i]= ptr[j];
          ptr[j]=temp;
        }
      }
    }
  }
}

float find_mean(UCHAR* ptr, int size)
{
  int total = 0;
  if(ptr!=NULL)
  {
    for(int i =0;i<size;i++)
    {
      total +=ptr[i];
    }
  }

  return ((float)(total/size));
}

UCHAR find_maximum(UCHAR* ptr, int size)
{
  UCHAR max = 0;
  if(ptr!=NULL)
  {
    max= ptr[0];
    for(int i =0;i<size;i++)
    {
      if(ptr[i]>max)
      {
        max=ptr[i];
      }
    }
  }

  return max;
}

UCHAR find_minimum(UCHAR* ptr, int size)
{
  UCHAR min = 0;
  if(ptr!=NULL)
  {
    min= ptr[0];
    for(int i =0;i<size;i++)
    {
      if(ptr[i]<min)
      {
        min=ptr[i];
      }
    }
  }

  return min;
}

void print_statistics(UCHAR median, float mean, UCHAR max, UCHAR min)
{
  printf("Please find below the detailed data analysis:\nMean:%.2f\nMedian:%d,\nMaximum:%d,\nMinimum:%d\n",mean,median,max,min);

}

void print_array(UCHAR* ptr, int size)
{
  if(ptr!=NULL)
  {
    printf("Array is as follows:\n");
    for(int i =0;i<size;i++)
    {
      printf("%d ",ptr[i]);
    }
    printf("\n");
  }
  
}
