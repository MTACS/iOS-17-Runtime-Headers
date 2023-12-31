
@interface ACDKeychainManager : NSObject

+ (void)_accountTypeIdentifierFromComponents:(id)arg1 handler:(id /* block */)arg2;
+ (void)_createNoSyncOAuthTokens:(id)arg1 account:(id)arg2 clientID:(id)arg3;
+ (id)_credentialForAccountWithID:(id)arg1 accountTypeID:(id)arg2 credentialType:(id)arg3 clientID:(id)arg4 allowAdditionalAccountTypeSegment:(bool)arg5 options:(id)arg6 error:(id*)arg7;
+ (void)_fallbackToUnsyncedOAuthTokens:(id)arg1;
+ (id)_fetchOptionsForAccount:(id)arg1;
+ (id)_itemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (void)_keychainLock_addItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(bool)arg6 requiresTouchID:(bool)arg7 error:(id*)arg8;
+ (bool)_keychainLock_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (void)_keychainLock_updateItem:(id)arg1 existingPassword:(id)arg2 forServiceName:(id)arg3 username:(id)arg4 accessGroup:(id)arg5 accessibility:(id)arg6 options:(id)arg7 error:(id*)arg8;
+ (void)_migrateCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3;
+ (bool)_removeCredentialItemWithKey:(id)arg1 forAccountWithID:(id)arg2 username:(id)arg3 accountTypeID:(id)arg4 clientID:(id)arg5 options:(id)arg6 error:(id*)arg7;
+ (void)_removeCredentialsForAccount:(id)arg1 clientID:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (bool)_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (void)_saveCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 error:(id*)arg4;
+ (void)_setCredentialForAccount:(id)arg1 clientID:(id)arg2 handleCredentialItemRemovals:(bool)arg3 error:(id*)arg4;
+ (void)_setItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(bool)arg6 requiresTouchID:(bool)arg7 options:(id)arg8 error:(id*)arg9;
+ (void)_setNonPersistentCredentialTimerForAccount:(id)arg1;
+ (bool)_shouldSyncCredentialForAccount:(id)arg1;
+ (bool)accountSyncMigrated;
+ (id)accountSynciOSVersion;
+ (void)componentsFromKeychainServiceName:(id)arg1 handler:(id /* block */)arg2;
+ (bool)createAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id*)arg4;
+ (bool)createAccountSyncMigratedItemWithError:(id*)arg1;
+ (void)createDataclassAccountSyncItemForAccount:(id)arg1 withDataclassActions:(id)arg2;
+ (id)credentialForAccount:(id)arg1 clientID:(id)arg2;
+ (id)credentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (id)credentialForManagedAccountObject:(id)arg1;
+ (id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2;
+ (id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)initialize;
+ (id)keychainAccounts;
+ (id)keychainDeletedAccounts;
+ (id)keychainDeletedContactAccounts;
+ (id)keychainDeletedHostnameAccounts;
+ (id)keychainHostnameAccounts;
+ (id)keychainServiceNameForClientID:(id)arg1 accountTypeIdentifier:(id)arg2 additionalAccountTypeSegment:(id)arg3 key:(id)arg4;
+ (void)notifiyCredentialChangedForAccount:(id)arg1;
+ (bool)removeAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id*)arg4;
+ (void)removeCredentialForAccount:(id)arg1;
+ (void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2;
+ (void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)removeCredentialForAccount:(id)arg1 error:(id*)arg2;
+ (void)removeCredentialForAccount:(id)arg1 key:(id)arg2 error:(id*)arg3;
+ (void)removeDataclassAccountSyncItemForAccount:(id)arg1;
+ (void)removeTombstoneForService:(id)arg1 keychainAccountIdentifier:(id)arg2;
+ (id)removeTombstonesForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (id)server;
+ (void)setAccountSynciOSVersion:(id)arg1;
+ (void)setCredentialForAccount:(id)arg1;
+ (void)setCredentialForAccount:(id)arg1 clientID:(id)arg2;
+ (void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)setCredentialForAccount:(id)arg1 error:(id*)arg2;
+ (void)setCredentialForNewAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)setServer:(id)arg1;

@end
