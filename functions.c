/*
 * 27/04/2023
 * Software Engineering Project 1 - Assignment 4
 * Made by Elvin Jiby
 * Made in CLion
 *
 * This is a project that taught us about Unit/case testing using CUnit
 * Compile and run the program with gcc (or whichever) like any other C program
 */

#include <stdio.h>
#include <math.h>
#include "functions.h"

double max(double *array, int arraySize) { // Gets the maximum number from an array of doubles
    if (arraySize == 0) { // If the array is empty
        return -1;
    }
    if (arraySize == 1) {
        if (isnan(array[0])) {
            return -1;
        }
        return array[0];
    }

    double max = array[0];

    for (size_t i = 0; i<arraySize; i++)
    {
        if (isnan(array[i])) {
            return -1;
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

double avg(double *array, int arraySize) { // Gets the average of an array of doubles
    if (arraySize == 0) { // If array is empty
        return -1;
    }
    if (arraySize == 1) {
        if (isnan(array[0])) {
            return -1;
        }
        return array[0];
    }

    double average = 0;

    for (size_t i = 0; i<arraySize; i++) {
        if (isnan(array[i])) {
            return -1;
        }
        average += array[i];
    }

    average /= arraySize;
    return average;
}