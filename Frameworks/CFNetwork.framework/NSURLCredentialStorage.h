
@interface NSURLCredentialStorage : NSObject {
    NSURLCredentialStorageInternal * _internal;
}

@property (nonatomic) bool _useSystemKeychain;
@property (readonly, copy) NSDictionary *allCredentials;
@property (nonatomic, readonly) NSArray *safari_allGeneratedPasswordItems;
@property (nonatomic, readonly) NSArray *safari_allPasswordCredentialItemsInPersonalKeychain;
@property (nonatomic, readonly) NSArray *safari_allPersonalSidecarsInPersonalKeychain;
@property (nonatomic, readonly) NSArray *safari_allRecentlyDeletedPasskeyCredentialItemsInPersonalKeychain;
@property (nonatomic, readonly) NSArray *safari_allRecentlyDeletedPasswordCredentialItemsInPersonalKeychain;
@property (nonatomic, readonly) NSArray *safari_allRecentlyDeletedPersonalSidecarsInPersonalKeychain;
@property (nonatomic, readonly) NSDictionary *safari_allSafariCredentials;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)sharedCredentialStorage;

- (struct _CFURLCredentialStorage { }*)_CFURLCredentialStorage;
- (id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(bool)arg2;
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage { }*)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(bool)arg2;
- (bool)_useSystemKeychain;
- (id)allCredentials;
- (id)credentialsForProtectionSpace:(id)arg1;
- (void)dealloc;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)set_useSystemKeychain:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_test_addTestingPasskeyItemWithCredentialID:(id)arg1 groupID:(id)arg2;
+ (void)safari_test_purgeKeychainItemsFromTestingAccessGroups;
+ (bool)safari_test_saveCredential:(id)arg1 withArbitraryProtectionSpace:(id)arg2;
+ (void)safari_test_setUseTestingAccessGroups:(bool)arg1;

- (id)_formattedLabelWithHost:(id)arg1 user:(id)arg2;
- (id)_safari_accountStringForGeneratedPassword;
- (void)_safari_addKeychainItem:(id)arg1 ofType:(long long)arg2 toSidecarDictionary:(id)arg3;
- (id)_safari_allCredentialItemsOfType:(long long)arg1 groupID:(id)arg2 fromRecentlyDeleted:(bool)arg3;
- (id)_safari_allPersonalSidecarEntriesInPersonalKeychain;
- (id)_safari_allRecentlyDeletedPersonalSidecarEntriesInPersonalKeychain;
- (id)_safari_allRecentlyDeletedPersonalSidecarItemsInGroupWithID:(id)arg1;
- (id)_safari_allRecentlyDeletedPersonalSidecarItemsInPersonalKeychain;
- (id)_safari_allRecentlyDeletedSharedSidecarItemsInGroupWithID:(id)arg1;
- (id)_safari_allSidecarItemsOfType:(long long)arg1 groupID:(id)arg2 fromRecentlyDeleted:(bool)arg3;
- (bool)_safari_copyPersonalSidecar:(id)arg1 fromGroupWithID:(id)arg2 toGroupWithID:(id)arg3;
- (bool)_safari_copyPersonalSidecarFromPersonalKeychainToSharedPersonalAccessGroup:(id)arg1 forGroupWithID:(id)arg2;
- (bool)_safari_copyPersonalSidecarFromSharedPersonalAccessGroupToPersonalKeychain:(id)arg1;
- (bool)_safari_copyPersonalSidecarFromSharedPersonalAccessGroupToPersonalKeychain:(id)arg1 withNewUsername:(id)arg2;
- (bool)_safari_copySharedSidecar:(id)arg1 fromGroupWithID:(id)arg2 toGroupWithID:(id)arg3;
- (id)_safari_dataFromGeneratedPasswordDictionary:(id)arg1 domain:(id)arg2;
- (id)_safari_dataFromSidecarDictionary:(id)arg1 user:(id)arg2 domain:(id)arg3;
- (bool)_safari_deleteAllPasskeyCredentialsForGroupID:(id)arg1;
- (bool)_safari_deleteAllPasswordCredentialsForGroupID:(id)arg1;
- (bool)_safari_deleteAllPersonalSidecarsForGroupID:(id)arg1;
- (bool)_safari_deleteAllRecentlyDeletedPasskeyCredentialsForGroupID:(id)arg1;
- (bool)_safari_deleteAllRecentlyDeletedPasswordCredentialsForGroupID:(id)arg1;
- (bool)_safari_deleteAllRecentlyDeletedPersonalSidecarsForGroupID:(id)arg1;
- (bool)_safari_deleteAllRecentlyDeletedSharedSidecarsForGroupID:(id)arg1;
- (bool)_safari_deleteAllSharedSidecarsForGroupID:(id)arg1;
- (id)_safari_getCredentialItemFromKeychainForPasskeyInSavedAccount:(id)arg1;
- (id)_safari_getCredentialItemsFromKeychainForPasswordInSavedAccount:(id)arg1;
- (id)_safari_getKeychainItemForSidecar:(id)arg1 ofType:(long long)arg2 groupID:(id)arg3 fromRecentlyDeleted:(bool)arg4;
- (id)_safari_getSidecarKeychainItemsByTypeForPasskeyOnSavedAccount:(id)arg1;
- (id)_safari_getSidecarKeychainItemsByTypeForPasswordOnSavedAccount:(id)arg1;
- (id)_safari_lastModifiedDateForPasskeyCredentialOnSavedAccount:(id)arg1;
- (id)_safari_lastModifiedDateForPasswordCredentialsOnSavedAccount:(id)arg1;
- (void)_safari_migrateKeychainItemsWithInvalidAuthenticationTypes;
- (bool)_safari_moveKeychainItemsWithPersistentIdentifiers:(id)arg1 toAccessGroup:(id)arg2;
- (bool)_safari_movePasskeyCredentialFromSavedAccountToRecentlyDeleted:(id)arg1;
- (bool)_safari_movePasskeySidecarsFromSavedAccountToRecentlyDeleted:(id)arg1;
- (bool)_safari_movePasswordCredentialsFromSavedAccountToRecentlyDeleted:(id)arg1;
- (bool)_safari_movePasswordSidecarsFromSavedAccountToRecentlyDeleted:(id)arg1;
- (bool)_safari_moveSidecarItemsByTypeToRecentlyDeleted:(id)arg1 savedAccount:(id)arg2;
- (id)_safari_protectionSpaceFromKeychainDictionary:(id)arg1;
- (bool)_safari_recoverPasskeyCredentialFromRecentlyDeletedSavedAccount:(id)arg1;
- (bool)_safari_recoverPasskeySidecarsFromRecentlyDeletedSavedAccount:(id)arg1;
- (bool)_safari_recoverPasswordCredentialsFromRecentlyDeletedSavedAccount:(id)arg1;
- (bool)_safari_recoverPasswordSidecarsFromRecentlyDeletedSavedAccount:(id)arg1;
- (bool)_safari_recoverSidecarItemsByType:(id)arg1 forRecentlyDeletedSavedAccount:(id)arg2;
- (bool)_safari_removeDefaultCommentFromKeychainItemsMatchingQuery:(id)arg1;
- (void)_safari_setSidecarDictionary:(id)arg1 type:(unsigned long long)arg2 credential:(id)arg3 htmlFormProtectionSpace:(id)arg4 groupID:(id)arg5 fromRecentlyDeleted:(bool)arg6;
- (id)_safari_sidecarDictionaryFromData:(id)arg1 user:(id)arg2 domain:(id)arg3;
- (id)safari_addGeneratedPassword:(id)arg1 forProtectionSpace:(id)arg2 wasGeneratedInPrivateBrowsingSession:(bool)arg3;
- (id)safari_allGeneratedPasswordItems;
- (id)safari_allPasswordCredentialItemsFromGroupID:(id)arg1;
- (id)safari_allPasswordCredentialItemsInPersonalKeychain;
- (id)safari_allPersonalSidecarsForGroupID:(id)arg1 fromRecentlyDeleted:(bool)arg2;
- (id)safari_allPersonalSidecarsInPersonalKeychain;
- (id)safari_allRecentlyDeletedPasskeyCredentialItemsInGroupWithID:(id)arg1;
- (id)safari_allRecentlyDeletedPasskeyCredentialItemsInPersonalKeychain;
- (id)safari_allRecentlyDeletedPasswordCredentialItemsInGroupWithID:(id)arg1;
- (id)safari_allRecentlyDeletedPasswordCredentialItemsInPersonalKeychain;
- (id)safari_allRecentlyDeletedPersonalSidecarsInPersonalKeychain;
- (id)safari_allSafariCredentials;
- (id)safari_allSharedSidecarsForGroupID:(id)arg1 fromRecentlyDeleted:(bool)arg2;
- (bool)safari_copySavedAccountWithPasskey:(id)arg1 toGroupWithID:(id)arg2;
- (bool)safari_copySavedAccountWithPasskeyToPersonalKeychain:(id)arg1;
- (bool)safari_copySavedAccountWithPassword:(id)arg1 toGroupWithID:(id)arg2;
- (bool)safari_copySavedAccountWithPasswordToPersonalKeychain:(id)arg1;
- (bool)safari_copySavedAccountWithPasswordToPersonalKeychain:(id)arg1 withNewUsername:(id)arg2;
- (void)safari_deleteAllGeneratedPasswords;
- (bool)safari_deleteAllItemsForGroupID:(id)arg1;
- (void)safari_deleteCredentialWithEmptyServerHostForUser:(id)arg1 forHTMLFormProtectionSpace:(id)arg2 forGroupID:(id)arg3 fromRecentlyDeleted:(bool)arg4;
- (void)safari_deleteGeneratedPassword:(id)arg1;
- (void)safari_deletePasskeyFromSavedAccount:(id)arg1 groupID:(id)arg2;
- (void)safari_deletePasswordCredentialForUser:(id)arg1 forHTMLFormProtectionSpace:(id)arg2 forGroupID:(id)arg3 fromRecentlyDeleted:(bool)arg4;
- (void)safari_deleteSidecarOfType:(long long)arg1 forUser:(id)arg2 htmlFormProtectionSpace:(id)arg3 forGroupID:(id)arg4 fromRecentlyDeleted:(bool)arg5;
- (void)safari_migrateKeychainItemsWithInvalidAuthenticationTypesWithCompletionHandler:(id /* block */)arg1;
- (id)safari_mostRecentLastModifiedDateForCredentialsOnSavedAccount:(id)arg1;
- (bool)safari_moveCredentialTypesToRecentlyDeleted:(long long)arg1 onSavedAccount:(id)arg2;
- (bool)safari_recoverSavedAccountFromRecentlyDeleted:(id)arg1;
- (bool)safari_setCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2 forGroupID:(id)arg3;
- (void)safari_setDefaultCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;
- (void)safari_setSidecar:(id)arg1 credential:(id)arg2 htmlFormProtectionSpace:(id)arg3 forGroupID:(id)arg4 fromRecentlyDeleted:(bool)arg5;
- (id)safari_updateGeneratedPassword:(id)arg1 withPassword:(id)arg2;

@end
