<?php
/**
 * @file
 * feature_room.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function feature_room_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'ckeckout_flexslider';
  $preset->title = 'checkout-flexslider';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'pay_reserved_full';
  $preset->imagestyle_thumbnail = 'pay_reserved_full';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 0,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '0',
    'maxItems' => '0',
    'move' => '0',
    'animation' => 'fade',
    'slideshow' => 0,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '0',
    'prevText' => '',
    'nextText' => '',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 1,
    'pauseOnAction' => 0,
    'pauseOnHover' => 0,
    'manualControls' => '',
  );
  $export['ckeckout_flexslider'] = $preset;

  return $export;
}
