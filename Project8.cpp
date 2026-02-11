
#include <iostream>

#include "clsQueueLine.h"

using namespace std;

int main()
{
    clsQueueLine PaysBillQueue("A0" , 10);
    clsQueueLine SubscriptionsQueue("B0", 5);

    PaysBillQueue.IssueTicket();
    PaysBillQueue.IssueTicket();
    PaysBillQueue.IssueTicket();
    PaysBillQueue.IssueTicket();
    PaysBillQueue.IssueTicket();


    cout << "\nPay Bills Queue Info: ";
    PaysBillQueue.PrintInfo();



    PaysBillQueue.PrintTicketsLineRTL();


    PaysBillQueue.PrintTicketsLineLTR();

    PaysBillQueue.PrintAllTickets();

    PaysBillQueue.ServeNextClient();

    cout << "\nPay Bills Queue Info: ";
    PaysBillQueue.PrintInfo();


    cout << "\nSubscriptions Queue Info: ";
    

    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();

    SubscriptionsQueue.PrintInfo();

    SubscriptionsQueue.PrintTicketsLineRTL();
    SubscriptionsQueue.PrintTicketsLineLTR();


    SubscriptionsQueue.PrintAllTickets();

}


