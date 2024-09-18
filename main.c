/*
 * 08/05/2023
 * Software Engineering Project 1 - Assignment 4
 * Made by Elvin Jiby
 * Made in CLion
 *
 * This is a project that taught us about Unit/case testing using CUnit
 * Compile and run the program with gcc (or whichever) like any other C program
 */

#include "CUnit/CUnit.h"
#include "CUnit/Basic.h"
#include "functions.h"

////////////////////////// /* MAX FUNCTION */ ////////////////////////////
                            /// Empty Array ///
void max_testcase_empty_array_input(void) { // test case for an empty array
    double array[0];
    int arraySize = sizeof(array)/sizeof(array[0]);
    CU_ASSERT_EQUAL(max(array,arraySize),-1);
}

                        /// One Element Array ///
void max_testcase_one_element_regular(void) { /// /* Regular Values */ ///
    double array1[1] = {1.0}; // Positive
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),1.000000);

    double array2[1] = {-1.0}; // Negative
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),-1.000000);

    double array3[1] = {999999999999999.0}; // Large Positive
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),999999999999999.000000);

    double array4[1] = {-999999999999999.0}; // Large Negative
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(max(array4,arraySize4),-999999999999999.000000);
}
void max_testcase_one_element_zero(void){ /// /* Zeroes */ ///
    double array1[1] = {0}; // Positive 0
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),0.000000);

    double array2[1] = {-0}; // Negative 0
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),0.000000);

    double array3[1] = {0.0}; // One Decimal Positive 0
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),0.000000);

    double array4[1] = {-0.0}; // One Decimal Negative 0
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(max(array4,arraySize4),0.000000);
}
void max_testcase_one_element_decimal(void) { /// /* Multi-Decimal Numbers */ ///
    double array1[1] = {1.1}; // One Decimal Positive Number
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),1.100000);

    double array2[1] = {-1.6}; // One Decimal Negative Number
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),-1.600000);

    double array3[1] = {999999999999999.9}; // One Decimal Large Positive Number
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),999999999999999.900000);

    double array4[1] = {-999999999999999.6}; // One Decimal Large Negative Number
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(max(array4,arraySize4),-999999999999999.600000);

    double array5[1] = {1.1234567}; // Multi-Decimal Positive Number
    int arraySize5 = sizeof(array5)/sizeof(array5[0]);
    CU_ASSERT_EQUAL(max(array5,arraySize5),1.1234567);

    double array6[1] = {-1.1234567}; // Multi-Decimal Negative Number
    int arraySize6 = sizeof(array6)/sizeof(array6[0]);
    CU_ASSERT_EQUAL(max(array6,arraySize6),-1.1234567);

    double array7[1] = {999999999999999.9999999}; // Multi-Decimal Large Positive Number
    int arraySize7 = sizeof(array7)/sizeof(array7[0]);
    CU_ASSERT_EQUAL(max(array7,arraySize7),999999999999999.9999999);

    double array8[1] = {-999999999999999.9999999}; // Multi-Decimal Large Negative Number
    int arraySize8 = sizeof(array8)/sizeof(array8[0]);
    CU_ASSERT_EQUAL(max(array8,arraySize8),-999999999999999.9999999);
}
void max_testcase_one_element_NAN(void) { /// /* NAN Value (Non number) */ ///
    double array[1] = {NAN};
    int arraySize = sizeof(array)/sizeof(array[0]);
    CU_ASSERT_EQUAL(max(array,arraySize),-1);
}

                        /// Multi-Element Array //
void max_testcase_shortarray_regular(void) { /// /* Short Array with regular values */ ///
    double array1[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 }; // Max value at end
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),5.000000);

    double array2[5] = { 5.0, 4.0, 3.0, 2.0, 1.0 }; // Max value at start
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),5.000000);

    double array3[3] = { -3.0, -2.0, -1.0 }; // Max value at end (negative number)
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),-1.000000);

    double array4[3] = { -1.0, -2.0, -3.0 }; // Max value at start (negative number)
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(max(array4,arraySize4),-1.000000);
}
void max_testcase_shortarray_same_numbers(void) { /// /* Short Array with All the Elements Being the Same */ ///
    double array1[4] = { 1.0, 1.0, 1.0, 1.0 };
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),1.000000);

    double array2[5] = { 0.99999, 0.99999, 0.99999, 0.99999, 0.99999};
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),0.99999);

    double array3[3] = { -3.645, -3.645, -3.645};
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),-3.645000);
}
void max_testcase_shortarray_decimal(void) { /// /* Short Array with Long Decimal Values */ ///
    double array1[4] = { 2.5134627, 1.0000002, 2.346798, 2.024573458 };
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),2.5134627);

    double array2[3] = { 1.000000000007, 2.09999999, 3.9999999 };
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),3.9999999);
}
void max_testcase_shortarray_zeroes(void) { /// /* Short Array with zeroes */ ///
    double array1[4] = { 0, 0, 0, 0 }; // All zeroes
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),0.000000);

    double array2[4] = { 0, 5.786, 9.0, 0}; // 2 zeroes
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),9.000000);

    double array3[3] = { -3.645, -3.645, 0}; // Max is 0
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),0.000000);
}
void max_testcase_shortarray_NAN(void) { /// /* Short Array with NAN Value */ ///
    double array1[4] = { 1.0, 2.0, NAN, 4.0 };
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),-1.000000);

    double array2[5] = { NAN, NAN, NAN, NAN, 0.99999};
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),-1.000000);

    double array3[5] = { NAN, NAN, NAN, NAN, NAN};
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),-1.000000);
}



void max_testcase_largearray_regular(void) { /// /* Large array with regular values */ ///
    double array1[15];
    for (int i = 0; i<15; i++) {
        array1[i] = i+1;
    }
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),15.000000);

}
void max_testcase_largearray_same_elements(void) { /// /* Large array with the same elements */ ///
    double array1[100];
    for (int i = 0; i<100; i++) {
        array1[i] = 7245346;
    }
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),7245346.000000);

    double array2[100];
    for (int i = 0; i<100; i++) {
        array2[i] = -3508334;
    }
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),-3508334.000000);

    double array3[100];
    for (int i = 0; i<100; i++) {
        array3[i] = 34.23083468;
    }
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),34.23083468);

    double array4[100];
    for (int i = 0; i<100; i++) {
        array4[i] = -1.23045;
    }
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(max(array4,arraySize4),-1.2304500);
}
void max_testcase_largearray_decimal_numbers(void) { /// /* Large array with decimals */ ///
    double array1[] = {0.00000000000000000001, 0.00000000000000000003, 0.00000000000000000006, 0.00000000000000000007,
                       0.00000000000000000009, 0.00000000000000000011, 0.00000000000000000015, 0.00000000000000000023,
                       0.00000000000000000037, 0.00000000000000000051, 0.00000000000000000077, 0.00000000000000000115,
                       0.00000000000000000151, 0.00000000000000000217, 0.00000000000000000335, 0.00000000000000000509,
                       0.00000000000000000743, 0.00000000000000001007, 0.00000000000000001297, 0.00000000000000001598,
                       0.00000000000000002003, 0.00000000000000002395, 0.00000000000000003116, 0.00000000000000003885,
                       0.00000000000000004634, 0.00000000000000005728, 0.00000000000000006857, 0.00000000000000008350,
                       0.00000000000000009961, 0.00000000000000011898, 0.00000000000000013896, 0.00000000000000016517,
                       0.00000000000000019383, 0.00000000000000022547, 0.00000000000000026006, 0.00000000000000029889,
                       0.00000000000000034085, 0.00000000000000038715, 0.00000000000000043679, 0.00000000000000049168,
                       0.00000000000000055113, 0.00000000000000061427, 0.00000000000000068230, 0.00000000000000075571,
                       0.00000000000000083403, 0.00000000000000091725, 0.00000000000000100566, 0.00000000000000109905,
                       0.00000000000000119777, 0.00000000000000130143, 0.00000000000000141058, 0.00000000000000152508,
                       0.00000000000000164557, 0.00000000000000177260, 0.00000000000000190514, 0.00000000000000204377,
                       0.00000000000000218879, 0.00000000000000233920, 0.00000000000000249520, 0.00000000000000265804};
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),0.00000000000000265804000000);

    double array2[] = {0.000001, 0.000002, 0.000003, 0.000004, 0.000005, 0.000006, 0.000007, 0.000008, 0.000009,
                       0.00001, 0.00002, 0.00003, 0.00004, 0.00005, 0.00006, 0.00007, 0.00008, 0.00009,
                       0.0001, 0.0002, 0.0003, 0.0004, 0.0005, 0.0006, 0.0007, 0.0008, 0.0009, 0.001,
                       0.002, 0.003, 0.004, 0.005, 0.006, 0.007, 0.008, 0.009, 0.01, 0.02, 0.03,
                       0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6,
                       0.7, 0.9, 0.8};
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),0.9000000);

    double array3[] = {-0.00000000000000000003, -0.00000000000000000006, -0.00000000000000000007, -0.00000000000000000001,
                       -0.00000000000000000009, -0.00000000000000000011, -0.00000000000000000015, -0.00000000000000000023,
                       -0.00000000000000000037, -0.00000000000000000051, -0.00000000000000000077, -0.00000000000000000115,
                       -0.00000000000000000151, -0.00000000000000000217, -0.00000000000000000335, -0.00000000000000000509,
                       -0.00000000000000000743, -0.00000000000000001007, -0.00000000000000001297, -0.00000000000000001598,
                       -0.00000000000000002003, -0.00000000000000002395, -0.00000000000000003116, -0.00000000000000003885,
                       -0.00000000000000004634, -0.00000000000000005728, -0.00000000000000006857, -0.00000000000000008350,
                       -0.00000000000000009961, -0.00000000000000011898, -0.00000000000000013896, -0.00000000000000016517,
                       -0.00000000000000019383, -0.00000000000000022547, -0.00000000000000026006, -0.00000000000000029889,
                       -0.00000000000000034085, -0.00000000000000038715, -0.00000000000000043679, -0.00000000000000049168,
                       -0.00000000000000055113, -0.00000000000000061427, -0.00000000000000068230, -0.00000000000000075571,
                       -0.00000000000000083403, -0.00000000000000091725, -0.00000000000000100566, -0.00000000000000109905,
                       -0.00000000000000119777};
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),-0.00000000000000000001000000);

    double array4[] = {-0.0002, -0.0003, -0.0004, -0.0005, -0.0006, -0.0007, -0.0008, -0.0009, -0.0010,-0.0011,
                       -0.0012, -0.0013, -0.0014, -0.0015, -0.0016, -0.0017, -0.0018, -0.0019, -0.0020,
                -0.0021, -0.0022, -0.0023, -0.0024, -0.0025, -0.0026, -0.0027, -0.0028, -0.0029, -0.0030,
                -0.0031, -0.0032, -0.0033, -0.0034, -0.0035, -0.0001, -0.0036, -0.0037, -0.0038, -0.0039,
                -0.0040,-0.0041, -0.0042, -0.0043, -0.0044, -0.0045, -0.0046, -0.0047, -0.0048, -0.0049, -0.0050};
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(max(array4,arraySize4),-0.0001000000);
}
void max_testcase_largearray_zeroes(void) { /// /* Large array with zeroes */ ///
    double array1[100];
    for (int i = 0; i<100; i++) {
        array1[i] = 0;
    }
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),0.000000);

    double array2[100];
    for (int i = 0; i<100; i++) {
        array2[i] = -0;
    }
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),-0.000000);
}
void max_testcase_largearray_NAN(void) { /// /* Large array with NAN values */ ///
    // One or more NAN //
    double array1[] = {20, 42, 15, 37, 46, NAN, 4, 31, 18, 33, 24, 47, 10, 38, NAN, 30, 41, 28, 23, 50, 1, 16, 11, 44, 6, 26, 49, 3, 29, 12, 35, 39, 8, 45, 40, NAN, 13, 7, 36, 48, 25, 34, 14, 22, 27, 5, 32, 17, 43};
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(max(array1,arraySize1),-1.000000);

    double array2[100]; // All elements are NAN
    for (int i = 0; i<100; i++) {
        array2[i] = NAN;
    }
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(max(array2,arraySize2),-1.000000);

    double array3[100]; // Only one NAN element
    for (int i = 0; i<100; i++) {
        array3[i] = i+1;
    }
    array3[23] = NAN;
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(max(array3,arraySize3),-1.000000);
}






                       //////////////// /* AVERAGE FUNCTION */ /////////////////////////////
void avg_testcase_empty_array(void) { /// /* Empty Array */ ///
       double array[0];
       int arraySize = sizeof(array)/sizeof(array[0]);
       CU_ASSERT_EQUAL(avg(array,arraySize),-1);
}

                /// /* One Element Arrays */ ///
void avg_testcase_one_element_regular(void) { /// /* Regular Test Cases for one element arrays */ ///
    double array1[1] = {1.0}; // Positive
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),1.000000);

    double array2[1] = {-1.0}; // Negative
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-1.000000);

    double array3[1] = {999999999999999.0}; // Large Positive
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3),999999999999999.000000);

    double array4[1] = {-999999999999999.0}; // Large Negative
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(avg(array4,arraySize4),-999999999999999.000000);
}
void avg_testcase_one_element_decimal(void) { /// /* One Element Arrays with Decimals */ ///
    double array1[1] = {1.4573584689}; // Positive
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),1.4573584689);

    double array2[1] = {-1.959979463}; // Negative
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-1.959979463);

    double array3[1] = {999999999999999.8}; // Large Positive
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3),999999999999999.800000);

    double array4[1] = {-999999999999999.23}; // Large Negative
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(avg(array4,arraySize4),-999999999999999.230000);
}
void avg_testcase_one_element_zero(void) { /// /* One element array with zero */ ///
    double array1[1] = {0.0}; // Positive
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),0.000000000);

    double array2[1] = {-0.0}; // Negative
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-0.00000000);
}
void avg_testcase_one_element_NAN(void) { /// /* One element array with NAN value */ ///
    double array[1] = {NAN};
    int arraySize = sizeof(array)/sizeof(array[0]);
    CU_ASSERT_EQUAL(avg(array,arraySize),-1);
}

                    /// /* Multi-Element Array */ ///
void avg_testcase_shortarray_regular(void) { /// /* Regular test cases for short array */ ///
    double array1[] = {1.0, 2.0, 3.0, 4.0, 5.0}; // Positive
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),3.0000);

    double array2[] = {-3, -7, -2, -9, -5}; // Negative
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-5.200000000);

    double array3[] = {1000000, 2000000, 3000000, 4000000, 5000000, 6000000, 7000000, 8000000, 9000000, 10000000}; // Large Positive
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3),5500000.000000);

    double array4[] = {-1000000, -2000000, -3000000, -4000000, -5000000, -6000000, -7000000, -8000000, -9000000, -10000000}; // Large Negative
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(avg(array4,arraySize4),-5500000.000000);
}
void avg_testcase_shortarray_same_numbers(void) { /// /* Short Array with Same Numbers */ ///
    double array1[] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0}; // Positive
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),5.0000);

    double array2[] = {-3, -3, -3, -3, -3}; // Negative
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-3.000000);
}
void avg_testcase_shortarray_decimal(void) { /// /* Short Array with decimals */ ///
    double array1[] = {1.5, 2.5, 3.5, 4.5, 5.5}; // Positive
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),3.500000);

    double array2[] = {-2.5, -1.25, -3.75, -0.5, -4.25}; // Negative
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-2.4500000);

    double array3[] = {3.14159265, 2.7182, 1.41421356, 0.693, 0.5772};
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3),1.708841242);

    double array4[] = {-0.123456789, -0.234567890, -0.345678901, -0.456789012, -0.567890123};
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(avg(array4,arraySize4),-0.345676543000000);
}
void avg_testcase_shortarray_zeroes(void) { /// /* Short Array with zeroes */ ///
    double array1[] = {0.0, 0.0, 0.0, 0.0, 0.0}; // Positive
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),0.000000000);

    double array2[] = {-0.0, -0.0, -0.0, -0.0, -0.0}; // Negative
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),0.00000000);

    double array3[5] = {-0.0, 0.0000, -0.0, 00000.0, -00.00000000};
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3),0.00000000);
}
void avg_testcase_shortarray_NAN(void) { /// /* Short Arrays with NAN Values */ ///
    double array1[] = {NAN, 2.0, 3.0, 4.0, 5.0};
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),-1.0000);

    double array2[] = {NAN, NAN, NAN, NAN, NAN}; // All NAN
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-1.000000000);

    double array3[5] = {-0.0, NAN, -0.0, 0.0, NAN}; // One or more NAN values
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3),-1.00000000);
}


void avg_testcase_largearray_regular(void) { /// /* Regular Test Cases for Large Array */ ///
    double array1[100]; // Positive
    for (int i = 0; i<100; i++) {
        array1[i] = i+1;
    }
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),50.50000000);

    double array2[100]; // Negative
    for (int i = 0; i<100; i++) {
        array2[i] = -(i+1);
    }
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-50.50000000);

    double array3[50]; // Large Positive
    for (int i = 0; i<50; i++) {
        array3[i] = (i+1) * 1000000;
    }
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3), 25500000.000000);

    double array4[50]; // Large Negative
    for (int i = 0; i<50; i++) {
        array4[i] = -((i+1) * 1000000);
    }
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(avg(array4,arraySize4), -25500000.00000);
}
void avg_testcase_largearray_same_elements(void) { /// /* Large Array with the Same Elements */ ///
    double array1[100]; // Positive
    for (int i = 0; i<100; i++) {
        array1[i] = 65;
    }
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),65.0000000);

    double array2[100]; // Negative
    for (int i = 0; i<100; i++) {
        array2[i] = -124;
    }
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-124.00000000);

    double array3[50]; // Large Positive
    for (int i = 0; i<50; i++) {
        array3[i] = 3495867038;
    }
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3), 3495867038.000000);

    double array4[50]; // Large Negative
    for (int i = 0; i<50; i++) {
        array4[i] = -999999999999.0;
    }
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(avg(array4,arraySize4), -999999999999.00000);
}
void avg_testcase_largearray_decimal_numbers(void) { /// /* Large Array with Decimals */ ///
    double array1[50]; // Positive
    for (int i = 0; i<50; i++) {
        array1[i] = (i+1) * 0.1;
    }
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1), 2.55000000);

    double array2[50]; // Negative
    for (int i = 0; i<50; i++) {
        array2[i] = -((i+1) * 0.1);
    }
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),-2.55000000);

    double array3[50]; // Long decimal positive
    for (int i = 0; i<50; i++) {
        array3[i] = (i+1) * 0.0000001;
    }
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3), 0.00000255000000);

    double array4[50]; // Long decimal negative
    for (int i = 0; i<50; i++) {
        array4[i] = -((i+1) * 0.0000001);
    }
    int arraySize4 = sizeof(array4)/sizeof(array4[0]);
    CU_ASSERT_EQUAL(avg(array4,arraySize4), -0.00000255000000);
}
void avg_testcase_largearray_zeroes(void) { /// /* Large Array with Zeroes */ ///
    double array1[100]; // All Zeroes
    for (int i = 0; i<100; i++) {
        array1[i] = 0.0;
    }
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1),0.000000000);

    double array2[100]; // All Negative Zeroes
    for (int i = 0; i<100; i++) {
        array2[i] = -0.000;
    }
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2),0.00000000);

    double array3[100]; // Mix of negative and positive zeroes
    int i = 0;
    int j = 1;
    while(i<100) {
        array3[i] = 0.000;
        i += 2;
    }
    while (j<100) {
        array3[j] = -0.000;
        j += 2;
    }
    int arraySize3 = sizeof(array3)/sizeof(array3[0]);
    CU_ASSERT_EQUAL(avg(array3,arraySize3),0.00000000);
}
void avg_testcase_largearray_NAN(void) { /// /* Large Array with NAN Values */ ///
    double array1[100]; // All NAN
    for (int i = 0; i<100; i++) {
        array1[i] = NAN;
    }
    int arraySize1 = sizeof(array1)/sizeof(array1[0]);
    CU_ASSERT_EQUAL(avg(array1,arraySize1), -1.000000000);

    double array2[100]; // One or more NAN values
    for (int i = 0; i<100; i++) {
        array2[i] = i+1;
    }
    array2[35] = NAN;
    array2[96] = NAN;
    int arraySize2 = sizeof(array2)/sizeof(array2[0]);
    CU_ASSERT_EQUAL(avg(array2,arraySize2), -1.00000000);
}


void runAllTests(){
    CU_initialize_registry();

    ///////////////////////////////////////////////

    /* Max Function Suites */
    CU_pSuite maxSuite = CU_add_suite("Max_Suite", 0, 0); // Name for the Suite with the Max Function Test Cases

    CU_add_test(maxSuite, "Empty Array", max_testcase_empty_array_input);

    CU_add_test(maxSuite, "One Element Array (Test 1: Regular Values)", max_testcase_one_element_regular);
    CU_add_test(maxSuite, "One Element Array (Test 2: Decimal Numbers)", max_testcase_one_element_decimal);
    CU_add_test(maxSuite, "One Element Array (Test 3: 0)", max_testcase_one_element_zero);
    CU_add_test(maxSuite, "One Element Array (Test 4: NAN - Non number)", max_testcase_one_element_NAN);

    CU_add_test(maxSuite, "Short Multi-Element Array (Test 1: Regular Values)", max_testcase_shortarray_regular);
    CU_add_test(maxSuite, "Short Multi-Element Array (Test 2: Same Value Elements)", max_testcase_shortarray_same_numbers);
    CU_add_test(maxSuite, "Short Multi-Element Array (Test 3: Decimal Numbers)", max_testcase_shortarray_decimal);
    CU_add_test(maxSuite, "Short Multi-Element Array (Test 4: 0)", max_testcase_shortarray_zeroes);
    CU_add_test(maxSuite, "Short Multi-Element Array (Test 5: NAN - Non number)", max_testcase_shortarray_NAN);

    CU_add_test(maxSuite, "Large Multi-Element Array (Test 1: Regular Values)", max_testcase_largearray_regular);
    CU_add_test(maxSuite, "Large Multi-Element Array (Test 2: Same Value Elements)", max_testcase_largearray_same_elements);
    CU_add_test(maxSuite, "Large Multi-Element Array (Test 3: Decimal Numbers)", max_testcase_largearray_decimal_numbers);
    CU_add_test(maxSuite, "Large Multi-Element Array (Test 4: 0)", max_testcase_largearray_zeroes);
    CU_add_test(maxSuite, "Large Multi-Element Array (Test 5: NAN - Non number)", max_testcase_largearray_NAN);

    ///////////////////////////////////////////////

    /* Average Function Suites */
    CU_pSuite avgSuite = CU_add_suite("Average_Suite", 0, 0); // Name for the Suite with the Average Function Test Cases

    CU_add_test(avgSuite, "Empty Array", avg_testcase_empty_array);

    CU_add_test(avgSuite, "One Element Array (Test 1: Regular Values)", avg_testcase_one_element_regular);
    CU_add_test(avgSuite, "One Element Array (Test 2: Decimal Numbers)", avg_testcase_one_element_decimal);
    CU_add_test(avgSuite, "One Element Array (Test 3: 0)", avg_testcase_one_element_zero);
    CU_add_test(avgSuite, "One Element Array (Test 4: NAN - Non number)", avg_testcase_one_element_NAN);

    CU_add_test(avgSuite, "Short Multi-Element Array (Test 1: Regular Values)", avg_testcase_shortarray_regular);
    CU_add_test(avgSuite, "Short Multi-Element Array (Test 2: Same Value Elements)", avg_testcase_shortarray_same_numbers);
    CU_add_test(avgSuite, "Short Multi-Element Array (Test 3: Decimal Numbers)", avg_testcase_shortarray_decimal);
    CU_add_test(avgSuite, "Short Multi-Element Array (Test 4: 0)", avg_testcase_shortarray_zeroes);
    CU_add_test(avgSuite, "Short Multi-Element Array (Test 5: NAN - Non number)", avg_testcase_shortarray_NAN);

    CU_add_test(avgSuite, "Large Multi-Element Array (Test 1: Regular Values)", avg_testcase_largearray_regular);
    CU_add_test(avgSuite, "Large Multi-Element Array (Test 2: Same Value Elements)", avg_testcase_largearray_same_elements);
    CU_add_test(avgSuite, "Large Multi-Element Array (Test 3: Decimal Numbers)", avg_testcase_largearray_decimal_numbers);
    CU_add_test(avgSuite, "Large Multi-Element Array (Test 4: 0)", avg_testcase_largearray_zeroes);
    CU_add_test(avgSuite, "Large Multi-Element Array (Test 5: NAN - Non number)", avg_testcase_largearray_NAN);

    ////////////////////////////////////////////////

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
}

int main() {
    runAllTests();
    return 0;
}


