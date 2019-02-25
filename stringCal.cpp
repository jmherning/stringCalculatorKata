//
// Created by Jason on 2/15/2019.
//



// TODO
// 1)  An empty string returns zero
// 2)  A single number returns the value
// 3)  Two numbers, comma delimited, returns the sum
// 4)  Two numbers, newline delimited, returns the sum
// 5)  Three numbers, delimited either way, returns the sum
// 6)  Negative numbers throw an exception
// 7)  Numbers greater than 1000 are ignored
// 8)  A single char delimiter can be defined on the first line (e.g. //# for a ‘#’ as the delimiter)
// 9)  A multi char delimiter can be defined on the first line (e.g. //[###] for ‘###’ as the delimiter)
// 10) Many single or multi-char delimiters can be defined (each wrapped in square brackets)





#include "stringCal.h"
#include <iostream>
using std::string;
using std::size;
using std::isdigit;
using std::size_t;
using std::stoi;


int stringCal(string s) {

    if (s.empty())
        return 0;
    if (size(s) == 1)
        return 1;


    size_t pos;
    if (s.find(',') !=  string::npos)
    {
        pos = s.find(',');
        return ((int) s[pos - 1] - 48) + ((int) s[pos + 1] - 48);
    } else if (s.find('\n')!= string::npos)
    {
        pos = s.find('\n');
        int left = stoi(s.substr(0, pos));
        int right = stoi(s.substr(pos + 1, s.length()));

        return left + right;
    }


}



//}std::string delimiter = ">=";
//
//size_t pos = 0;
//std::string token;
//while ((pos = s.find(delimiter)) != std::string::npos) {
//token = s.substr(0, pos);
//std::cout << token << std::endl;
//s.erase(0, pos + delimiter.length());
//}