<?php

// Plugin definition
$plugin = array(
  'title' => t('Schemax three column'),
  'category' => t('Omega content layouts'),
  'icon' => 'threecol.png',
  'theme' => 'panels_threecol',
  'css' => '../../../css/layouts/threecol/threecol.layout.css',
  'regions' => array(
    'left' => t('Left side'),
    'middle' => t('Middle column'),
    'right' => t('Right side')
   ),
);
