#pragma once
#include<vector>
#include<functional>
#include<string>
#include<bitset>

//#define BITMAP_SIZE 214748364-1    //2^31-1
#define BITMAP_SIZE 65535    //2^16-1
class SimpleBloomFilter
{
	using hashFunc = std::function<unsigned int(const char*)>; 
public:
	SimpleBloomFilter();
	void set(std::string& );
	bool exist(std::string& str);
	~SimpleBloomFilter();
private:
	std::vector<hashFunc> hashSet;
	//const int n;
	std::bitset<BITMAP_SIZE> bmap;
};

