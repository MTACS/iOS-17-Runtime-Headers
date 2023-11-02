
@interface WBSWebExtensionRegisteredContentScriptsSQLiteStore : WBSWebExtensionSQLiteStore

- (int)_createFreshDatabaseSchema;
- (int)_currentDatabaseSchemaVersion;
- (id)_databaseURL;
- (id)_getKeysAndValuesFromRowEnumerator:(id)arg1;
- (id)_getScriptsWithOutErrorMessage:(id*)arg1;
- (void)_insertScript:(id)arg1 inDatabase:(id)arg2 errorMessage:(id*)arg3;
- (bool)_isDatabaseEmpty;
- (int)_resetDatabaseSchema;
- (void)addScripts:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteScripts:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getRegisteredContentScriptsFromStorageWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithComposedIdentifier:(id)arg1 profileServerID:(id)arg2 usesInMemoryDatabase:(bool)arg3;
- (void)updateRegisteredContentScriptsInStorageByRemovingIDs:(id)arg1 addScripts:(id)arg2 completionHandler:(id /* block */)arg3;

@end
