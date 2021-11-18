#pragma once
#include "ofMain.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key) {};
	void keyReleased(int key) {};
	void mouseMoved(int x, int y) {};
	void mouseDragged(int x, int y, int button) {};
	void mousePressed(int x, int y, int button) {};
	void mouseReleased(int x, int y, int button) {};
	void windowResized(int w, int h) {};
	void dragEvent(ofDragInfo dragInfo) {};
	void gotMessage(ofMessage msg) {};

	ofEasyCam cam;

	vector<ofMeshFace> triangle_list;
	vector<glm::vec3> location_list;

	vector<int> index_list;
	vector<ofColor> index_color_list;

	vector<int> param_list;
	vector<ofColor> param_color_list;

	vector<vector<int>> route_info_list;

	vector<ofColor> base_color_list;

	ofMesh mesh, frame;
};