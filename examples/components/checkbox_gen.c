/**
 * @file checkbox_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "checkbox_gen.h"
#include "examples.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * checkbox_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_checkbox_0 = lv_checkbox_create(parent);

    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_checkbox_0, "checkbox_#");

    return lv_checkbox_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

