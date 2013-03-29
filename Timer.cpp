#ifdef TIMER_UNIT_TEST
#include "Timer.h"
#include <iostream>

using namespace timer;

int main(int argc, char* argv[])
{
	boost::timer::cpu_timer timer;
	timer.start();
	int n;
	std::cin >> n;
	CountTime("message", std::cout, timer);

    return 0;
}

#endif
