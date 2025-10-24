#include "Point.hpp"
#include <cstring>
#include <iostream>


Point::Point(int x, int y, const char *tag): x(x), y(y) {
    if (tag) {
        int size = strlen(tag);
        this->tag = new char[size + 1];
        strcpy(this->tag, tag);
    }
    else {
        this->tag = nullptr;
    }

}

bool Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

int& Point::operator[](int index) {
    return (index == 0) ? x : y;
}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point Point::operator*(const Point& other) const {
    return Point(x * other.x, y * other.y);
}

Point& Point::operator+=(const Point& other) {
    *this = *this + other;
    return *this;
}

Point& Point::operator*=(const Point& other) {
    *this = *this * other;
    return *this;
}


Point Point::operator-() {
    return Point(-x, -y);
}

std::string Point::toString() const {
    std::string str = "";
    if (tag) {
        str += std::string(tag) + ": ";
    }   
    return str + "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}


Point Point::operator++() {
    x += 1;
    y += 1;

    return *this;
}

//postincrement operator
Point Point::operator++(int ) {
    //  Point temp(x, y);
    Point temp(*this);
    this->x += 1;
    this->y += 1;

    return temp;
    //return Point(this->x++, this->y++);
}

Point Point::operator--() {
    x -= 1;
    y -= 1;

    return *this;
}

//postincrement operator
Point Point::operator--(int ) {
    //  Point temp(x, y);
    Point temp(*this);
    this->x -= 1;
    this->y -= 1;

    return temp;
    //return Point(this->x++, this->y++);
}


Point::~Point() {
    if (tag) {
        delete [] tag;
    }
}

Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
    if (other.tag) {
        int size = strlen(other.tag);
        tag = new char[size + 1]; 
        strcpy(tag, other.tag);
    }
    else {
        tag = nullptr;
    }
}

void Point::operator=(const Point& other) {
    x = other.x;
    y = other.y;
    if (other.tag) {
        int size = strlen(other.tag);
        tag = new char[size + 1]; 
        strcpy(tag, other.tag);
    }
    else {
        tag = nullptr;
    }
}
