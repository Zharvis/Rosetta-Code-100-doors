/*
There are 100 doors in a row that are all initially closed.
You make 100 passes by the doors.
The first time through, visit every door and  toggle  the door  (if the door is closed,  open it;   if it is open,  close it).
The second time, only visit every 2nd door   (door #2, #4, #6, ...),   and toggle it.
The third time, visit every 3rd door   (door #3, #6, #9, ...), etc,   until you only visit the 100th door.
Task
Answer the question:   what state are the doors in after the last pass?   Which are open, which are closed?
http://rosettacode.org/wiki/100_doors
*/

#include <iostream>

int main()
{
    const int doorNumber = 100;
    bool is_open[doorNumber] = {false};

    for (int i = 0; i < doorNumber; i++)
    {    
        for (int j = i; j < doorNumber; j += i+1)
        {
            is_open[j] = is_open[j] ? false : true;
        }   
    }

    for (int i = 0; i < doorNumber; i++)
    {
        if(is_open[i])
        {
            std::cout << i+1 << ". door is open.\n";
        } else
        {
            std::cout << i+1 << ". door is closed.\n";
        }
    }
}
