
@interface WBSWebExtensionStorageAPISQLiteStore : WBSWebExtensionSQLiteStore <WBSWebExtensionStorageProtocol> {
    long long  _storageType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)_createFreshDatabaseSchema;
- (int)_currentDatabaseSchemaVersion;
- (id)_databaseURL;
- (id)_getAllKeysReturningErrorMessage:(id*)arg1;
- (id)_getKeysAndValuesFromRowEnumerator:(id)arg1;
- (id)_getValuesForAllKeysReturningErrorMessage:(id*)arg1;
- (id)_getValuesForKeys:(id)arg1 outErrorMessage:(id*)arg2;
- (id)_insertOrUpdateValue:(id)arg1 forKey:(id)arg2 inDatabase:(id)arg3;
- (bool)_isDatabaseEmpty;
- (int)_resetDatabaseSchema;
- (void)deleteDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)deleteValuesForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStorageSizeForAllKeysIncludingKeyedData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getStorageSizeForAllKeysWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)getStorageSizeForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getValuesForAllKeysWithCompletionHandler:(id /* block */)arg1;
- (void)getValuesForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initForTestingWithType:(long long)arg1 composedIdentifier:(id)arg2;
- (id)initWithType:(long long)arg1 composedIdentifier:(id)arg2 profileServerID:(id)arg3;
- (void)setKeyedData:(id)arg1 completionHandler:(id /* block */)arg2;

@end
