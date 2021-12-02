#include <iostream>

/*
There are 100 doors in a row that are all initially closed.

You make 100 passes by the doors.

The first time through, visit every door and  toggle  the door  (if the door is closed,  open it;   if it is open,  close it).

The second time, only visit every 2nd door   (door #2, #4, #6, ...),   and toggle it.

The third time, visit every 3rd door   (door #3, #6, #9, ...), etc,   until you only visit the 100th door.


Task
Answer the question:   what state are the doors in after the last pass?   Which are open, which are closed?
*/

int main()
{
    const int doorNumber = 100;
    bool doors[doorNumber];
    for (int i = 0; i < doorNumber; i++)
    {
        doors[i] = true;
    }

    for (int i = 0; i < doorNumber; i++)
    {
        doors[i] = doors[i] ? false : true;
    }

    for (int i = 0; i < doorNumber; i++)
    {
        if(doors[i])
            std::cout << i << " is closed.\n";
        else
        {
            std::cout << i << " is open.\n";
        }
        
    }
    return 0;
}
