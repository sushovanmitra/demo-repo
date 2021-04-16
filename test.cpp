#include<iostream>
#include<vector>

int main()
{
	std::vector<int> vec = {1,1,2,2,2,2,3,4,4,5,5,5,6};
	for(auto v : vec) { std::cout<<v<<std::endl; }
	return 0;
}
