#pragma once

#include "config.hpp"

enum MovementMode {
  FORWARD, REVERSE, STOP
};

void setMotorMode(MovementMode mode) {
  if (mode == MovementMode::FORWARD) {
    digitalWrite(LEFT_M1, HIGH);
    digitalWrite(LEFT_M2, LOW);
    digitalWrite(RIGHT_M1, HIGH);
    digitalWrite(RIGHT_M2, LOW);
  } else if (mode == MovementMode::REVERSE) {
    digitalWrite(LEFT_M1, LOW);
    digitalWrite(LEFT_M2, HIGH);
    digitalWrite(RIGHT_M1, LOW);
    digitalWrite(RIGHT_M2, HIGH);
  } else {
    digitalWrite(LEFT_M1, HIGH);
    digitalWrite(LEFT_M2, HIGH);
    digitalWrite(RIGHT_M1, HIGH);
    digitalWrite(RIGHT_M2, HIGH);
  }
}

