#include<iostream>
#include<fstream>
#include<cstring>
#include<cctype>

using namespace std;
const int BLOCK_SIZE = 64;

class block{
	public:
		block();
		readToBlock();
		~block();

	private:
		bitset<BLOCK_SIZE> bit_block;
};

class node 
	public:
		node();
		~node();
	private:
		node * next;
		block * data;
};

class text{
	public:
		text();
		~text();
	private:
		node * head;
};
