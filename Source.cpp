#include <iostream>
using namespace std;
int main()
{
    double cost;
    bool end = false;
    char Loop;

    while (!end)
    {
        do
        {
            int choice;
            cout << "\n Enter your cost/Cost: \n" << endl;
            cin >> cost;
            cout << "1.- To Calculate the 20% off for the cost of second item" << endl;
            cout << "2.-To find the final cost for an article. The total amount for the taxes is 15%" << endl;
            cout << "3.-To find the final cost with a special reduction according to the cost.The total amount for the taxes is 15%." << endl;
            cout << "Choose one of the choices below: " << endl;
            cin >> choice;

            switch (choice)
            {

            case 1:         // Calculate the 20% off for the price of second item
            {
                cost = cost - (cost * 0.2);
                cout << "\n After 20% off cost is: " << cost;
                break;
            }

            case 2:         // the final price for an article. The total amount for the taxes is 15%
            {
                cost = cost + (cost * 0.15);
                cout << "\n After 15% tax ,the cost is: " << cost << endl;
                break;
            }

            case 3:         // the final price with a special reduction according to the price.  The total amount for the taxes is 15%.
            {
                if (cost >= 50 && cost <= 75)       //between 50 to 75 dollars 25% off
                {
                    cost = cost - (cost * 0.25);
                    cost = cost + (cost * 0.15);
                    cout << "The discount cost is " << cost << endl;
                }

                else if (cost >= 1 && cost <= 25)       //between 1 to 25 dollars 5% off
                {
                    cost = cost - (cost * 0.05);
                    cost = cost + (cost * 0.15);
                    cout << "The discount cost is " << cost << endl;
                }

                else if (cost >= 100)       //over 100 dollars 30% off
                {
                    cost = cost - (cost * 0.3);
                    cost = cost + (cost * 0.15);
                    cout << "The discount cost is " << cost << endl;
                }

                else if ((cost > 25 && cost < 50) || (cost > 75 && cost < 100))     //for any other price 15% off.
                {
                    cost = cost - (cost * 0.15);
                    cost = cost + (cost * 0.15);
                    cout << "The discount cost is " << cost << endl;
                }

                else if (cost < 0)      // if the user enters the wrong choice
                {
                    cout << " Enter correct Value " << endl;
                }
                break;
            }
            default:            // if it chooses the wrong choice display a error message and ask him/her to choose once more time
            {
                cout << "\n Invalid option,please choose the correct option ";
                cost=0;
            }

            }
        } while (cost == 0);        //if price will be 0 then it will not ask the user if he want to terminate the program.
        {
            cout << "\n Press any key to continue or Press F to end\n";
            cin >> Loop;

            if (Loop == 'F' || Loop == 'f')         // end of each process you will ask the user if he want to continue or to end the loop
                end = true;
        }
    }
    return 0;
}
