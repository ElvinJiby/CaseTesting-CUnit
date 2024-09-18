/*
 * 27/04/2023
 * Software Engineering Project 1 - Assignment 4
 * Made by Elvin Jiby
 * Made in CLion
 *
 * This is a project that taught us about Unit/case testing using CUnit
 * Compile and run the program with gcc (or whichever) like any other C program
 */

#ifndef ASSIGNMENT_4_FUNCTIONS_H
#define ASSIGNMENT_4_FUNCTIONS_H

#endif //ASSIGNMENT_4_FUNCTIONS_H

double max(double *array, int arraySize);
double avg(double *array, int arraySize);

/* Max Function Testcase Prototypes */
void max_testcase_empty_array_input(void); /// Empty Array Input

void max_testcase_one_element_regular(void); /// Regular Test Cases for one-element arrays
void max_testcase_one_element_decimal(void); /// One-element arrays with decimals
void max_testcase_one_element_zero(void); /// One-element arrays with zeroes
void max_testcase_one_element_NAN(void); /// One-element arrays with NAN (Not A Number value)

void max_testcase_shortarray_regular(void); /// Regular Test Cases for short arrays
void max_testcase_shortarray_same_numbers(void); /// Short Arrays with the same elements
void max_testcase_shortarray_decimal(void); /// Short arrays with decimals
void max_testcase_shortarray_zeroes(void); /// Short arrays with zeroes
void max_testcase_shortarray_NAN(void); /// Short arrays with NAN (Not A Number values)

void max_testcase_largearray_regular(void); /// Regular Test Cases for large arrays
void max_testcase_largearray_same_elements(void); /// Large Arrays with the same elements
void max_testcase_largearray_decimal_numbers(void); /// Large Arrays with decimals
void max_testcase_largearray_zeroes(void); /// Large arrays with zeroes
void max_testcase_largearray_NAN(void); /// Large arrays with NAN (Not A Number values)

/* Average Function Testcase Prototypes */
void avg_testcase_empty_array(void); /// Empty Array Input

void avg_testcase_one_element_regular(void); /// Regular Test Cases for one-element arrays
void avg_testcase_one_element_decimal(void); /// One-element arrays with decimals
void avg_testcase_one_element_zero(void); /// One-element arrays with zeroes
void avg_testcase_one_element_NAN(void); /// One-element arrays with NAN (Not A Number value)

void avg_testcase_shortarray_regular(void); /// Regular Test Cases for short arrays
void avg_testcase_shortarray_same_numbers(void); /// Short Arrays with the same elements
void avg_testcase_shortarray_decimal(void); /// Short arrays with decimals
void avg_testcase_shortarray_zeroes(void); /// Short arrays with zeroes
void avg_testcase_shortarray_NAN(void); /// Short arrays with NAN (Not A Number values)

void avg_testcase_largearray_regular(void); /// Regular Test Cases for large arrays
void avg_testcase_largearray_same_elements(void); /// Large Arrays with the same elements
void avg_testcase_largearray_decimal_numbers(void); /// Large Arrays with decimals
void avg_testcase_largearray_zeroes(void); /// Large arrays with zeroes
void avg_testcase_largearray_NAN(void); /// Large arrays with NAN (Not A Number values)
































