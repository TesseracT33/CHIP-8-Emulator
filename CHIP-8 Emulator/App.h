#pragma once

#include "wx/wx.h"
#include "GUI.h"

class App : public wxApp
{
public:
	App();
	~App();

	virtual bool OnInit();

private:
	GUI* m_frame1 = nullptr;
};

