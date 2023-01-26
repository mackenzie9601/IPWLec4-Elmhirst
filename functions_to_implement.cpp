#include  "functions_to_implement.h"
#include <iostream>
#include <vector>


int Sign(int num) {
	if (num < 0) {return -1;}
	return 1;
}

//returns -1 if the number is negative, 1 otherwise
double Sign(double num) {
	if (num < 0.0) {return -1.0;}
	return 1.0;
}

// adds n to each element of the vector
std::vector<int> AddN(std::vector<int> v, int n) {
	int size =  v.size();
	for (int i = 0; i < size; i++) {
		v[i] += n;
	}
	return  v;
}

// adds n to each element of the vector
std::vector<double> AddN(std::vector<double> v, double n) {
	int size =  v.size();
	for (int i = 0; i < size; i++) {
		v[i] += n;
	}
	return  v;
}

// adds n to each element of the vector
std::vector<std::string> AddN(std::vector<std::string> v, std::string n) {
	int size =  v.size();
	for (int i = 0; i < size; i++) {
		v[i] += n;
	}
	return  v;
}

long long Factorial(long long n){
	if(n>1)
		return n*Factorial(n-1);
	else
		return 1;
}