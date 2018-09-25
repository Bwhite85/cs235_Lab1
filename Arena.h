#ifndef ARENA_H
#define ARENA_H

#include "ArenaInterface.h"
#include "Fighter.h"

using namespace std;

class Arena : public ArenaInterface {
public:
    Arena(); //Default Constuctor
    Arena(string fighterName);
    ~Arena(); //Deconstructor

    //methods from ArenaInterface.h
    bool addFighter(string info);
    bool removeFigher(string name);
    FighterInterface* getFigher(string name);
    int getSize();
private:
    vector<Fighter> fighterVec;
}
#endif