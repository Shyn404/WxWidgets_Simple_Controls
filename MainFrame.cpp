#include "MainFrame.h"
#include <wx/wx.h>

enum IDs
{
	BUTTON_ID = 2,
	SLIDER_ID = 3,
	TEXT_ID = 4,
};
	
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
EVT_BUTTON(BUTTON_ID,MainFrame::OnButtonClicked)
EVT_BUTTON(SLIDER_ID,MainFrame::OnButtonClicked)
wxEND_EVENT_TABLE()

MainFrame::MainFrame(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)	

{
	wxPanel* panel = new wxPanel(this);
	wxButton* Button = new wxButton(panel, BUTTON_ID, "1", wxPoint(100, -1), wxDefaultSize);
	wxSlider* Audio = new wxSlider(panel, SLIDER_ID, 25, 0, 100, wxPoint(300, -1), wxDefaultSize,wxSL_VALUE_LABEL);
	CreateStatusBar();
	
}
void MainFrame::OnButtonClicked(wxCommandEvent& evt)
{
	wxLogStatus("GAMER2030 IS Gay af ");
}

	
