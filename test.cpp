#include<iostream>
#include<vector>

template<class Iter>
Iter find_unique(Iter first, Iter last)
{
	if (first == last)
		return last;
	Iter result = first;
	while (++first != last) {
		if ( *first != *result && (++result != last)) {
			*result = std::move(*first);
        }
    }
	return ++result;
}

int main()
{
	std::vector<int> vec = {1,1,2,2,2,2,3,4,4,5,5,5,6};
	auto last = find_unique(vec.begin(), vec.end());
	vec.erase(last, vec.end());
	for(auto v : vec) {
		std::cout<<v<<std::endl;
	}
	return 0;
}
