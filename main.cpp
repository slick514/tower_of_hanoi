#include <iostream>
#include "puzzle.h"
using namespace std;

static const int NUMBER_OF_DISCS = 5;

int main()
{
    Puzzle hanoi(NUMBER_OF_DISCS);
    hanoi.print();
    hanoi.move(NUMBER_OF_DISCS, FIRST_INDEX, LAST_INDEX);
    return 0;
}
