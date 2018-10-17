/******************************************************************************
  Title          : main.cpp
  Author         : 
  Created on     : October  7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  :
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be 
  named 
       username_oddity

  where username is the GitHub username of its author.
  For example, 
      output_function  stewartweiss_oddity;

  Oddities are found in the file "oddities.txt" in the project source directory
 
******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************/

// The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) (const ostream & out);


/******************************************************************************
        
                        All Function Definitions

******************************************************************************/



ostream& chocolate_spaghet_oddity(ostream &out);


int main(int argc, char* argv[] )
{

    // Calls to output functions

    chocolate_spaghet_oddity(cout);

    return 0;
}

ostream& chocolate_spaghet_oddity(ostream &out){
    out << "Have you ever imagined a world with no hypothetical situations?" << endl;
    return out;
}
