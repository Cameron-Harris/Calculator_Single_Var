/*
element.h declares functions for us to use of class "element".
The element class provides us with a singular data type that we can fill a vector with.
The elements provided by this class will be used to build a vector of elements to represent an equation.
*/
#ifndef ELEMENT_H
#define ELEMENT_H

// enumeration  below records the designation of each element. This will help the element know what type of value to return.
enum TYPE{NUMBER, OPERATION, VARIABLE};

// class name "element"
class element{
  // private (only accessible by member function)
  private:
    // data member variables (only accessible by member function)
    TYPE dataType;
    int num; // integer
    char sign; // character corresponding to OPERATION type
    char var; // character corresponding to VARIABLE type
  // public (accessible by any file that can see this class)
  public:
    // constructor 
    element(TYPE, int); // new element. builds a NUMBER
    element(TYPE, char); // new element. builds an OPERATION or VARIABLE based on desired type
    // accessor
    TYPE elementType(); // returns TYPE
    int elementValue_int(); // returns a NUMBER
    char elementValue_char(); //returns an OPERATION or VARIABLE based on object's inherint TYPE
    // mutator (none needed currently)
};
#endif