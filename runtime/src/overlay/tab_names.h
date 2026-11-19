// Tab name translation helper
#pragma once
#include "../i18n/i18n.h"

namespace overlay {

// Get translated tab name by ID
inline const char* get_tab_name(const char* id) {
    if (strcmp(id, "saves") == 0) return tr("Saves");
    if (strcmp(id, "graphics") == 0) return tr("Graphics");
    if (strcmp(id, "display") == 0) return tr("Display");
    if (strcmp(id, "audio") == 0) return tr("Audio");
    if (strcmp(id, "mods") == 0) return tr("Mods");
    if (strcmp(id, "controls") == 0) return tr("Controls");
    if (strcmp(id, "shortcuts") == 0) return tr("Shortcuts");
    if (strcmp(id, "about") == 0) return tr("Language / About");
    return id;
}

}
