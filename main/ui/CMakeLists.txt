SET(SOURCES screens/ui_Screen1.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    ui_to_if.c)

add_library(ui STATIC ${SOURCES})

target_include_directories(ui PUBLIC ${PROJECT_SOURCE_DIR}/components/lvgl__lvgl)
