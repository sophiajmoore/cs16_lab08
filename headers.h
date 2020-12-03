// Headers.h
// By: Sophia Moore
// Created on: 12/02/20

class AString 
{
    public:
        AString(string a_string); // 2 constructors:
        AString();
        void getAString(); // 3 member functions:
        void cleanUp();
        void countLetters(int letter_array[]);
    private:
        string StringValue;
};

bool compareCounts(int first_array[], int second_array[]);
// Pre-condition: takes in two arrays
// Post-condition: returns true if they aren't the same, false if they are

