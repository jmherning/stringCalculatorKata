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
using std::string;
using std::size;
using std::isdigit;
using std::size_t;


int stringCal(string s)
{

    if(s.empty())
        return 0;
    if(size(s) == 1)
        return 1;

    int leftNum;
    int rightNum;


    size_t delPos;
    delPos = s.find(',');

    if(delPos) return ((int)s[delPos-1]-48) + ((int)s[delPos+1]-48);

//    for(int i=0;i<s.length();i++){
//        if(isdigit(s[i]) && s[i+1] == "," && isdigit(s[i+2]))
//            return (int)s[i] + (int)s[i+2];
//
//    }


}