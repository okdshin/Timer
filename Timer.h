#pragma once
//Timer:20130329
#include <iostream>
#include <string>
#include <boost/timer/timer.hpp>
namespace timer
{
auto CountTime(const std::string& message, std::ostream& os, const boost::timer::cpu_timer& timer) -> std::ostream& {
	os << message << ":" << timer.format(10," %ws wall, %us user + %ss system = %ts CPU (%p%)\n") << std::endl;
	return os;
}
}

