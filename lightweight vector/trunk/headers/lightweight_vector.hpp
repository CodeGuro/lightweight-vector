#pragma once

namespace gstd
{
	template < typename T > class lightweight_vector;
	template < typename T >
	class _lightweight_vector_iterator
	{
	private:
		lightweight_vector< T > * _myvec;
		unsigned _where;
	public:
		_lightweight_vector_iterator operator + (int advances)
		{
			_lightweight_vector_iterator tmp = *this;
			tmp._where += advances;
			return tmp;
		}
		_lightweight_vector_iterator operator ++ ()
		{
			++_where;
			return *this;
		}
		_lightweight_vector_iterator operator ++ (int)
		{
			_lightweight_vector_iterator tmp = *this;
			return --tmp;
		}
		_lightweight_vector_iterator operator - (int devances)
		{
			_lightweight_vector_iterator tmp = *this;
			tmp._where -= advances;
			return tmp;
		}
		_lightweight_vector_iterator operator -- ()
		{
			--_where;
		}
		_lightweight_vector_iterator operator -- (int)
		{
			_lightweight_vector_iterator tmp = *this;
			return --tmp;
		}
		T & operator * ()
		{
			return (*_myvec)[_where];
		}
		T & operator -> ()
		{
			return **this;
		}

	};
	template < typename T >
	class lightweight_vector
	{
	private:
		T * at;
		unsigned length;
		unsigned cap;
	public:

	};
}