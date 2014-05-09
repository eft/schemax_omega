<?php

/**
 * @file
 * Contains a pre-process hook for 'node'.
 */

/**
 * Implements hook_preprocess_TEMPLATE().
 */
function schemax_omega_preprocess_node(&$variables) {
  $node = $variables['node'];

//  kpr($variables['title']);

  $date = format_date($variables['created'], 'long');

  $variables['submitted'] = t('@date | <strong>Author:</strong> !author', array('@date' => $date, '!author' => $variables['name']));

  $variables['created_year'] = format_date($node->created,'custom','Y');
  $variables['created_month'] = format_date($node->created,'custom','M');
  $variables['created_day'] = format_date($node->created,'custom','j');


}
