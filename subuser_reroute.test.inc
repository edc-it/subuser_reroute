<?php

function subuser_reroute_form() {
  $form = array();
  
  $form['titlep'] = array(
    '#type' => 'textfield',
    '#title' => 'Title P',
  );
  $form['create'] = array(
    '#type' => 'submit',
    '#value' => t('Process Results'),
  );

  return $form;
}

function subuser_reroute_form_submit($form, $form_state) {
  dpm(_get_reroute_email($form_state['values']['titlep']));
}
