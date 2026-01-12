#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

class CItem
{
private:
    int       m_Code;
    string    m_Description;
    double    m_Price;
    double    m_DiscountRate;

public:
    CItem(void);
    CItem(int code);
    CItem(int code, string m_Description, double m_Price, double m_DiscountRate);
    /*
    void DoInitializePriceList(void);
    void DoDisplayFullPriceList(void);
    void DoAddItemToList(void);
    void DoSetItemPrice(void);
    void DoSetItemDiscountRate(void);
    void DoDisplayItem(void);
    void DoOrderCost(void);
    void DoTotalInvoice(void);
    void DoRemoveItemFromList(void);
    */
   
    


   

};
 


