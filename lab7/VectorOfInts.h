#pragma once
class VectorOfInts
{
public:
	VectorOfInts();
	VectorOfInts(int n);
	int size();
	int capacity();
	void clear();
	void push_back(int n);
	int at(int n);
	~VectorOfInts();
};

