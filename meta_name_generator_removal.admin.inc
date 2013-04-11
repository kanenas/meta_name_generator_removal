<?php
/**
 * @file
 *   Provide the admin related functions for the Meta Name Generator Removal module.
 */

/**
 * Menu Callback; Allows admins to Remove or Restore the html meta tag name generator.
 */

/*************************************
 * Defining The System Settings Form
 ************************************/
function meta_name_generator_removal_admin_settings_form() {
  $form = array();
  $form['meta_name_generator_removal_types'] = array(
    '#title' => t('Remove the html meta tag name generator'),
    '#description' => t('Allows a user with permissions (administrator) to remove or restore the meta tag generator &lt;meta name="Generator" content="Drupal 7 (http://drupal.org)"/&gt;'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('meta_name_generator_removal_default_status', 1),
  );
  return system_settings_form($form);
}
