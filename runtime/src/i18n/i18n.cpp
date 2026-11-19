#include "i18n.h"
#include <string>
#include <unordered_map>
#include <cstring>

// Language translation tables
#include "translations/en_US.h"
#include "translations/zh_CN.h"

namespace {
    std::string current_language = "en_US";
    const std::unordered_map<std::string, const char*>* current_translations = &en_US_translations;
}

void i18n_init(const char* language) {
    i18n_set_language(language ? language : "en_US");
}

const char* tr(const char* key) {
    if (!key) return "";

    auto it = current_translations->find(key);
    if (it != current_translations->end()) {
        return it->second;
    }

    // Fallback: return the key itself
    return key;
}

const char* i18n_get_language() {
    return current_language.c_str();
}

void i18n_set_language(const char* language) {
    if (!language) language = "en_US";

    current_language = language;

    if (strcmp(language, "zh_CN") == 0) {
        current_translations = &zh_CN_translations;
    } else {
        current_translations = &en_US_translations;
    }
}
