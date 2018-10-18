/******************************************************************************
  Title          : main.cpp
  Author         : Iftikhar Khan (f0cus10)
  Created on     : October  7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  : Added intro, changed typedef
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
typedef ostream& (*output_function) (ostream & out);


/******************************************************************************

                        All Function Definitions

******************************************************************************/


ostream& printer(ostream& out){
    out << "This is a collection of strange but true facts:" << endl;
    return out;
}

output_function intro = &printer;
ostream& chocolate_spaghet_oddity(ostream &out);
ostream& gutierrezjdr_oddity(ostream &out);
ostream& johncgenere_oddity(ostream &out);


int main(int argc, char* argv[] )
{
    // Calls to output functions
    (*intro)(cout);

    chocolate_spaghet_oddity(cout);
	gutierrezjdr_oddity(cout);
    johncgenere_oddity(cout);

    return 0;
}

ostream& chocolate_spaghet_oddity(ostream &out){
    out << "Have you ever imagined a world with no hypothetical situations?" << endl;
    return out;
}

ostream&gutierrezjdr_oddity (ostream & out)
{
	out<<"Why do they put Braille dots on the keypad of the drive-up ATM?"<<endl;
	
	return out;
} 
ostream& johncgenere_oddity(ostream &out){
    out << "Why do we drive on parkways and park on driveways?" << endl;
    return out;
}
