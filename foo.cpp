#include "foo.hpp"
#include <functional>

template<typename T>
T Foo<T>::add(const T& i, const T& j) {
  return std::plus<T>()(i, j);
}
