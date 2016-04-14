#include "stdafx.h"
#include "VectorOfInts.h"
#include <vector>

//A default constructor that creates an vector with a default capacity of 2
VectorOfInts::VectorOfInts()
{
	v_capacity = 2;
	
}
//A parameterized constructor that creates a vector of capacity n
VectorOfInts::VectorOfInts(int n)
{
	v_capacity = n;

}
//A function, size( ), that returns the size of your vector.
int VectorOfInts::size()
{
	return v_size;
}
//A function, capacity( ), that returns the capacity of the vector.
int VectorOfInts::capacity()
{
	return v_capacity;
}
//A function, clear( ), that deletes all of the elements from the vector and resets its size to zero and its capacity to two.
void VectorOfInts::clear()
{

}
//A function push_back(int n) that adds the integer value n to the end of the vector. 
//If the vector is not large enough to hold this additional value, you must make the vector grow. 
//Your grow algorithm should double the current capacity of the vector. 
//Don't forget to consider the case where the initial capacity of the vector is zero.
void VectorOfInts::push_back(int n) 
{
	
	v_size++;
}
//A function at(int n) that returns the value of the element at position n in the vector.If the index n is greater than the size() of the vector, this function should throw an exception.
int VectorOfInts::at(int n)
{

}

VectorOfInts::~VectorOfInts()
{
}
