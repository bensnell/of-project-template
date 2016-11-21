#pragma once

#include "ofMain.h"
#include "ofxApp.h"
#include "CWRU_Object.h"


class ofApp : public ofBaseApp, public ofxAppDelegate{

public:
	
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	void setupChanged(ofxScreenSetup::ScreenSetupArg &arg);

	//ofxApp imposed - responder methods
	void ofxAppStartUserPhase(ofxApp::UserAppSetupStage);
	bool ofxAppIsUserPhaseComplete(ofxApp::UserAppSetupStage){return true;}
	void ofxAppDrawPhaseProgressScreen(ofxApp::UserAppSetupStage, const ofRectangle & r){};
	float ofxAppGetProgressForUserPhase(ofxApp::UserAppSetupStage){return -1;}

	void ofxAppContentIsReady(const string & contentID, vector<ContentObject*>);

	vector<CWRU_Object*>	cwruObjects;
};
