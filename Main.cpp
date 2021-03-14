/**
 * Demo program for snowman exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-02
 */

#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    cout << "Welcome to SnowMan Project";
    cout << "\n";
    cout << "This is my solution for SnowMan";
    cout << "\n";
    cout << "Link: https://codegolf.stackexchange.com/questions/49671/do-you-want-to-code-a-snowman";
    cout << "\n";
    cout << ariel::snowman(11114411) << endl;
    /*
Should print:
_===_
(.,.)
( : )
( : )
	*/
    cout << ariel::snowman(33232124) << endl;
    /* 
Should print:
   _
  /_\
\(o_O)
 (] [)>
 (   )
	*/
    try
    {
        cout << ariel::snowman(5) << endl; // Exception - not a valid code
    }
    catch (exception &ex)
    {
        cout << "   caught exception: " << ex.what() << endl; // should print "Invalid code '5'"
    }

    cout << ariel::snowman(33232124) << endl;

    cout << ariel::snowman(33232124) << endl;

    try
    {
        cout << ariel::snowman(10) << endl;
        // Exception - not a valid code
    }
    catch (exception &ex)
    {
        cout << "   caught exception: " << ex.what() << endl; // should print "Invalid code '5'"
    }

    try
    {
        cout << ariel::snowman(12) << endl;
        // Exception - not a valid code
    }
    catch (exception &ex)
    {
        cout << "   caught exception: " << ex.what() << endl; // should print "Invalid code '5'"
    }

    try
    {
        cout << ariel::snowman(14) << endl;
        // Exception - not a valid code
    }
    catch (exception &ex)
    {
        cout << "   caught exception: " << ex.what() << endl; // should print "Invalid code '5'"
    }

    cout << ariel::snowman(44444444) << endl;
    /**
  Should print:
  ___
 (_*_)
 (- -) 
 (   ) 
 (   )
*/
}
