CREATE TABLE `cuf_profile` (
  `guid` INT(10) UNSIGNED NOT NULL,
  `name` VARCHAR(128) NOT NULL,
  `data` TINYBLOB,
  PRIMARY KEY (`guid`,`name`)
) ENGINE=INNODB DEFAULT CHARSET=utf8;