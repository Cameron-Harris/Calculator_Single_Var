/*
element.cpp implements the code for the functions in the header file.
*/
#include "element.h"
#include <iostream>

using namespace std;

// constructor for NUMBER.
element::element(TYPE type, int value){
    this->dataType = type;
    this->num = value;
    this->sign = 'Æ';
    this->var = 'Æ';
}
// constructor for OPERATION or VARIABLE.
element::element(TYPE type, char value){
    this->dataType = type;
    this->num = 0;
    if(type == OPERATION){
        this->sign = value;
        this->var = 'Æ';
    }
    else{
        this->sign = 'Æ';
        this->var = value;
    }
}
// accessor
TYPE element::elementType(){
    return this->dataType;
}
int element::elementValue_int(){
    return this->num;
}
char element::elementValue_char(){
    if(this->dataType == OPERATION){
        return this->sign;
    }
    else{
        return this->var;
    }
}
//mutator