#include <iostream>
#include <lightweight_vector.hpp>

template class gstd::lightweight_vector< int >;
template class gstd::_lightweight_vector_iterator<int>;

int main(int const argc, char const * const * argv)
{
	gstd::lightweight_vector< unsigned, unsigned > b;
	b.push_back(32);
	b.push_back(49);
	b.push_back(55);
	auto it = b.begin();
	++it;
	++it;
	unsigned r = *it;
	b.erase( b.begin(), b.end() );
	return EXIT_SUCCESS;
}