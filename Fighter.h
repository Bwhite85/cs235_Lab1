#pragma once

#include "FighterInterface.h"

using namespace std;

class Figher : public FighterInterface {
public:
    public:
	Fighter(); //Default Constructor
	Fighter(string name); //Regular Constructor
    ~Fighter(); //Deconstructor
	
	virtual string getName() const = 0;
	
	virtual int getMaximumHP() const = 0;
	
	virtual int getCurrentHP() const = 0;
	
	virtual int getStrength() const = 0;
	
	virtual int getSpeed() const = 0;
	
	virtual int getMagic() const = 0;
	
	virtual int getDamage() = 0;
	
	virtual void takeDamage(int damage) = 0;
	
	virtual void reset() = 0;
	
	virtual void regenerate() = 0;
	
	virtual bool useAbility() = 0;

private:
    int maxHP;
    int currentHP;
    int strenght;
    int speed;
    int magic;
    int dealingDamage;    
}