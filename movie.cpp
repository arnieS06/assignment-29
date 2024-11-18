#include <iostream>
#include "movie.h"

// kind of a constructor 
Movie::Movie(const std::string& userInput) {
    std::stringstream stream(userInput);
    std::getline(stream, title, ',');
    stream >> releaseYear;
}

std::string Movie::getTitle() const {
    return title;
}

int Movie::getReleaseYear() const {
    return releaseYear;
}

std::ostream& operator<<(std::ostream& stream, const Movie& movie) {
    stream << "Title: " << movie.getTitle() << " \nYear: " << movie.getReleaseYear() << std::endl;
    return stream;
}
