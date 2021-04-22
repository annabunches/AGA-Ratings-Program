/*
 * Description: 
 * - Example db_passwords.h file for configuration of the usgo_agagd database.
 */

#include <cstdlib>

/* Database for the usgo_agagd. */
const char * usgo_agagd_database	= std::getenv("AGAGD_DB");
const char * usgo_agagd_server		= std::getenv("AGAGD_HOST");

/* Read / Write user for the usgo_agagd database. */
const char * usgo_agagd_user		= std::getenv("AGAGD_USER");
const char * usgo_agagd_password 	= std::getenv("AGAGD_PASSWORD");

/* Ratings Lookup database. */
const char * ratings_database	= std::getenv("RATINGS_DB");
const char * ratings_server	= std::getenv("RATINGS_HOST");

/* Ratings Lookup Read / Write database user. */
const char * ratings_user	= std::getenv("RATINGS_USER");
const char * ratings_password	= std::getenv("RATINGS_PASSWORD");

/* Member's database connection information. */
const char * members_database	= ratings_database;
const char * members_server	= ratings_server;
const char * members_user	= ratings_user;
const char * members_password	= ratings_password;
