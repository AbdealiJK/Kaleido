//
// Created by jmmease on 6/17/20.
//

#include "base/strings/string_util.h"

#include "Plotly.h"
#include "BasePlugin.h"

#ifndef CHROMIUM_FACTORY_H
#define CHROMIUM_FACTORY_H

BasePlugin* LoadPlugin(std::string name) {
    std::string name_lower = base::ToLowerASCII(name);
    if (name_lower == "plotly") {
        return new Plotly();
    } else {
        return nullptr;
    }
}

#endif //CHROMIUM_FACTORY_H