#pragma once
class VectorOfInts
{
private:
	int v_size=0;
	int v_capacity;
	int *pointer;
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

