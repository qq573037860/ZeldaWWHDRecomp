// WWHD UI internationalization system
// Simple translation system for UI strings
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Initialize the i18n system with the specified language
// Supported languages: "en_US", "zh_CN"
void i18n_init(const char* language);

// Get the translated string for the given key
// Returns the key itself if no translation is found
const char* tr(const char* key);

// Get current language code
const char* i18n_get_language();

// Set language and reload translations
void i18n_set_language(const char* language);

#ifdef __cplusplus
}
#endif
