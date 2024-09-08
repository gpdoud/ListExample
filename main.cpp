
#include <iostream>
#include <list>
#include "customer.h";

/// <summary>
/// This program is using a list which is a double linked list that
/// provides forward and backward navigation
/// </summary>
/// <returns></returns>
int main() {

    list<customer> customers;
    typedef list<customer>::const_iterator LI;

    customer dsi(1, "DSI");
    customers.push_back(dsi);
    customer amazon(2, "Amazon");
    customers.push_back(amazon);
    customer microsoft(3, "Microsoft");
    customers.push_back(microsoft);

    for(LI idx = customers.begin(); idx != customers.end(); ++idx) {
        customer cust = *idx;
        cout << cust.id << " | " << cust.name << endl;
    }
}
