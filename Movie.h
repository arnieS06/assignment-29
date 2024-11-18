#pragma once

#include <iostream>
#include <sstream>

struct Movie {
private:
    std::string title;
    int releaseYear;

public:
    Movie(const std::string& userInput);
    std::string getTitle() const;
    int getReleaseYear() const;
};

std::ostream& operator << (std::ostream& stream, const Movie& movie);
