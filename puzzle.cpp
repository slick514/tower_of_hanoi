//
// Created by Justin Gries on 11/1/2021.
//

#include <iostream>
#include "puzzle.h"
using namespace std;

Puzzle::Puzzle(int ndisks){
    for (int d = ndisks; d >= 1; d--){
        towers[0].push_back(d);
    }
}

void Puzzle::move_single_disk(int from, int to){
    int last = (int)towers[from].size() - 1;
    int disk = towers[from][last];
    towers[from].pop_back();
    towers[to].push_back(disk);
}

void Puzzle::move(int disks, int from, int to){
    if (disks > 0)
    {
        int other = NUMBER_OF_PEGS - from - to;
        move(disks - 1, from, other);
        move_single_disk(from, to);
        print();
        move(disks - 1, other, to);
    }
}

void Puzzle::print() const{
    for (int i = 0; i < NUMBER_OF_PEGS; i++)
    {
        if (i > 0) cout << "| ";
        for (int j : towers[i])
        {
            cout << j << " ";
        }
    }
    cout << endl;
}