// Newanagram.cpp
// By: Sophia Moore
// Created on: 12/02/20

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#include "headers.h"
#include "functions.cpp"

int main()
{
    AString sentence1, sentence2("nothing");
    int ca1[26] = {0}, ca2[26]={0};

    // get the string values
    sentence1.getAString();
    sentence2.getAString();

    // clean up the string values
    sentence1.cleanUp();
    sentence2.cleanUp();

    // create the array of letter counts
    sentence1.countLetters(ca1);
    sentence2.countLetters(ca2);

    // determining if the strings are anagrams
    bool badCount = compareCounts(ca1, ca2);
    if (badCount) {
        cout << "The strings are not anagrams.\n";
    } else {
        cout << "The strings are anagrams.\n";
    }

    return 0;
}

