
@interface WBSTouchIconCacheSettingsSQLiteStore : WBSSiteMetadataImageCacheSettingsSQLiteStore

+ (Class)cacheSettingsEntryClass;
+ (long long)databaseSchemaVersion;

- (id)_createNewDatabaseSQLiteStatement;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)arg1;
- (id)_insertEntrySQLiteStatementWithEntry:(id)arg1;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:(id)arg1;
- (id)_statementsForMigrationToSchemaVersion:(long long)arg1;
- (id)_updateEntrySQLiteStatementWithEntry:(id)arg1;

@end
