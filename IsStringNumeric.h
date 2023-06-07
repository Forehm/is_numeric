#pragma once
#include <set>
#include <string>


bool IsStringNumeric(const std::string& str) 
{
	std::set<char> appropriate_symbols = { '0','1','2','3','4','5','6','7','8','9' };

	for (const char& symbol : str)
	{
		if (appropriate_symbols.count(symbol) == 0)
		{
			return false;
		}
	}
	return true;
}
