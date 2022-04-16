#include "numword.h"

namespace MS{
std::vector<long> NumWord::_extract_powers(long num){
    std::vector<long> powers;
    while (num>0){
        powers.push_back(num%10);
        num /=10;
    }
    return powers;
}

std::vector<long> NumWord::_break_num(long unsigned num){
    std::vector<long> temp;
    while (num>0){
        temp.push_back(num%1000);
        num /=1000;
    }
    return temp;
}

std::string NumWord::convert(long unsigned num){
    if(num > max_num_size)
        return "Exceeded the max length!"; 
    std::vector<long> broken_num = _break_num(num);
    int power_idx = hundred;
    std::string num_str = "";

    for(auto n: broken_num){
        
        std::vector<long> powers = _extract_powers(n);

        std::string temp_str = "";
    
        for(auto i=0; i<powers.size();++i){
            int value = powers[i];
            if( i == 0){
                temp_str = singles[value-1]+" ";
            }else if (i==1){
                temp_str = tens[value-2] + "-" + temp_str;
            }else if (i==2){
                temp_str = singles[value-1]+ " "+ H + " "+ temp_str;
            }
        }
        num_str = temp_str + power_words[power_idx]+ " " + num_str;
        
        power_idx++;

        

    }
    while(num_str.back() == ' '){
        num_str.pop_back();
    }
    // std::cout<<"--"+num_str+"--"<<std::endl;
    return num_str;

}

}