/* This is a simple C++ program */
#include <iostream>
using namespace std;

int main() {
    // this is Chapter 13: C++ Fundamentals

    /* begin of C Comment
        x = x+y; // this is a C++ comment 
        end of C comment */

    /* Symbolic Variables*/
    char c = '7';
    c = c - '0'; // this converts a character digit to its integer value

    int y = 40;
    char c2('d'); // this is a character literal

    cout << "c as integer: " << (int)c << endl;
    cout << "y = " << y << endl;
    cout << "c2 = " << c2 << endl;

    cout << "Hello, World! <-- Testing C++ Fundamentals" << endl;
    return 0;

}

int* ptrl; /* legal. but bad practice*/
unsigned char *ptr2; /* legal. but bad practice*/
int *ptr3, num; // preferred style //
int xx, *ptr4; // preferred style //

int j;
int *ptr = &j; /* The pointer variable ptr will be initialized with the 1value of j*/

char *strptr = "This is it\n"; 
/* strptr is a ppointer to a string literal. String literals are stored in read-only memory, 
so strptr should not be used to modify the string. */
// This line will make the rvalue of strptr equal to 'This is it' with a new line control character and a null character
// and a null character following that literal string.

const char *strptr2 = "This is it\n"; 
/* strptr2 is a pointer to a constant 
character string literal. This means that the string literal cannot be 
modified through strptr2, and any attempt to do so will result in undefined behavior. */

const int bufSize = 1024;
/* bufSize is a symbolic constant that can be used to define the size of a buffer or array. */

const int *ptr_to_const;
/* ptr_to_const is a pointer to a constant integer. This means that the integer value pointed to by ptr_to_const cannot be modified through this pointer, but the pointer itself can point to different integers. */

int *const const_ptr;
/* const_ptr is a constant pointer to an integer. This means that the pointer itself cannot point to a different integer, but the integer value it points to can be modified. */

const int *const const_ptr_to_const;
/* const_ptr_to_const is a constant pointer to a constant integer. This means that neither the pointer can point to a different integer nor the integer value it points to can be modified through this pointer. */

int& y;
double y = 11.12345;
// double &refY = y;
// refY += 2.54321; // y = 13.66666


