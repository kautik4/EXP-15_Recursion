# Experiment 15
To study and implement Recursion

## Aim 
To study Recursion

## Theory
### Definition
#### What is a Recursion?
- Recursion in C++ is a technique where a function calls itself to solve a problem.
- This approach is often used for problems that can be divided into smaller, similar subproblems. 
- A recursive function typically has two main components:
  - Base Case: A condition under which the function will stop calling itself, preventing 
  infinite recursion.
  - Recursive Case: The part of the function where it calls itself with modified arguments to 
  gradually approach the base case.
> For example:
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number = 5;
    std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl;
    return 0;
}

```


## Algorithms
### Addition of Integers
1. **Start**

2. **Function Definition:**
   - **Define a function `sum(n)` that takes an integer n.**
     - **Base Case:**
       - **If n = 0:**
         - **Return 0.**
     - **Recursive Case:**
       - **Otherwise, return n + sum (n − 1).**

3. **Main Function:**
   - **Declare an integer variable `num`.**
   - **Output the prompt: "Enter a number: ".**
   - **Read the input value into `num`.**

4. **Call the `sum` Function:**
   - **Call `sum(num)` and store the result.**

5. **Output the Result:**
   - **Print "Sum of integers is: " followed by the result from step 4.**

6. **End**

### Reverse String
1. **Start**

2. **Function Definition:**
   - **Define a recursive function `rev(str)` that takes a character pointer str.**
     - **Base Case:**
       - **If the character pointed to by str is the null terminator (`'\0'`):**
         - **Return (this indicates the end of the string).**
     - **Recursive Case:**
       - **Call `rev(str + 1)` to process the next character.**
         - **After the recursive call, print the character pointed to by str (this prints the 
           characters in reverse order).**

3. **Main Function:**
   - **Declare a character array `str` of size 20 to store the input string.**
   - **Output the prompt: "Enter a string: ".**
   Re- **ad the input string into `str`.**

4. **Call the rev Function:**
   - **Print "Reversed string is: ".**
   - **Call `rev(str)` to reverse and print the string.**

5. **Output New Line:**
   - **Print a newline character.**

6. **End**

###  Reverse the Number
1. **Start**

2. **Function Definition:**
   - **Define a recursive function `rev(i)` that takes an integer i.**
     - **Base Case:**
       - **If i≤0:**
         - **Return (this indicates the end of the number).**
     - **Recursive Case:**
       - **Print the last digit of i using `i % 10.`**
       - **Call `rev(i / 10)` to process the remaining digits of i (by removing the last 
         digit).**

3. **Main Function:**
   - **Declare an integer variable `num`.**
   - **Output the prompt: "Enter a number: ".**
   - **Read the input value into `num`.**

4. **Call the `rev` Function:**
   - **Print "Reversed number is: ".**
   - **Call `rev(num)` to reverse and print the digits of the number.**

5. **Output New Line:**
   - **Print a newline character.**

6. **End**
