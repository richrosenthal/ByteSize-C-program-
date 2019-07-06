// Author: Richard Rosenthal Jr.
// Date: 7-6-19
// Program Details: This is a simple program to display how much many bytes a data type will occupy in memory.
// also it is to familiarize me with the sizeof() operator.



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intVarSize = 29;
    char charVarSize = 'a';
    long longVarSize = 29;
    long long longlongVarSize = 29;
    short shortVarSize = 29;
    double doubleVarSize = 29.50;
    float floatVarSize = 29.4;

    //Displays how much an int data type and an intiated int variable type takes up in memory.
    printf("The int variable is %zd is in memory\n", sizeof(int));
    printf("The int variable is %u percent in memory\n", sizeof(int));
    printf("An int variable initiated with the value of 29 is %zd in memory\n", sizeof(intVarSize));
    printf("\n");
    printf("\n");

    //Displays how much a char data type and an intiated char variable type takes up in memory.
    printf("The char variable is %zd is in memory\n", sizeof(char));
    printf("The char variable is %u percent in memory\n", sizeof(char));
    printf("A char variable initiated with the value of a is %zd in memory\n", sizeof(charVarSize));
    printf("\n");
    printf("\n");


    //Displays how much a long data type and an intiated long variable type takes up in memory.
    printf("The long variable is %zd is in memory\n", sizeof(long));
    printf("The long variable is %u percent in memory\n", sizeof(long));
    printf("A long variable initiated with the value of 29 is %zd in memory\n", sizeof(longVarSize));
    printf("\n");
    printf("\n");

    //Displays how much a long long data type and an intiated long long variable type takes up in memory.
    printf("The long long variable is %zd is in memory\n", sizeof(long long));
    printf("The long long variable is %u percent in memory\n", sizeof(long long));
    printf("A long long variable initiated with the value of 29 is %zd in memory\n", sizeof(longlongVarSize));
    printf("\n");
    printf("\n");

    //Displays how much a short data type and an intiated short variable type takes up in memory.
    printf("The short variable is %zd is in memory\n", sizeof(short));
    printf("The short variable is %u percent in memory\n", sizeof(short));
    printf("A short variable initiated with the value of 29 is %zd in memory\n", sizeof(shortVarSize));
    printf("\n");
    printf("\n");


    //Displays how much a double data type and an intiated double variable type takes up in memory.
    printf("The double variable is %zd is in memory\n", sizeof(double));
    printf("The double variable is %u percent in memory\n", sizeof(double));
    printf("An double variable initiated with the value of 29.50 is %zd in memory\n", sizeof(doubleVarSize));
    printf("\n");
    printf("\n");

    //Displays how much a float data type and an intiated float variable type takes up in memory.
    printf("The float variable is %zd is in memory\n", sizeof(float));
    printf("The float variable is %u percent in memory\n", sizeof(float));
    printf("An float variable initiated with the value of 29.4 is %zd in memory\n", sizeof(floatVarSize));
    printf("\n");
    printf("\n");



    return 0;

}
