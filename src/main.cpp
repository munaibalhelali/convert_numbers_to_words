#include "numword.h"
#include "utest.h"
#include <iostream>

int main(){
    MS::UTest utest("converting numbers to words");
    MS::NumWord num_word;
    utest.test("Singles", num_word.convert(1).compare("one"));
    utest.test("Twenties", num_word.convert(22).compare("twenty-two"));
    utest.test("Hundreds", num_word.convert(234).compare("two hundred thirty-four"));
    utest.test("Thousands", num_word.convert(5676).compare("five thousand six hundred seventy-six"));
    utest.test("Ten thousands", num_word.convert(87765).compare("eighty-seven thousand seven hundred sixty-five"));
    utest.test("Hundred Thousands", num_word.convert(125444).compare("one hundred twenty-five thousand four hundred forty-four"));
    utest.test("Millions", num_word.convert(4567655).compare("four million five hundred sixty-seven thousand six hundred fifty-five"));
    utest.report();

    return 0;

}