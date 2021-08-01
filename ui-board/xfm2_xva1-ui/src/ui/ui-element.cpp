#include <Arduino.h>
#include "ui-element.h"
#include "ui-common.h"

// ---------------------------------------------------------------------------------------

UiElement::UiElement() {

}

// ---------------------------------------------------------------------------------------

UiElement::~UiElement() {

}
// ---------------------------------------------------------------------------------------

void UiElement::initDraw() {
    u8g2->clearBuffer();
}

// ---------------------------------------------------------------------------------------

void UiElement::finishDraw() {
    u8g2->sendBuffer();
}

// ---------------------------------------------------------------------------------------