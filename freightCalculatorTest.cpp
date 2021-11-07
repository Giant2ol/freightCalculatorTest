#include <iostream>
using namespace std;

main()
{
    beginning:
    
    float totalFreight, surcharge;
    short numberOfProducts;

    cout << endl << "Total Freight($): " << endl;
    cin >> totalFreight;

    cout << "Sur-Charge (%): " << endl;
    cin >> surcharge;

    cout << "Number of Products: " << endl;
    cin >> numberOfProducts;

    for (short repeat = numberOfProducts; repeat > 0; repeat--) 
        {
            short quantity;
            float extendedCost;

            cout << endl << "Quantity: " << endl;
            cin >> quantity;

            cout << "Extended Cost($): " << endl;
            cin >> extendedCost;

            float newCost = (((extendedCost * (surcharge/100 + 1)) + (totalFreight/numberOfProducts)) / quantity);
            cout.precision(5);
            cout << fixed << endl << "New Cost: " << endl << "$" << newCost << endl;

        }
    
    char decision;
    cout << endl << "Do you want to continue program? (Y/N)" << endl;
    cin >> decision;

    if (decision == 'y' || decision == 'Y')
        goto beginning;
}