idf_component_register(
    SRCS "controller_can.c" "controller_uart.c" "waveshare_rgb_lcd_port.c" "main.c" "lvgl_port.c" "ring_buffer.c" "model.c" "esp_io_expander_ch422g.c" "esp_io_expander.c"
    INCLUDE_DIRS "." "./ui"
    REQUIRES driver)

add_subdirectory(ui)
target_link_libraries(${COMPONENT_LIB} PRIVATE ui)

idf_component_get_property(lvgl_lib lvgl__lvgl COMPONENT_LIB)
target_compile_options(${lvgl_lib} PRIVATE -Wno-format)
