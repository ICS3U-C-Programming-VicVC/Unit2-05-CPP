// Copyright (c) 2026 Victor V-C Name All rights reserved.
// .
// Created by: Victor Victor Calixte
// Date: 09 30, 2026
// This code demonstrates scoping in coding

#include <iostream>

// global variable

int variableX = 25;


void localVariable() {
    // this shows what happens with local variables

    int variableX = 10;

    int variableY = 30;

    int variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX

            << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;

    int variableY = 30;

    int variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX

            << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global

    localVariable();

    globalVariable();
}
