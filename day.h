/*
 * Nicholas Metzger
 * 8/3/16
 * day.h
 * Header file for class Day.
 */
#ifndef DAY_H
#define DAY_H

#include <string>
#include "event.h"

//Days has both a number and a name.
class Day
{
	public:
			Day();
			void create_event();
            void update_day(int ,std::string);
			void print_day_num();
			void print_day_name();
			std::string get_day_name();
            bool get_has_event();
	private:
            void ensure_cap();

			int	day_num;
			std::string day_name;
            int num_events;
            int cap_events;
            bool has_event;
            Event *events;
};

#endif /*DAY_H*/
