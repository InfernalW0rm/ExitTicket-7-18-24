#pragma once
#ifndef KENNEL_H
#define KENNEL_H
#include "Dog.h"
#include <iostream>
using namespace std;
class Kennel
{
private:
    Dog* dogs;
    int capacity;
    int size;
    static int kennelCount;

public:
    Kennel(int capacity);
    ~Kennel();
    static int getKennelCount();
    void add(const Dog& d);
    void add(Dog newDogs[], int numDogs);
    Dog adoptDog();

};

#endif