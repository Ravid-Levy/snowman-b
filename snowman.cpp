#include "snowman.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <regex>
#include <locale> // std::isdigit,std::locate
using namespace std;
// get HNLRXYTB
namespace ariel
{

    // H
    // H
    //X(LNR)Y
    //X(T)Y
    // (B)
    string snowman(int number)
    {
        std::string str = std::to_string(number);
        string all = "0";
        if (number > minn && number < maxx)
        {

            string check = " H";
            string check2 = " H";
            string check3 = "X(LNR)Y";
            string check4 = "X(T)Y";
            string check5 = " (B)";

            string a1 = " H";
            string a2 = " H";
            string a3 = "X(LNR)Y";
            string a4 = "X(T)Y";
            string a5 = " (B)";
            for (size_t i = 0; i < str.length(); i++)
            {

                if (isdigit(str[i]) == 0)
                {
                    throw std::invalid_argument("Invalid code '" + str + "'");
                }
                if (isalpha(str[i]) != 0)
                {
                    throw std::invalid_argument("Invalid code '" + str + "'");
                }
                if (str.length() < MinLength)
                {
                    throw std::invalid_argument("Invalid code '" + str + "'");
                }

                //H
                if (i == H)
                {
                    if (str.at(i) == '1')
                    {
                        a1 = std::regex_replace(a1, std::regex("H"), "\n");
                        a2 = std::regex_replace(a2, std::regex("H"), "_===_");
                    }
                    else if (str.at(i) == '2')
                    {
                        a1 = std::regex_replace(a1, std::regex("H"), " ___");
                        a2 = std::regex_replace(a2, std::regex("H"), ".....");
                    }
                    else if (str.at(i) == '3')
                    {
                        a1 = std::regex_replace(a1, std::regex("H"), "  _");
                        a2 = std::regex_replace(a2, std::regex("H"), " /_\\");
                    }
                    else if (str.at(i) == '4')
                    {
                        a1 = std::regex_replace(a1, std::regex("H"), " ___");
                        a2 = std::regex_replace(a2, std::regex("H"), "(_*_)");
                    }
                    else
                    {
                        throw std::invalid_argument("Invalid code '" + str + "'");
                    }
                }
                if (i == N) // N
                {
                    if (str.at(i) == '1')
                    {
                        a3 = std::regex_replace(a3, std::regex("N"), ",");
                    }
                    else if (str.at(i) == '2')
                    {
                        a3 = std::regex_replace(a3, std::regex("N"), ".");
                    }
                    else if (str.at(i) == '3')
                    {
                        a3 = std::regex_replace(a3, std::regex("N"), "_");
                    }
                    else if (str.at(i) == '4')
                    {
                        a3 = std::regex_replace(a3, std::regex("N"), " ");
                    }

                    else
                    {

                        throw std::invalid_argument("Invalid code '" + str + "'");
                    }
                }

                if (i == L) // L
                {
                    if (str.at(i) == '1')
                    {
                        a3 = std::regex_replace(a3, std::regex("L"), ".");
                    }
                    else if (str.at(i) == '2')
                    {
                        a3 = std::regex_replace(a3, std::regex("L"), "o");
                    }
                    else if (str.at(i) == '3')
                    {
                        a3 = std::regex_replace(a3, std::regex("L"), "O");
                    }
                    else if (str.at(i) == '4')
                    {
                        a3 = std::regex_replace(a3, std::regex("L"), "-");
                    }
                    else
                    {
                        throw std::invalid_argument("Invalid code '" + str + "'");
                    }
                }

                if (i == R) // R
                {
                    if (str.at(i) == '1')
                    {
                        a3 = std::regex_replace(a3, std::regex("R"), ".");
                    }
                    else if (str.at(i) == '2')
                    {
                        a3 = std::regex_replace(a3, std::regex("R"), "o");
                    }
                    else if (str.at(i) == '3')
                    {
                        a3 = std::regex_replace(a3, std::regex("R"), "O");
                    }
                    else if (str.at(i) == '4')
                    {
                        a3 = std::regex_replace(a3, std::regex("R"), "-");
                    }
                    else
                    {
                        throw std::invalid_argument("Invalid code '" + str + "'");
                    }
                }

                if (i == X) // X
                {
                    if (str.at(i) == '1')
                    {
                        a3 = std::regex_replace(a3, std::regex("X"), " ");
                        a4 = std::regex_replace(a4, std::regex("X"), "<");
                    }
                    else if (str.at(i) == '2')
                    {
                        a3 = std::regex_replace(a3, std::regex("X"), "\\");
                        a4 = std::regex_replace(a4, std::regex("X"), " ");
                    }
                    else if (str.at(i) == '3')
                    {
                        a3 = std::regex_replace(a3, std::regex("X"), " ");
                        a4 = std::regex_replace(a4, std::regex("X"), "/");
                    }
                    else if (str.at(i) == '4')
                    {
                        a3 = std::regex_replace(a3, std::regex("X"), " ");
                        a4 = std::regex_replace(a4, std::regex("X"), " ");
                    }
                    else
                    {
                        throw std::invalid_argument("Invalid code '" + str + "'");
                    }
                }

                if (i == Y) // Y
                {
                    if (str.at(i) == '1')
                    {
                        a3 = std::regex_replace(a3, std::regex("Y"), " ");
                        a4 = std::regex_replace(a4, std::regex("Y"), ">");
                    }
                    else if (str.at(i) == '2')
                    {
                        a3 = std::regex_replace(a3, std::regex("Y"), "/");
                        a4 = std::regex_replace(a4, std::regex("Y"), " ");
                    }
                    else if (str.at(i) == '3')
                    {
                        a3 = std::regex_replace(a3, std::regex("Y"), " ");
                        a4 = std::regex_replace(a4, std::regex("Y"), "\\");
                    }
                    else if (str.at(i) == '4')
                    {
                        a3 = std::regex_replace(a3, std::regex("Y"), " ");
                        a4 = std::regex_replace(a4, std::regex("Y"), " ");
                    }
                    else
                    {
                        throw std::invalid_argument("Invalid code '" + str + "'");
                    }
                }

                if (i == T) // T
                {
                    if (str.at(i) == '1')
                    {
                        a4 = std::regex_replace(a4, std::regex("T"), " : ");
                    }
                    else if (str.at(i) == '2')
                    {
                        a4 = std::regex_replace(a4, std::regex("T"), "] [");
                    }
                    else if (str.at(i) == '3')
                    {
                        a4 = std::regex_replace(a4, std::regex("T"), "> <");
                    }
                    else if (str.at(i) == '4')
                    {
                        a4 = std::regex_replace(a4, std::regex("T"), "   ");
                    }
                    else
                    {
                        throw std::invalid_argument("Invalid code '" + str + "'");
                    }
                }

                if (i == B) // B
                {
                    if (str.at(i) == '1')
                    {
                        a5 = std::regex_replace(a5, std::regex("B"), " : ");
                    }
                    else if (str.at(i) == '2')
                    {

                        a5 = std::regex_replace(a5, std::regex("B"), "\" \"");
                    }
                    else if (str.at(i) == '3')
                    {
                        a5 = std::regex_replace(a5, std::regex("B"), "___");
                    }
                    else if (str.at(i) == '4')
                    {
                        a5 = std::regex_replace(a5, std::regex("B"), "   ");
                    }
                    else
                    {
                        throw std::invalid_argument("Invalid code '" + str + "'");
                    }
                }

                // prevent print errors
                if (a1 != check && a2 != check2 && a3 != check3 && a4 != check4 && a5 != check5)
                {
                    all = "";
                    all += a1;
                    all += "\n";
                    all += a2;
                    all += "\n";
                    all += a3;
                    all += "\n";
                    all += a4;
                    all += "\n";
                    all += a5;
                }
            }
        }
        else
        {
            throw std::invalid_argument("Invalid code '" + str + "'");
            all = "";
        }
        return all;
    }

}
