
@interface WBSWebExtensionDeclarativeNetRequestSQLiteStore : WBSWebExtensionSQLiteStore {
    NSString * _storageType;
    NSString * _tableName;
}

- (void).cxx_destruct;
- (int)_createFreshDatabaseSchema;
- (int)_currentDatabaseSchemaVersion;
- (id)_databaseURL;
- (id)_getKeysAndValuesFromRowEnumerator:(id)arg1;
- (id)_getRulesWithOutErrorMessage:(id*)arg1;
- (id)_insertRule:(id)arg1 inDatabase:(id)arg2;
- (bool)_isDatabaseEmpty;
- (int)_resetDatabaseSchema;
- (void)addRules:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRules:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getRulesWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithComposedIdentifier:(id)arg1 profileServerID:(id)arg2 usesInMemoryDatabase:(bool)arg3;
- (void)updateRulesByRemovingIDs:(id)arg1 addRules:(id)arg2 completionHandler:(id /* block */)arg3;

@end
