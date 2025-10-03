#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>

MainFrame::MainFrame(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)    
//Pos Values for Controls are Set at random so the controls are at weird places
//Values can be changed in wxPoint() Function for each control
{
    wxPanel* panel = new wxPanel(this);
    wxButton* button = new wxButton(panel, wxID_ANY, "This is a Button", wxPoint(100, 100), wxSize(200, 30),wxBU_LEFT | wxBU_RIGHT);
    wxCheckBox* Checkbox = new wxCheckBox(panel, wxID_ANY, "CheckBox", wxPoint(500, 200),wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);
    Checkbox->SetBackgroundColour(*wxBLACK); // Changes the Background colour for CheckBox
    Checkbox->SetForegroundColour(*wxGREEN); //Changes the colour of the text for CheckBox
    wxStaticText* statictext = new wxStaticText(panel, wxID_ANY, "Text - non Editable", wxPoint(200, 200),wxSize(100,-1));
    statictext->SetBackgroundColour(*wxBLACK); // Changes the Background colour for Static Text
    statictext->SetForegroundColour(*wxRED);   //Changes the colour of the text for Static Text
    wxTextCtrl* textcontrol = new wxTextCtrl(panel, wxID_ANY, "Text - Editable", wxPoint(10, 30), wxSize(50, -2)); 
    wxSlider* slider = new wxSlider(panel, wxID_ANY, 50, 0, 100, wxPoint(330, 40), wxSize(100,100),wxSL_VALUE_LABEL );
    wxGauge* Gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(400, -1));
    Slider->SetValue(25); // Slider Set Value
    wxArrayString choices;
    choices.Add("ITEM 1");
    choices.Add("ITEM 3");
    choices.Add("ITEM 4");
    choices.Add("ITEM 2");

    wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(500, 20),wxSize(200,200), choices,wxCB_SORT);
    choice->Select(1); // Set Default Choice

    wxSpinCtrl* spin = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(10, 200), wxSize(110, 30),0,200);
    wxListBox* listbox = new wxListBox(panel, wxID_ANY, wxPoint(475, -1), wxDefaultSize, choices);
    wxRadioBox* choicebox = new wxRadioBox(panel, wxID_ANY, "RadioBox",wxPoint(800,-1),wxDefaultSize ,choices);


}



