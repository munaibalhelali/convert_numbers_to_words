#ifndef __NUMWORD_H_
#define __NUMWORD_H_    

#include <iostream>
#include <string>
#include <vector>
#include <deque>
enum words {hundred, thousand, million, billion, trillion, quadrillion};
namespace MS{
    class NumWord{
        const long max_num_size = 999999999999999999;
        const std::vector<std::string> singles = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        const std::vector<std::string> teens = {"ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        const std::vector<std::string> tens = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
        
        const std::string H = "hundred";
        const std::string K = "thousand";
        const std::string M = "million";
        const std::string B = "billion";
        const std::string T = "trillion";
        const std::string Q = "quadrillion";
        const std::vector<std::string> power_words = {"", K, M, B, T, Q};

        std::vector<long> _extract_powers(long num);
        std::vector<long> _break_num(long unsigned num);
        public:
            NumWord(){};
            std::string convert(long unsigned num);

    };
};

#endif //__NUMWORD_H_