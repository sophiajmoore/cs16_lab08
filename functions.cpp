// Functions.cpp
// By: Sophia Moore
// Created on: 12/02/20

AString::AString(string a_string)
{
    // setting a_string to the private member variable StringValue
    StringValue = a_string;
}

AString::AString()
{
    // setting private member variable StringValue to an empty string
    StringValue = "";
}

void AString::getAString()
{
    string a_string;
    cout << "Enter string value: ";
    getline(cin, a_string);
    StringValue = a_string;
}

void AString::cleanUp()
{
    string new_string;
    for (int i = 0; i < StringValue.size(); i++)
    {
        if (isalpha(StringValue[i]) != 0) // if it's not a number,
        {
            if ( (StringValue[i] >= 97) && (StringValue[i] <= 122) ) // if it's lowercase,
            {
                new_string += StringValue[i];
            }

            else if ( (StringValue[i] >= 65) && (StringValue[i] <= 90) ) // else if it's uppercase,
            {
                StringValue[i] += 32; // lowercase are 32 away from corresponding uppercase in ascii
                new_string += StringValue[i]; // adds all letters to a new string
            }
        }
    }
    StringValue = new_string; // setting StringValue equal to new_string
}

void AString::countLetters(int letter_array[])
{
    int index(0);

    for (int i = 0; i < StringValue.size(); i++)
    {
        index = StringValue[i] - 97; // subtracting the ascii code of 'a'
        letter_array[index] += 1;
    }
}

bool compareCounts(int first_array[], int second_array[])
{
    for (int i = 0; i < 26; i++)
    {
        if (first_array[i] != second_array[i]) // if they don't have the same # of a certain letter,
        {
            return true;
        }
    }
    return false;
}


