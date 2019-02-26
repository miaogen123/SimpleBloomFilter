#include "SimpleBloomFilter.h"
#include"hash.h"



SimpleBloomFilter::SimpleBloomFilter()
{
	hashSet.push_back(RSHash);
	hashSet.push_back(JSHash);
	hashSet.push_back(PJWHash);
	hashSet.push_back(ELFHash);
}

void SimpleBloomFilter::set(std::string& str)
{
	for (auto &f : hashSet) {
		bmap.set(f(str.c_str()) % BITMAP_SIZE);
	}
}

bool SimpleBloomFilter::exist(std::string & str)
{

	for (auto &f : hashSet) {
		if (!bmap.test(f(str.c_str()) % BITMAP_SIZE)) {
			return false;
		}
	}
	return true;
}


SimpleBloomFilter::~SimpleBloomFilter()
{
}
