<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function mm_rotator_imagecache_default_presets() {
  $items = array(
    'mm_rotator' => array(
      'presetname' => 'mm_rotator',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '700',
            'height' => '400',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function mm_rotator_node_info() {
  $items = array(
    'rotator_item' => array(
      'name' => t('Rotator Item'),
      'module' => 'features',
      'description' => t('An item that goes into the rotator.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function mm_rotator_views_api() {
  return array(
    'api' => '2',
  );
}
