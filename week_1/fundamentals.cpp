/* This is a simple C++ program */
#include <iostream>
using namespace std;

void greet() { //defined outside main
    std::cout << "Hello!\n";
}

int a = 5;
int *const const_ptr = &a;
/* const_ptr is a constant pointer to an integer. This means that the pointer itself cannot point to a different integer, but the integer value it points to can be modified. */

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

    std::cout << "Start\n";
    greet();
    std::cout << "a = " << a << "\n";
    std::cout << "const_ptr (address) = " << const_ptr << "\n";
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

const char *strptr = "This is it\n"; 
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

const int b = 10;
const int *const const_ptr_to_const = &b;
/* const_ptr_to_const is a constant pointer to a constant integer. This means that neither the pointer can point to a different integer nor the integer value it points to can be modified through this pointer. */

int x = 3;
int& ref_y = x;
double y = 11.12345;
// double &refY = y;
// refY += 2.54321; // y = 13.66666
