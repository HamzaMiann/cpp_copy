#pragma once

/*
File:		copy.hpp
Author:		Hamza Mian
Date:		February 11, 2019
Brief:		Header/implementation for the copy method (contained in cpy namespace).
			This method returns a copy of the object given.
*/

namespace cpy
{
	template<typename T>
	inline T Copy(T value)
	{
		return value;
	}
}