//
//  Trainer.h
//  CreatureTrainer
//
//  Created by Jeremy Gibson on 11/4/14.
//  Copyright (c) 2014 Jeremy Richard Gibson. All rights reserved.
//

#ifndef __CreatureTrainer__Trainer__
#define __CreatureTrainer__Trainer__

#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Trainer {
public:
    /**
     * Requires: Nothing.
     * Modifies: Nothing.
     * Effects:  returns 'a' or 's#' given the situation.
                 This is where the bulk of your code will go. The implementation
                 of your AI goes here.
     */
    string makeMove(stringstream& situation);

    /**
     * Requires: Nothing.
     * Modifies: Nothing.
     * Effects:  Prints out the final situation
     */
    void finalSituation(stringstream& situation);
    
    
    /**
     * Requires: Nothing.
     * Modifies: Nothing.
     * Effects:  Splits a string into a vector of strings
     */
    vector<string> splitString(string inString, string splitOn=" ");

	/**
	* Requires: Nothing.
	* Modifies: Nothing
	* Effects:	Assigns element type to encountered creatures
	*/
	void getElementType(string enemyName);
    
private:
    // vvvvvv Your changes to Trainer.h go between this line…
	int creatureHealth[4];	// Stores health for our creature team
    int enemyDamage;
    int currentCreature = 0;	// Current creature we are using
	string creatureElement[26];
	istringstream inSS;
	string opponentDamage;
	string enemy;
	string enemyName;
	string attacks;
	string your;
	string myName;
	string with;
	string elementType;
	string fore;
    
    
    // ^^^^^^ And this line. That's it!
    
};

#endif /* defined(__CreatureTrainer__Trainer__) */
