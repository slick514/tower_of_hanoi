//
// Created by Justin Gries on 11/1/2021.
//

#ifndef TOWER_OF_HANOI_PUZZLE_H
#define TOWER_OF_HANOI_PUZZLE_H

#include <vector>

static const int NUMBER_OF_PEGS = 3;
static const int FIRST_INDEX = 0;
static const int LAST_INDEX = NUMBER_OF_PEGS - 1;

class Puzzle
{
public:
    explicit Puzzle(int disks);
    void move_single_disk(int from, int to);
    void move(int ndisks, int from, int to);
    void print() const;
private:
    std::vector<int> towers[NUMBER_OF_PEGS];
};


#endif //TOWER_OF_HANOI_PUZZLE_H
