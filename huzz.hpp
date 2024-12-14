#ifndef HUZZ_HPP
#define HUZZ_HPP

#include <iostream>
#include <string>
#include <sstream>

bool is_vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void translate() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::istringstream stream(sentence);
    std::string word;
    std::string result;

    while (stream >> word) {
        if (word == "hoes") {
            word = "huzz";
        } else if (word.length() > 1 && is_vowel(word[word.length() - 2])) {
            word.pop_back();
            word += "uzz";
        } else if (!word.empty() && is_vowel(word.back())) {
            word.pop_back();
            word += "uzz";
        }
        result += word + " ";
    }

    if (!result.empty()) {
        result.pop_back();
    }

    std::cout << result << std::endl;
}

#endif