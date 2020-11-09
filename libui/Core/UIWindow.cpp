#include "stdafx.h"
#include "UIWindow.h"

namespace ui {

	UIWindow::UIWindow()
	{

	}

	UIWindow::~UIWindow()
	{

	}

	intptr_t UIWindow::Identify() const
	{
		return m_Identify;
	}

	void UIWindow::Identify(const intptr_t& identify)
	{
		m_Identify = identify;
	}
	void UIWindow::Identify(const void* identify)
	{
		m_Identify = reinterpret_cast<intptr_t>(identify);
	}
}///namespace ui