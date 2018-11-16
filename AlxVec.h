#pragma once
#include <iostream>
#include <vector>

namespace avec
{
	using std::vector;
	using std::string;
	/// Find first in vector
	template <typename T>
	int ffiv(T a, vector<T> vect)
	{
		for (int i = 0; i < vect.size() ; i++)
		{
			if (a == vect[i])
			{
				return i;
			}
		}
		return -1;
	}

	/// Find first in vector for strings
	int ffiv(string a, vector<string> vect)
	{
		for (int i = 0; i < vect.size(); i++)
		{
			if (a == vect[i])
			{
				return i;
			}
		}
		return -1;
	}
	
	/// Find nth in a vector
	template <typename T>
	int fniv(T a, vector<T> vect, int nth)
	{
		int iteration = 1;
		for (int i = 0; i < vect.size(); i++)
		{
			if (a == vect[i])
			{
				if (iteration == nth) { return i; }
				else { iteration++; }
			}
		}
		return -1;
	}
	/// Find nth in a vector
	int fniv(string a, vector<string> vect, int nth)
	{
		int iteration = 1;
		for (int i = 0; i < vect.size(); i++)
		{
			if (a == vect[i])
			{
				if (iteration == nth) { return i; }
				else { iteration++; }
			}
		}
		return -1;
	}
}
