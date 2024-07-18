#include "Kennel.h"
#include "Dog.h"
#include <iostream>
using namespace std;
int Kennel::kennelCount = 0;

Kennel::Kennel(int capacity) : capacity(capacity), size(0) 
{
    dogs = new Dog[capacity];
}

Kennel::~Kennel() 
{
    delete[] dogs;
}

int Kennel::getKennelCount() 
{
    return kennelCount;
}

void Kennel::add(const Dog& d) 
{
    if (size < capacity) 
    {
        dogs[size] = d;
        ++size;
        ++kennelCount;
    }
    else {
        cout << "Kennel is full, cannot add more dogs." << endl;
    }
}

void Kennel::add(Dog newDogs[], int numDogs) 
{
    for (int i = 0; i < numDogs; ++i) 
    {
        if (size < capacity) 
        {
            dogs[size] = newDogs[i];
            ++size;
            ++kennelCount;
        }
        else 
        {
            cout << "Kennel is full, cannot add more dogs." << endl;
            break;
        }
    }
}

Dog Kennel::adoptDog() 
{
    if (size > 0) 
    {
        Dog adoptedDog = dogs[size - 1];
        --size;
        --kennelCount;
        return adoptedDog;
    }
    else 
    {
        cout << "No dogs to adopt." << endl;
        return Dog();
    }
}