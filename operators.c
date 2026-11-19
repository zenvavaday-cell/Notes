#include <stdio.h>

// This file will contain the 5 main types of operators in C language

int main()
{
   // Type 1 - Arithemetic
   int a;
   printf("Enter a random number: ");
   scanf("%i", &a);
   int b;
   printf("Enter another random number: ");
   scanf("%i", &b);

   int result1 = a + b; // Addition
   int result2 = a - b; // Subtraction
   int result3 = a * b; // Multiplication
   int result4 = a / b; // Division
   int result5 = a % b; // Modulus

   printf("Result 1: %d \n"
       "Result 2: %d \n"
       "Result 3: %d \n"
       "Result 4: %d \n"
       "Result 5: %d \n", result1, result2, result3, result4, result5);

   // Type 2 - Comparison
   int age;
   printf("Enter your age: ");
   scanf("%d", &age);

   char license[35];
   printf("Do you have a driving license? ");
   scanf("%s", license);

   if (age <= 18){
       printf("You can cast a vote in the elections from now!");
   }
   else if (age >=17){
      printf("Sorry you will have to wait for some time before you can cast a vote.");
   }

}
