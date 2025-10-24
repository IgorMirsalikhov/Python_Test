#ifndef POINT_H
#define POINT_H

#include <string>

class Point {
public:
    Point(int x = 0, int y = 0, const char *tag = nullptr);
    // Destructor
    ~Point();
    // Copy constuctor
    Point(const Point& other);

    // Logic operator
    bool operator==(const Point& other) const; 
    bool operator!=(const Point& other) const; 
    
    // Arithmetic operator
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const;
    
    // Augmented Assignment Operators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other);

    // Subscript operator
    int& operator[](int index); 

    // Unary operator
    Point operator-();

    //preincrement / decrement operator
    Point operator++();
    Point operator--();
    //postincrement / decrement operator
    Point operator++(int );
    Point operator--(int );

    // Assignment operator
    void operator=(const Point& other);

    char* getTag() const { return tag;}

    std::string toString() const;

private:
    int x;
    int y;
    char *tag;
};

#endif