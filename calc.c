// add a file documentation header as explained in the specs ...


/*!
@file       the name of source file is calc.c (function definition file)
@author     Najih & DP login: n.hajasheikallaudin
@course     this source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Lab 02
@date       file created on 08/09/2023
@brief      provide a brief explanation about what this source file does:
            This file contains 3 functions definition that calculates 
            the squared value, cubed value and inveres values.
______________________________________________________________________*/


#include "calc.h"

// provide the definition of function squared
// that matches the declaration in calc.h ...
int squared(int i){

    return i*i;

}

// provide the definition of function cubed
// that matches the declaration in calc.h ...
double cubed(double d){
    
    return d*d*d;

}

// provide the definition of function minus
// that matches the declaration in calc.h ...
double minus(double x){

    return -1 * x;

}
