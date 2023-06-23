#pragma once
#include <set>
#include <string>


bool IsStringNumeric(const std::string& str) 
{
 size_t counter_of_dots = 0;
	std::set<char> appropriate_symbols = { '0','1','2','3','4','5','6','7','8','9','.' };

	for (const char& symbol : str)
	{
  counter_of_dots += symbol == '.'? 1 : 0;
		if (appropriate_symbols.count(symbol) == 0)
		{
			return false;
		}
	}
	return true;
}
