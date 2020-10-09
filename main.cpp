#include <iostream>
#include "Binomial_heap.h"

using namespace std;

int main() {
    Binomial_heap<int>* bh = new Binomial_heap<int>();

    for(int i = 1; i<= 14; i++) {
        bh->Insert(new NodoB<int>(i));
    }
    cout<<"\n";
    //bh->Delete_Min();
    bh->print();
    bh->write();
    return 0;
}