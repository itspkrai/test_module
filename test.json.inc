<?php
/**
 * @file
 * Contains page callback for page_json.
 */

/**
 *
 */
 function test_json_data($node) {
 // Return json_format data.
 return drupal_json_output($node);
 }