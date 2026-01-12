#include "CItem.h"

CItem::CItem(void) 
	    : m_Code(0)
		, m_Description("")
		, m_Price(0)
		, m_DiscountRate(0)
{
}

CItem::CItem(int code)
: m_Code(code)
, m_Description("")
, m_Price(0)
, m_DiscountRate(0)
{
}



CItem::CItem(int code ,string description, double price, double discount)
	: m_Code(code)
	,  m_Description(description)
	,  m_Price(price)
	,  m_DiscountRate(discount)
{
}
	
