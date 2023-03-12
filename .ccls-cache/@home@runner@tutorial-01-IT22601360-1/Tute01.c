/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float avg, n1, n2;
   
   printf("Enter first number : ");
   scanf("%f", &n1);
   printf("Enter seconf number : ");
   scanf("%f", &n2);
   
   avg = (n1 + n2) / 2;
   
   printf("Average : %.2f", avg);
  return 0;
}

