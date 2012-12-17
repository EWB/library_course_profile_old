<?php
/**
 * @file
 * library_course_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function library_course_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_citation_guide_tab|node|base_course_profile|form';
  $field_group->group_name = 'group_course_citation_guide_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'base_course_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_picklist_tab';
  $field_group->data = array(
    'label' => 'Citation Guides',
    'weight' => '11',
    'children' => array(
      0 => 'field_course_citation_guide',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_citation_guide_tab|node|base_course_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_citation_guide_tab|node|base_course_profile|full';
  $field_group->group_name = 'group_course_citation_guide_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'base_course_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_course_picklist_tab';
  $field_group->data = array(
    'label' => 'Citation Guides',
    'weight' => '11',
    'children' => array(
      0 => 'field_course_citation_guide',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_citation_guide_tab|node|base_course_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_db_tab|node|base_course_profile|form';
  $field_group->group_name = 'group_course_db_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'base_course_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_picklist_tab';
  $field_group->data = array(
    'label' => 'Databases',
    'weight' => '10',
    'children' => array(
      0 => 'field_coures_databases',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_db_tab|node|base_course_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_db_tab|node|base_course_profile|full';
  $field_group->group_name = 'group_course_db_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'base_course_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_course_picklist_tab';
  $field_group->data = array(
    'label' => 'Databases',
    'weight' => '10',
    'children' => array(
      0 => 'field_coures_databases',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_db_tab|node|base_course_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_picklist_tab|node|base_course_profile|form';
  $field_group->group_name = 'group_course_picklist_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'base_course_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '5',
    'children' => array(
      0 => 'group_course_citation_guide_tab',
      1 => 'group_course_db_tab',
      2 => 'group_course_readings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_course_picklist_tab|node|base_course_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_picklist_tab|node|base_course_profile|full';
  $field_group->group_name = 'group_course_picklist_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'base_course_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '5',
    'children' => array(
      0 => 'group_course_citation_guide_tab',
      1 => 'group_course_db_tab',
      2 => 'group_course_readings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_course_picklist_tab|node|base_course_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_readings|node|base_course_profile|form';
  $field_group->group_name = 'group_course_readings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'base_course_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_picklist_tab';
  $field_group->data = array(
    'label' => 'Readings',
    'weight' => '9',
    'children' => array(
      0 => 'field_course_readings',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_readings|node|base_course_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_readings|node|base_course_profile|full';
  $field_group->group_name = 'group_course_readings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'base_course_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_course_picklist_tab';
  $field_group->data = array(
    'label' => 'Readings',
    'weight' => '9',
    'children' => array(
      0 => 'field_course_readings',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_readings|node|base_course_profile|full'] = $field_group;

  return $export;
}
