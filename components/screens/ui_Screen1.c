// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_temperature = lv_img_create(ui_Screen1);
lv_img_set_src(ui_temperature, &ui_img_1850710409);
lv_obj_set_width( ui_temperature, LV_SIZE_CONTENT);  /// 280
lv_obj_set_height( ui_temperature, LV_SIZE_CONTENT);   /// 240
lv_obj_set_x( ui_temperature, 153 );
lv_obj_set_y( ui_temperature, 0 );
lv_obj_set_align( ui_temperature, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_temperature, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_temperature, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_temperature,200);

ui_Label1 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label1, 38);
lv_obj_set_height( ui_Label1, 45);
lv_obj_set_x( ui_Label1, 174 );
lv_obj_set_y( ui_Label1, -55 );
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"0 °c");
lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x46B7D5), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label2 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label2, 56);
lv_obj_set_height( ui_Label2, 55);
lv_obj_set_x( ui_Label2, 0 );
lv_obj_set_y( ui_Label2, -149 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"42 v");
lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x40A6C1), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Arc1 = lv_arc_create(ui_Screen1);
lv_obj_set_width( ui_Arc1, 227);
lv_obj_set_height( ui_Arc1, 226);
lv_obj_set_align( ui_Arc1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Arc1, LV_OBJ_FLAG_CLICKABLE );    /// Flags
lv_arc_set_value(ui_Arc1, 50);
lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x152023), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0x0A7082), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x40A6C1), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Arc1, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Bar2 = lv_bar_create(ui_Screen1);
lv_bar_set_value(ui_Bar2,25,LV_ANIM_OFF);
lv_bar_set_start_value(ui_Bar2, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_Bar2, 13);
lv_obj_set_height( ui_Bar2, 112);
lv_obj_set_x( ui_Bar2, 159 );
lv_obj_set_y( ui_Bar2, -6 );
lv_obj_set_align( ui_Bar2, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_Bar2, lv_color_hex(0x152023), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Bar2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Bar2, lv_color_hex(0x46B7D5), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Bar2, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

ui_Label3 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label3, lv_pct(14));
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 30
lv_obj_set_align( ui_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label3,"0.00%");
lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x50AAC2), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label4 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label4, 0 );
lv_obj_set_y( ui_Label4, 152 );
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"Remaining time");
lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x175160), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label5 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label5, 0 );
lv_obj_set_y( ui_Label5, 128 );
lv_obj_set_align( ui_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label5,"00h00");
lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x45B4D1), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

}
