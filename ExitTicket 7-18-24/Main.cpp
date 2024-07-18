#include <iostream>
#include "Dog.h"
#include "Kennel.h"

using namespace std;

int main() {
    Kennel k(10);
    Dog d1("Buddy");
    Dog d2("Rex");
    Dog dogs[] = { Dog("Max"), Dog("Bella") };

    k.add(d1);
    k.add(d2);
    k.add(dogs, 2);

    cout << "Kennel count: " << Kennel::getKennelCount() << endl;

    Dog adoptedDog = k.adoptDog();
    cout << "Adopted dog: " << adoptedDog.name << endl;

    cout << "Kennel count: " << Kennel::getKennelCount() << endl;

    return 0;
}
