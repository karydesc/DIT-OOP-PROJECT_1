# DIT-OOP-PROJECT_1 <br>

Code written by Christos Karydis.<br>
Assignment: OOP - Project 1 | 2023<br>

Compile Instructions:<br>
WARNING: The following instructions/codes have only been tested in a macOS/Linux environment <br>
The code should theortetically work on Windows as well, however compile instructions cannot be provided.<br><br>
Prerequisites:<br>
	-A C++ compiler<br>
	-wxWidgets Library installed<br>
  	-sqlite3 Library installed<br>
  	-cmake - optional<br><br>
On a Unix-like terminal:<br>
	``$ cd (ROOT_DIR)``<br>
	``$ mkdir build``<br>
 	``$ cd build``<br>
  	``$ cmake ..``<br>
   	``$ make``<br>
        ``$./DIT_OOP_PROJECT_1``<br>

<br>if CMake is not present, navigate to the source folder after making your build dir and run the following commands:<br>
	`$ cd root/source;`<br>
	``$ g++ myApp.cpp mainFrame.cpp pomodoro.cpp database.cpp `wx-config --libs --cxxflags` -lsqlite3 -o ../build/Pomodoro``
 	<br>NOTE: wx-config needs to be in your PATH environment variable in order for it to return the libs and flags to the compiler<br>

  To compile the catch2 tests:<br>
  ``$ cd (ROOT_DIR)/CatchTesting``<br>
  ``$ mkdir build``<br>
  ``$ cd build``<br>
  ``$ cmake ..``<br>
  ``$ make``<br><br>
  ``$./Catchtesting``

  <br>To install the required libraries, you can use the package manager this is compatible/provided with your system.<br><br>
  For MacOS:<br>
  <br>You will need to install homebrew by running this command in the shell:<br>
   ``$/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)" ``<br>
  <br>Then run:<br>
  ``$brew update``<br>
 ``$brew install sqlite3``<br>
  ``$brew install wxwidgets``<br>
  ``$brew install cmake``<br>
  <br>For Linux:<br>
  <br>Since there is no universal package manager for all Linux distros, you will need to research the names of the packages on your own<br>
  Example: for Ubuntu, apt is the default manager:<br>
  
