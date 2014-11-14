// Demo code written and annotated by Colin Pierce.

// #include defines which command types to use.
#include <cstdio>

using namespace std;
int main(){
    // Establish variable X.
    int x;
    // Print an introduction line, but do not include line break.
    printf("What is variable X? ");
    // Prompt the user for the value of variable X.
    scanf("%d", &x);
    // Create a new line to avoid overlapping
    printf("\n");
    // Print the next line if X is higher than 99, otherwise ignore.
    if (x>99)
        {
        // Display variable X in line with text.
        printf("Variable X is equal to %d.\n", x);
        }
    // If variable X is not greater than 99, print this instead.
    else
        {
        // Print a line without displaying a variable.
        printf("Variable X is unworthy.\n");
        }
    }
