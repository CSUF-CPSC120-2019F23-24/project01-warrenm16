// Name: Warren Macatangay
// This program calculates and displays business expenses.
#include <iostream>
#include <string>

int main()
{
  //Introduction to Business Trip Tracker
  std::cout << "Welcome to the Business Trip Tracker!\n";

  // ask the information about the trip
  std::string trip_location;
  std::cout << "What is the business trip location? ";
  std::cin >> trip_location;

  int days;
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  double hotel_expense;
  std::cout << "What is the total hotel expense? $";
  std::cin>> hotel_expense;

  double meal_expense;
  std::cout << "What is the total meal expense? $";
  std::cin>> meal_expense;

// Formula to calculate the total expense of the trip
  double total = hotel_expense + meal_expense;

// Displays the total
  std::cout << "Location \tDays \tHotel \tMeal \tTotal \n";
  std::cout << trip_location << "\t\t";
  std::cout << days << "\t";
  std::cout << hotel_expense << "\t";
  std::cout << meal_expense << "\t";
  std::cout << total << "\n";
  return 0;
}
