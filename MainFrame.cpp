#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>

MainFrame::MainFrame(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)    

{
    wxPanel* panel = new wxPanel(this);
    wxButton* button = new wxButton(panel, wxID_ANY, "GAMER2030 IS GAY", wxPoint(100, 100), wxSize(200, 30),wxBU_LEFT | wxBU_RIGHT);
    wxCheckBox* Checkbox = new wxCheckBox(panel, wxID_ANY, "PARSA IS GAY", wxPoint(500, 200),wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);
    Checkbox->SetBackgroundColour(*wxBLACK);
    Checkbox->SetForegroundColour(*wxGREEN);
    wxStaticText* statictext = new wxStaticText(panel, wxID_ANY, "THIS IS A TEXT", wxPoint(200, 200),wxSize(100,-1));
    statictext->SetBackgroundColour(*wxBLACK);
    statictext->SetForegroundColour(*wxRED);
    wxTextCtrl* textcontrol = new wxTextCtrl(panel, wxID_ANY, "THIS TEXT IS EDITABLE", wxPoint(10, 30), wxSize(50, -2));
    wxSlider* slider = new wxSlider(panel, wxID_ANY, 50, 0, 100, wxPoint(330, 40), wxSize(100,100),wxSL_VALUE_LABEL );
    wxGauge* Healthbar = new wxGauge(panel, wxID_ANY, 100, wxPoint(400, -1));
    Healthbar->SetValue(25);
    wxArrayString choices;
    choices.Add("ITEM 1");
    choices.Add("ITEM 3");
    choices.Add("ITEM 4");
    choices.Add("ITEM 2");

    wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(500, 20),wxSize(200,200), choices,wxCB_SORT);
    choice->Select(1);

    wxSpinCtrl* spin = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(10, 200), wxSize(110, 30),0,200);
    wxListBox* listbox = new wxListBox(panel, wxID_ANY, wxPoint(475, -1), wxDefaultSize, choices);
    wxRadioBox* choicebox = new wxRadioBox(panel, wxID_ANY, "UPSCALE SIZE",wxPoint(800,-1),wxDefaultSize ,choices);


}

