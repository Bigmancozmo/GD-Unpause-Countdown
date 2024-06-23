#include <Geode/Geode.hpp>
#include <Geode/modify/PauseLayer.hpp>

#include <iostream>

using namespace geode::prelude;

class $modify(CountdownCreator, PauseLayer) {
	void createNumber(int num) {
		// convert num to const char
		std::string numStr = std::to_string(num);
		const char* text = numStr.c_str();

		CCLabelBMFont* label = CCLabelBMFont::create(text, "goldFont.fnt");
		PauseLayer::addChild(label);
	}

	void onResume(CCObject* sender) {
		PauseLayer::hideLayer(true);

		

		PauseLayer::onResume(sender);
	}
};
