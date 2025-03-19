SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    screens/ui_Screen3.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_1850710409.c
    images/ui_img_239239933.c
    images/ui_img_1850708359.c)

add_library(ui ${SOURCES})
