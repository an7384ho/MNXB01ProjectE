#include "tempTrender.h"
#include <string>

void project() {
	const std::string pathToFile = "/home/marcusg/git/Epic-project/MNXB01ProjectE/Code/Skeleton/Cleaneddata/"; //Put the path to your data file here
	tempTrender t(pathToFile); //Instantiate your analysis object
	
	//t.tempOnDay(8, 23); //Call some functions that you've implemented
	//t.tempOnDay(235);
	//t.tempPerDay();
	//t.hotCold();
	//t.tempPerYear(2050);
	
	//t.extremetemps("2020"); //Call with a single year to investigate
				//Also plots for all available years in the dataset
	t.Avgtemp3D();
}
