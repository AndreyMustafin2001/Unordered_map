#include <iostream>
#include <unordered_map>
#include <string>

bool isitLetter(std :: string ransomLetter,std :: string paper) {

    std :: unordered_map<char, int> charCount1;

    for (char S : paper) {
        charCount1[S]++;
    }

    std :: unordered_map<char, int> charCount2;

    for (char S : ransomLetter) {
        if(S == ' ')continue;
        charCount2[S]++;
    }

    bool all = true;
    for (const auto& A : charCount2) {
        char S = A.first;
        int Count2 = A.second;

        if (charCount1[S] < Count2) {
            all = false;
            break;
        }
    }
    return all;
}

int main()
{
    std :: string ransomLetter, paper;

    std :: cout << "ransomLetter: ";
    std :: getline(std::cin, ransomLetter);

    std :: cout << "paper: ";
    std :: getline(std::cin, paper);

    std :: unordered_map<char, int> charCount1;

    if(isitLetter(ransomLetter, paper) == true)
        std :: cout << "true" << std :: endl;
    else
        std :: cout << "false" << std :: endl;

    return 0;
}
