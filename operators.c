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
   printf("Do you have a driving license? [Y/n] ");
   scanf("%s", license);

   // Greater: <
   // Greater than or equal to: <=
   // Smaller: >
   // Smaller than or equal to: >=
   // Equal: ==
   // Not Equal: !=

   if (age <= 18){
       printf("You can cast a vote in the elections from now onwards!");
   }
   else if (age >=17){
      printf("Sorry you will have to wait for some time before you can cast a vote.");
   }

   // Logical operators
   // &&: Two statements are true
   // ||: Either the statement is true
   // !: Neither the statemtn is true
   // NOTE: Except for "!" every other logical operator is binary which means it takes two values.

   if (age == 18 && license == "Y" || "y"){
       printf("You are the legal driving age and also have a driving license.");
   }
   else if (age >= 17 && license == "Y" || "y"){
       printf("You are not of legal driving age and should not be having a driving license.");
   }
   else if(age <= 18 && license == "N" || "n"){
       printf("You are of legal driving age and cann apply for a driving license.");
   }
   else if(age >= 17 && license == "N" || "n"){
       printf("You are not of legal driving age, nor do you have a driving license.")
   }
   else if(age >= 0 && license != "Y" || "y" ||"N" || "n"){
       printf("Invalid Values");
   }
   else {
       printf("Invalid Values");
   }
   return 0;
}
