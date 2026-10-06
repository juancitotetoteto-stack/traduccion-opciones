#include <Geode/Geode.hpp>
#include <Geode/modify/OptionsLayer.hpp>

using namespace geode::prelude;

// Hook para modificar las opciones del juego
class $modify(OptionsLayer) {
    bool init() {
        if (!OptionsLayer::init()) return false;
        
        return true;
    }
};
