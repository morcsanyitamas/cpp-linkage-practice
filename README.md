# Linkage practice

## Story
Imagine you're working on a C++ project that involves a shared library (`ns.h`) and a main application (`main.cpp`). The shared library contains a static variable `NS::var` that is intended to be a global counter. However, you're noticing unexpected behavior in the `main` application, where the value of `NS::var` seems to be changing unexpectedly.

## Tasks
### Analyze the project
Given the above mentioned project in the initial repository, try to answer the following questions *without running your program*.
- Why does `NS::var` have different values in the `main` and the `Test`?
- How can it be fixed so `NS::var` has the same value everywhere and it changes everywhere no matter where I set it to a different value?

### Create a fix
Write down your answers and potential solutions. Then, verify your solution by running the program. Implement your solution in a way that preserves the original code so that you can run both the original and the fixed version and compare their outputs. (e.g.: in a different branch)