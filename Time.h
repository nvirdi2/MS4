// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: April 3rd, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_TIMER_H
#define SDDS_TIMER_H
#include <iostream>
namespace sdds
{
   class Time
   {
      unsigned int m_minutes;

   public:
      Time &setToNow();
      Time(unsigned int minutes = 0);
      std::ostream &write(std::ostream &ostr) const;
      std::istream &read(std::istream &istr);

      Time &operator-=(const Time &D);
      Time operator-(const Time &D) const;
      Time &operator+=(const Time &D);
      Time operator+(const Time &D) const;

      Time &operator=(unsigned int val);
      Time &operator*=(unsigned int val);
      Time &operator/=(unsigned int val);
      Time operator*(unsigned int val) const;
      Time operator/(unsigned int val) const;

      operator unsigned int() const;
      operator int() const;
   };
   std::ostream &operator<<(std::ostream &ostr, const Time &D);
   std::istream &operator>>(std::istream &istr, Time &D);
}

#endif //!SDDS_TIME_H
