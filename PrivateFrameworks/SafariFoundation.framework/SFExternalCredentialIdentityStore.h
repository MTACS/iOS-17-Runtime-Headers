
@interface SFExternalCredentialIdentityStore : WBSSQLiteStore {
    NSObject<OS_dispatch_queue> * _queue;
    WBSSQLiteStatementCache * _statements;
}

- (void).cxx_destruct;
- (int)_createFreshDatabaseSchema;
- (id)_credentialIdentityFromRow:(id)arg1;
- (int)_currentSchemaVersion;
- (void)_databaseWillClose;
- (id)_fetchCredentialIdentities;
- (id)_fetchCredentialIdentitiesMatchingDomains:(id)arg1 credentialIdentityType:(id)arg2;
- (id)_fetchCredentialIdentitiesWithType:(long long)arg1;
- (bool)_fetchStoreIsEmpty;
- (int)_insertCredentialIdentity:(id)arg1;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (int)_removeAllCredentialIdentities;
- (int)_removeCredentialIdentities:(id)arg1;
- (int)_removeCredentialIdentity:(id)arg1;
- (int)_saveCredentialIdentities:(id)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (int)_updateCredentialIdentity:(id)arg1;
- (int)_vacuum;
- (void)fetchAllPasskeyCredentialIdentitiesWithCompletion:(id /* block */)arg1;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCredentialIdentitiesWithCompletion:(id /* block */)arg1;
- (void)fetchPasskeyCredentialIdentitiesMatchingDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchStoreEmptyStateWithCompletion:(id /* block */)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 protectionType:(long long)arg2;
- (void)openAndCheckIntegrity:(bool)arg1 createIfNeeded:(bool)arg2 fallBackToMemoryStoreIfError:(bool)arg3 lockingPolicy:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)arg1;
- (void)removeCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)saveCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;

@end
