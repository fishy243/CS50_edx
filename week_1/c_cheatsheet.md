# C Cheatsheet

## See machine code in C (bytes your CPU runs directly)

xxd [program] | head

- Similar in Python

import dis
dis.dis(lambda: print("hello, world"))

## Run a program

code hello.c
make hello
./hello

clang hello.c -o hello
./hello
