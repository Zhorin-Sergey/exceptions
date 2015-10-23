#pragma once
#ifndef DIV_H
#define DIV_H

template <class T>
T MyDiv(T a, T b) {
  if (b == 0) {
    throw int(-1);
  } else {
    return a / b;
  }
}

#endif  // DIV_H
