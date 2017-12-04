<?php
/**
 * Created by PhpStorm.
 * User: charlie
 * Date: 12/4/17
 * Time: 12:04 p.m.
 */

/**
 * SmugMug settings form
 * @param $form_state
 * @return array
 */
function etype_smugmug_admin_form($form, &$form_state) {

    $form['etype_smugmug_user'] = [
        '#title' => t('Smugmug User'),
        '#type' => 'textfield',
        '#default_value' => variable_get('etype_smugmug_user'),
    ];

    $form['etype_smugmug_apikey'] = [
        '#title' => t('Smugmug API Key'),
        '#type' => 'textfield',
        '#default_value' => variable_get('etype_smugmug_apikey'),
    ];

    $form['etype_smugmug_appname'] = [
        '#title' => t('Smugmug App Name'),
        '#type' => 'textfield',
        '#default_value' => variable_get('etype_smugmug_appname'),
    ];

    return system_settings_form($form);;

}
