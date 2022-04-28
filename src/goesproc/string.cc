#include "string.h"

std::string removeSuffix(const std::string& str) {
  auto pos = str.rfind('.');
  if (pos != std::string::npos) {
    return str.substr(0, pos);
  }
  return str;
}

std::string getSuffix(const std::string& str) {
  auto pos = str.rfind('.');
  if (pos != std::string::npos) {
    return str.substr(pos + 1, std::string::npos);
  }
  return std::string();
}
