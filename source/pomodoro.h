//
// Created by Chris on 14/10/23.
//

#ifndef DIT_OOP_PROJECT_1_POMODORO_H
#define DIT_OOP_PROJECT_1_POMODORO_H
#include <wx/wx.h>
#include <thread>

class pomodoro {
public:
     void startSession(int,int,wxStaticText*,wxGauge*,pomodoro*);
     void pauseSession();
     void logStatistics();
     void resetScreen(wxStaticText *text, wxGauge *gauge);
     bool quitRequested=false;
     bool processing=false;
     std::thread backgroundThread;
     bool pauseflag=false;
     bool cancelFlag=false;
     int WorkSeconds;
     int sessionsCompleted;
};


#endif //DIT_OOP_PROJECT_1_POMODORO_H
