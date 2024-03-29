<?php
/**
 * @file
 * datapublic_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer';
  $context->description = 'Footer blocks';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-new_tweets-block' => array(
          'module' => 'views',
          'delta' => 'new_tweets-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'follow-site' => array(
          'module' => 'follow',
          'delta' => 'site',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'boxes-newsletter_signup' => array(
          'module' => 'boxes',
          'delta' => 'newsletter_signup',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer blocks');
  t('Sitewide');
  $export['footer'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_search_block';
  $context->description = '';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  $export['header_search_block'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Homepage blocks';
  $context->tag = 'Homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-slideshow-block' => array(
          'module' => 'views',
          'delta' => 'slideshow-block',
          'region' => 'top_page',
          'weight' => '-10',
        ),
        'views-services-block' => array(
          'module' => 'views',
          'delta' => 'services-block',
          'region' => 'post_content1',
          'weight' => '-10',
        ),
        'views-press_releases-block_3' => array(
          'module' => 'views',
          'delta' => 'press_releases-block_3',
          'region' => 'post_content2',
          'weight' => '-10',
        ),
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'post_content2',
          'weight' => '-10',
        ),
      ),
    ),
    'includelibraries' => array(
      'library_name' => array(
        're_orbit:re_orbit' => 're_orbit:re_orbit',
      ),
      'library_debug' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage');
  t('Homepage blocks');
  $export['homepage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar_menu';
  $context->description = 'Sidebar menu block';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~datasets*' => '~datasets*',
        '~services' => '~services',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-most_popular_content-block_1' => array(
          'module' => 'views',
          'delta' => 'most_popular_content-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sidebar menu block');
  t('Sitewide');
  $export['sidebar_menu'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'translation_block';
  $context->description = 'Translation block';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('Translation block');
  $export['translation_block'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources';
  $context->description = '';
  $context->tag = 'Resources';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources' => 'resources',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-documents-block_1' => array(
          'module' => 'views',
          'delta' => 'documents-block_1',
          'region' => 'post_content1',
          'weight' => '-25',
        ),
        'views-datasets-block_2' => array(
          'module' => 'views',
          'delta' => 'datasets-block_2',
          'region' => 'post_content1',
          'weight' => '-24',
        ),
      ),
    ),
    'breadcrumb' => 'node/30',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resources');
  $export['resources'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media_room';
  $context->description = 'Media room page';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media-room' => 'media-room',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-press_releases-block_1' => array(
          'module' => 'views',
          'delta' => 'press_releases-block_1',
          'region' => 'post_content1',
          'weight' => '-10',
        ),
        'views-photo_gallery-block' => array(
          'module' => 'views',
          'delta' => 'photo_gallery-block',
          'region' => 'post_content2',
          'weight' => '-10',
        ),
        'views-videos-block' => array(
          'module' => 'views',
          'delta' => 'videos-block',
          'region' => 'post_content2',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media room page');
  t('Pages');
  $export['media_room'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'silverlight_blocks';
  $context->description = 'Silverlight Map Blocks';
  $context->tag = 'Silverlight';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        're_silverlight_map-re-silverlight-map-pages-block' => array(
          'module' => 're_silverlight_map',
          'delta' => 're-silverlight-map-pages-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        're_silverlight_map-re-silverlight-map-events-block' => array(
          'module' => 're_silverlight_map',
          'delta' => 're-silverlight-map-events-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Silverlight');
  t('Silverlight Map Blocks');
  $export['silverlight_blocks'] = $context;

  return $export;
}
