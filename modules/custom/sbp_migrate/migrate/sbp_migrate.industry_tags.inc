<?php
/**
 * @file
 *  Taxonomy Industry Tags migration.
 */

class SBPMigrationTermIndustryTags extends SBPMigrationTerm {

  public function __construct($arguments) {
    $this->setProperties('industry_tags');
    parent::__construct($arguments);
    $this->description = t('Import Industry Tag terms.');
  }

  function csvcolumns() {
    $columns = parent::csvcolumns();
    return $columns;
  }

}