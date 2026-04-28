#include <stdio.h>  // This header file is needed for input and output functions like printf and scanf

// Function to calculate factorial iteratively
// Factorial of n (n!) is the product of all positive integers less than or equal to n
// For example, 5! = 5 * 4 * 3 * 2 * 1 = 120
// Note: 0! is defined as 1
long long factorial(int n) {
    long long result = 1;  // Initialize result to 1, since factorial starts with multiplication by 1
    for (int i = 1; i <= n; i++) {  // Loop from 1 to n
        result *= i;  // Multiply result by the current number i
    }
    return result;  // Return the computed factorial
}

int main() {
    int num;  // Variable to store the input number
    printf("Enter a non-negative integer: ");  // Prompt the user to enter a number
    scanf("%d", &num);  // Read the input from the user

    // Check if the number is negative, since factorial is not defined for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and print the result
        printf("Factorial of %d is %lld\n", num, factorial(num));
    }

    return 0;  // Indicate successful program execution
}