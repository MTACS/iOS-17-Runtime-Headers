
@interface ACAccountStore : NSObject <HMDACAccountStore> {
    ACNotifyAccountCache * __primaryAppleAccountCache;
    ACAccountStoreCache * __testCache;
    NSMutableDictionary * _accountCache;
    NSMutableDictionary * _accountsWithAccountTypeCache;
    id  _daemonAccountStoreDidChangeObserver;
    NSString * _effectiveBundleID;
    NSXPCListenerEndpoint * _endpoint;
    ACRemoteAccountStoreSession * _longLivedRemoteAccountStoreSession;
    ACTimedExpirer * _longLivedRemoteAccountStoreSessionExpirer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _longLivedRemoteAccountStoreSessionLock;
    ACRemoteAccountStoreSession * _remoteAccountStoreSession;
    ACTimedExpirer * _remoteAccountStoreSessionExpirer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _remoteAccountStoreSessionLock;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) ACAccount *_ams_localiTunesAccount;
@property (retain) ACNotifyAccountCache *_primaryAppleAccountCache;
@property (retain) ACAccountStoreCache *_testCache;
@property (nonatomic, readonly) NSArray *accounts;
@property (getter=ams_isActiveAccountCombined, nonatomic, readonly) bool ams_activeAccountCombined;
@property (nonatomic, readonly) ACAccount *ams_activeiCloudAccount;
@property (nonatomic, readonly) ACAccount *ams_activeiTunesAccount;
@property (nonatomic, readonly) NSArray *ams_alliTunesAccounts;
@property (nonatomic, readonly) NSArray *ams_iTunesAccounts;
@property (nonatomic, readonly) NSArray *ams_iTunesAccountsWithHomeUserIdentifiers;
@property (nonatomic, readonly) NSString *ams_mediaType;
@property (readonly) <ACRemoteAccountStoreSessionDelegate> *connectionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *ds_deviceOwnerEmails;
@property (nonatomic, readonly, copy) NSSet *ds_deviceOwnerPhoneNumbers;
@property (readonly) NSString *effectiveBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) ACAccount *hmd_ams_activeiTunesAccount;
@property (setter=ic_setActiveLockerAccount:, nonatomic, retain) ACAccount *ic_activeLockerAccount;
@property (setter=ic_setActiveStoreAccount:, nonatomic, retain) ACAccount *ic_activeStoreAccount;
@property (nonatomic, readonly, copy) NSArray *ic_allStoreAccounts;
@property (nonatomic, readonly) ACAccount *ic_primaryAppleAccount;
@property (nonatomic, readonly) ACRemoteAccountStoreSession *longLivedRemoteAccountStoreSession;
@property (nonatomic, readonly) ACRemoteAccountStoreSession *remoteAccountStoreSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *replyQueue;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

+ (id)_obsoleteAccountTypeIDsToRemove;
+ (void)_setConnectionTimeout:(unsigned long long)arg1;
+ (void)_setDefaultStore:(id)arg1;
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
+ (bool)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
+ (id)defaultStore;

- (void).cxx_destruct;
- (id)_cache;
- (void)_checkSaveRateLimitForAccountType:(id)arg1;
- (void)_clearAccountCaches;
- (id)_connectionFailureError;
- (id)_createSMTPAccountForServerAccount:(id)arg1;
- (id)_primaryAppleAccountCache;
- (void)_removeObsoleteAccountsInternal:(id)arg1 completion:(id /* block */)arg2;
- (id)_removeObsoleteOSXServerAccountForMacOS:(id)arg1;
- (void)_removeObsoleteOSXServerAccountForiOS:(id)arg1;
- (id)_sanitizeOptionsDictionary:(id)arg1;
- (void)_saveAccount:(id)arg1 verify:(bool)arg2 dataclassActions:(id)arg3 completion:(id /* block */)arg4;
- (id)_testCache;
- (id)_unsanitizeError:(id)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)accountWithIdentifier:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)accountWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)accounts;
- (void)accountsOfTypeID:(id)arg1 customProperty:(id)arg2 value:(id)arg3 cacheSuffix:(id)arg4 completion:(id /* block */)arg5;
- (id)accountsOfTypeID:(id)arg1 customProperty:(id)arg2 value:(id)arg3 cacheSuffix:(id)arg4 error:(id*)arg5;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(id /* block */)arg2;
- (void)accountsOnPairedDeviceWithAccountTypes:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)accountsWithAccountType:(id)arg1;
- (void)accountsWithAccountType:(id)arg1 completion:(id /* block */)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 error:(id*)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(id /* block */)arg3;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 error:(id*)arg3;
- (bool)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)allAccountTypes;
- (id)allCredentialItems;
- (id)allDataclasses;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)cachedAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)cachedAccountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 error:(id*)arg2;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)clientTokenForAccount:(id)arg1;
- (id)connectionDelegate;
- (id)credentialForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1 error:(id*)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id*)arg3;
- (id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1 error:(id*)arg2;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)disconnectFromRemoteAccountStore;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)effectiveBundleID;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1 error:(id*)arg2;
- (unsigned long long)generationForCacheSuffix:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (void)handleURL:(id)arg1;
- (bool)hasAccountWithDescription:(id)arg1;
- (id)init;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)insertCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1 error:(id*)arg2;
- (bool)isPushSupportedForAccount:(id)arg1;
- (bool)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id /* block */)arg2;
- (id)longLivedRemoteAccountStoreSession;
- (void)migrateCredentialForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withOptions:(id)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1;
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1 withOptions:(id)arg2;
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(id /* block */)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(bool)arg4 completion:(id /* block */)arg5;
- (id)parentAccountForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1 error:(id*)arg2;
- (bool)permissionForAccountType:(id)arg1;
- (void)preloadDataclassOwnersWithCompletion:(id /* block */)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1 error:(id*)arg2;
- (id)remoteAccountStoreSession;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAccount:(id)arg1 withDeleteSync:(bool)arg2 completion:(id /* block */)arg3;
- (void)removeAccountFromPairedDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeAccountFromPairedDevice:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeAccountsFromPairedDeviceWithCompletion:(id /* block */)arg1;
- (void)removeAccountsFromPairedDeviceWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)removeCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeObsoleteAccounts:(id /* block */)arg1;
- (void)renewCredentialsForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)renewCredentialsForAccount:(id)arg1 force:(bool)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id /* block */)arg3;
- (id)replyQueue;
- (void)reportTelemetryForLandmarkEvent:(id /* block */)arg1;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resetDatabaseToVersion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)runAccountMigrationPlugins:(id /* block */)arg1;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id /* block */)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(bool)arg3 completion:(id /* block */)arg4;
- (void)saveCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)saveVerifiedAccount:(id)arg1 error:(id*)arg2;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)scheduleBackupIfNonexistent:(id /* block */)arg1;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id*)arg4;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setPermissionGranted:(bool)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (void)set_primaryAppleAccountCache:(id)arg1;
- (void)set_testCache:(id)arg1;
- (void)shutdownAccountsD:(id /* block */)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (bool)triggerKeychainMigrationIfNecessary:(id*)arg1;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id /* block */)arg2;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (void)cls_getEligibleAccount:(id*)arg1 isDataSeparated:(bool*)arg2 personaUniqueIdentifier:(id*)arg3;
+ (bool)cls_hasEligibleAccount;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (bool)SLDuplicateAccountExistsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 andAccountPropertyIDKey:(id)arg3;

- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(bool)arg2 completion:(id /* block */)arg3;
- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(bool)arg2 delegateClassName:(id)arg3 completion:(id /* block */)arg4;
- (void)sl_openGoogleAuthenticationSheetWithAccountDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithAccountDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithUsername:(id)arg1 accountDescription:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)aa_accountsEnabledForDataclass:(id)arg1;
- (id)aa_accountsForAccountClass:(id)arg1;
- (id)aa_appleAccountType;
- (id)aa_appleAccountWithAltDSID:(id)arg1;
- (id)aa_appleAccountWithPersonID:(id)arg1;
- (id)aa_appleAccountWithUsername:(id)arg1;
- (id)aa_appleAccounts;
- (void)aa_appleAccountsWithCompletion:(id /* block */)arg1;
- (id)aa_appleAccountsWithError:(id*)arg1;
- (id)aa_authKitAccountForAltDSID:(id)arg1;
- (id)aa_dataSeparatedAccounts;
- (id)aa_grandSlamAccountForAltDSID:(id)arg1;
- (id)aa_grandSlamAccountForiCloudAccount:(id)arg1;
- (bool)aa_isUsingiCloud;
- (void)aa_loginAndUpdateiCloudAccount:(id)arg1 delegateParams:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)aa_loginAndUpdateiCloudAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)aa_primaryAppleAccount;
- (void)aa_primaryAppleAccountWithCompletion:(id /* block */)arg1;
- (id)aa_primaryAppleAccountWithPreloadedDataclasses;
- (id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1;
- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(id /* block */)arg2;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)accountWithAppleID:(id)arg1;
- (id)accountsWithAccountType:(id)arg1 appleID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication

- (id)_primaryiCloudAccount;
- (id)aida_AppleIDAuthenticationAccountType;
- (id)aida_AppleIDAuthenticationAccounts;
- (id)aida_accountForAltDSID:(id)arg1;
- (id)aida_accountForPrimaryiCloudAccount;
- (id)aida_accountForiCloudAccount:(id)arg1;
- (id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id /* block */)arg3;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(bool)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)_ams_defaultAccountStore;
+ (id)_ams_newAccountStore;
+ (bool)_isAccountsCachingEnabled;
+ (id)_secureTokenForIdentifier:(id)arg1;
+ (id)ams_accountTypeIdentifierForMediaType:(id)arg1;
+ (id)ams_sharedAccountStore;
+ (id)ams_sharedAccountStoreForClient:(id)arg1;
+ (id)ams_sharedAccountStoreForMediaType:(id)arg1;
+ (id)ams_sharedAccountStoreForProcessInfo:(id)arg1;

- (id)_accountTypeForMediaType:(id)arg1;
- (bool)_addGlobalCookiesForResponse:(id)arg1 error:(id*)arg2;
- (bool)_addUserCookiesForResponse:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (id)_ams_accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;
- (id)_ams_accountWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)_ams_accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)_ams_accountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)_ams_fetchAccountTypeWithAccountTypeIdenfitier:(id)arg1;
- (id)_ams_fetchAccountWithIdentifier:(id)arg1;
- (id)_ams_fetchAccountsWithAccountType:(id)arg1 options:(unsigned long long)arg2;
- (id)_ams_fetchAccountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2;
- (id)_ams_localiTunesAccount;
- (id)_ams_localiTunesAccountAfterUpdatingStorefront:(bool)arg1;
- (id)_ams_localiTunesAccountForAccountMediaType:(id)arg1 updateStorefront:(bool)arg2;
- (id)_ams_localiTunesAccountForAccountType:(id)arg1 shouldUpdateStorefront:(bool)arg2;
- (void)_checkErrorForUnitTestAccess:(id)arg1;
- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2;
- (id)_createLocaliTunesAccountForAccountType:(id)arg1;
- (id)_fetchLocaliTunesAccountForAccountType:(id)arg1 shouldUpdateStorefront:(bool)arg2;
- (id)_iTunesAccountsForAccountType:(id)arg1;
- (id)_saveAccount:(id)arg1 verifyCredentials:(bool)arg2;
- (id)_updateStorefrontInLocalAccount:(id)arg1;
- (id)ams_IDMSAccountForAccount:(id)arg1;
- (id)ams_IDSAccountForAccount:(id)arg1;
- (id)ams_accountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 accountTypeIdentifier:(id)arg4;
- (id)ams_activeiCloudAccount;
- (id)ams_activeiTunesAccount;
- (id)ams_activeiTunesAccountForMediaType:(id)arg1;
- (bool)ams_addCookiesForResponse:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (bool)ams_addCookiesForResponse:(id)arg1 request:(id)arg2 account:(id)arg3 error:(id*)arg4;
- (bool)ams_addCookiesForResult:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (id)ams_alliTunesAccounts;
- (id)ams_cookiesForURL:(id)arg1;
- (id)ams_cookiesForURL:(id)arg1 bag:(id)arg2;
- (id)ams_demoAccount;
- (id)ams_fetchGrandSlamTokenForAccount:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3;
- (id)ams_fetchLocaliTunesAccount;
- (id)ams_iCloudAccountForAccount:(id)arg1;
- (id)ams_iTunesAccountForAccount:(id)arg1;
- (id)ams_iTunesAccountForAccount:(id)arg1 forMediaType:(id)arg2 createIfNeeded:(bool)arg3;
- (id)ams_iTunesAccountForHomeWithIdentifier:(id)arg1;
- (id)ams_iTunesAccountForHomeWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 forMediaType:(id)arg4;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 forMediaType:(id)arg2;
- (id)ams_iTunesAccountWithDSID:(id)arg1;
- (id)ams_iTunesAccountWithDSID:(id)arg1 forMediaType:(id)arg2;
- (id)ams_iTunesAccountWithHomeID:(id)arg1;
- (id)ams_iTunesAccountWithHomeUserID:(id)arg1;
- (id)ams_iTunesAccountWithHomeUserIdentifier:(id)arg1;
- (id)ams_iTunesAccountWithUsername:(id)arg1;
- (id)ams_iTunesAccountWithUsername:(id)arg1 forMediaType:(id)arg2;
- (id)ams_iTunesAccounts;
- (id)ams_iTunesAccountsForMediaType:(id)arg1;
- (id)ams_iTunesAccountsForMediaTypes:(id)arg1;
- (id)ams_iTunesAccountsWithHomeUserID;
- (id)ams_iTunesAccountsWithHomeUserIdentifiers;
- (id)ams_iTunesSandboxAccounts;
- (bool)ams_isAccountNew:(id)arg1;
- (bool)ams_isActiveAccountCombined;
- (id)ams_localiTunesAccount;
- (id)ams_localiTunesAccountForAccountMediaType:(id)arg1;
- (id)ams_localiTunesAccountForAccountType:(id)arg1;
- (id)ams_mediaAccountForHomeWithIdentifier:(id)arg1;
- (id)ams_mediaType;
- (bool)ams_removeCookiesMatchingProperties:(id)arg1 error:(id*)arg2;
- (id)ams_saveAccount:(id)arg1;
- (id)ams_saveAccount:(id)arg1 verifyCredentials:(bool)arg2;
- (id)ams_saveAccount:(id)arg1 withOptions:(long long)arg2;
- (id)ams_secureTokenForAccount:(id)arg1;
- (bool)ams_setSecureToken:(id)arg1 forAccount:(id)arg2 error:(id*)arg3;
- (id)ams_setiTunesAccount:(id)arg1 forHomeWithIdentifier:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility

+ (id)bu_sharedAccountStore;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess

- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)da_accounts;
- (id)da_accountsEnabledForDADataclasses:(long long)arg1;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 outError:(id*)arg2;
- (void)da_loadDAAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)da_loadDAAccountsWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)_br_getAllAppleAccountsWithError:(id*)arg1;
- (id)br_accountForCurrentPersona;
- (id)br_accountForPersona:(id)arg1;
- (id)br_allEligibleAppleAccounts;
- (id)br_allEligibleAppleAccountsWithError:(id*)arg1;
- (id)br_allEnabledAppleAccountsIncludingDataSeparated:(bool)arg1;
- (id)br_allEnabledAppleAccountsIncludingDataSeparated:(bool)arg1 withError:(id*)arg2;
- (id)br_appleAccountWithPersonID:(id)arg1;
- (void)invalidateAccountForPersonaCache;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (id)_cn_canSaveAccount:(id)arg1;
- (id)_cn_removeAccount:(id)arg1;
- (id)_cn_saveVerifiedAccount:(id)arg1;
- (id)cardDAVAccountForPrimaryAppleAccountWithAppleID:(id)arg1 logger:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DMCUtilities.framework/DMCUtilities

- (id)_dmc_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1;
- (id)_dmc_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1 altDSID:(id)arg2;
- (id)_dmc_accountWithType:(id)arg1 criteria:(id /* block */)arg2;
- (id)_dmc_missingAccountError;
- (bool)_dmc_updateAccount:(id)arg1 error:(id*)arg2 updateBlock:(id /* block */)arg3;
- (id)dmc_RemoteManagementAccountType;
- (id)dmc_RemoteManagementAccounts;
- (id)dmc_accountsWithPredicateBlock:(id /* block */)arg1;
- (bool)dmc_conflictingAccountsExistWithUsername:(id)arg1 error:(id*)arg2;
- (bool)dmc_hasPrimaryAccount:(id*)arg1;
- (id)dmc_iCloudAccountForRemoteManagingAccount;
- (id)dmc_iCloudAccountForRemoteManagingAccountWithAltDSID:(id)arg1;
- (id)dmc_iCloudAccountWithUsername:(id)arg1;
- (id)dmc_iTunesAccountForRemoteManagingAccount;
- (id)dmc_iTunesAccountForRemoteManagingAccountWithAltDSID:(id)arg1;
- (id)dmc_primaryiCloudAccount;
- (id)dmc_remoteManagementAccountForAltDSID:(id)arg1;
- (id)dmc_remoteManagementAccountForDSID:(id)arg1;
- (id)dmc_remoteManagementAccountForEnrollmentURL:(id)arg1;
- (id)dmc_remoteManagementAccountForIdentifier:(id)arg1;
- (id)dmc_remoteManagementAccountForManagementProfileIdentifier:(id)arg1;
- (void)dmc_removeAccountWithIdentifier:(id)arg1 asynchronous:(bool)arg2;
- (void)dmc_removeAccounts:(id)arg1 asynchronous:(bool)arg2;
- (void)dmc_removeAccountsWithAltDSID:(id)arg1 asynchronous:(bool)arg2;
- (void)dmc_removeMAIDRelatedAccountsWithAltDSID:(id)arg1 asynchronous:(bool)arg2;
- (void)dmc_removeMAIDRelatedAccountsWithPersonaID:(id)arg1 asynchronous:(bool)arg2;
- (bool)dmc_updateAccountWithIdentifier:(id)arg1 error:(id*)arg2 updateBlock:(id /* block */)arg3;
- (bool)dmc_updateAccountWithTypeIdentifier:(id)arg1 altDSID:(id)arg2 error:(id*)arg3 updateBlock:(id /* block */)arg4;
- (bool)dmc_updateAppleAccountWithPersonaID:(id)arg1 error:(id*)arg2 updateBlock:(id /* block */)arg3;
- (id)dmc_visibleRemoteManagementAccounts;
- (id)dmc_visibleSecondaryRemoteManagementAccounts;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)da_accounts;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 outError:(id*)arg2;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)da_loadDAAccountsWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV

- (id)_cn_canSaveAccount:(id)arg1;
- (id)_cn_removeAccount:(id)arg1;
- (id)_cn_saveVerifiedAccount:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

- (id)ds_deviceOwnerEmails;
- (id)ds_deviceOwnerPhoneNumbers;

// Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/ExchangeSync

- (void)_esAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)es_accountsWithAccountTypeIdentifiers:(id)arg1 outError:(id*)arg2;
- (void)es_loadESAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)es_loadESAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)es_loadESAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)es_loadESAccountsWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (void)_getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_gkAccountForAppleID:(id)arg1;
- (id)_gkAllCredentials;
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_gkMapAccountsWithBlock:(id /* block */)arg1;
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1;
- (void)_gkSaveCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_ams_activeiTunesAccount;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)hmd_ams_activeiTunesAccount;

// Image: /System/Library/PrivateFrameworks/MobileSync.framework/MobileSync

- (id)_mailAccountTypeIdentifiers;
- (bool)hasMailAccountsForSync;
- (id)mailAccountsForSync;

// Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement

+ (id)rm_defaultStore;

- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1;
- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1 altDSID:(id)arg2;
- (id)rm_RemoteManagementAccountType;
- (id)rm_RemoteManagementAccounts;
- (id)rm_iCloudAccountForRemoteManagingAccount;
- (id)rm_iCloudAccountForRemoteManagingAccountWithAltDSID:(id)arg1;
- (id)rm_iTunesAccountForRemoteManagingAccount;
- (id)rm_iTunesAccountForRemoteManagingAccountWithAltDSID:(id)arg1;
- (id)rm_remoteManagementAccountForAltDSID:(id)arg1;
- (id)rm_remoteManagementAccountForDSID:(id)arg1;
- (id)rm_remoteManagementAccountForEnrollmentURL:(id)arg1;
- (id)rm_remoteManagementAccountForIdentifier:(id)arg1;
- (id)rm_remoteManagementAccountForProfileIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SeymourClient.framework/SeymourClient

+ (id)SMUACDAccountStoreDidChangeNotification;

// Image: /System/Library/PrivateFrameworks/SocialServices.framework/SocialServices

- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(bool)arg2 completion:(id /* block */)arg3;
- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(bool)arg2 delegateClassName:(id)arg3 completion:(id /* block */)arg4;
- (void)sl_openGoogleAuthenticationSheetWithAccountDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithAccountDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithUsername:(id)arg1 accountDescription:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

+ (id)_accountTypesCache;

- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2 error:(id*)arg3;
- (id)_ss_IDMSAccountForAccount:(id)arg1 error:(id*)arg2;
- (id)_ss_accountTypeWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)_ss_appleAuthenticationAccountForAccount:(id)arg1 error:(id*)arg2;
- (id)_ss_iCloudAccountForAccount:(id)arg1 error:(id*)arg2;
- (id)_ss_iTunesAccountForAccount:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)ic_sharedAccountStore;

- (id)_ic_storeAccountType;
- (id)ic_activeLockerAccount;
- (void)ic_activeLockerAccountWithCompletion:(id /* block */)arg1;
- (id)ic_activeLockerAccountWithError:(id*)arg1;
- (id)ic_activeStoreAccount;
- (void)ic_activeStoreAccountWithCompletion:(id /* block */)arg1;
- (id)ic_activeStoreAccountWithError:(id*)arg1;
- (id)ic_allStoreAccounts;
- (void)ic_allStoreAccountsWithCompletion:(id /* block */)arg1;
- (id)ic_allStoreAccountsWithError:(id*)arg1;
- (bool)ic_disableActiveLockerAccount:(id)arg1 error:(id*)arg2;
- (void)ic_localStoreAccountWithCompletion:(id /* block */)arg1;
- (id)ic_localStoreAccountWithError:(id*)arg1;
- (id)ic_primaryAppleAccount;
- (void)ic_primaryAppleAccountWithCompletion:(id /* block */)arg1;
- (id)ic_primaryAppleAccountWithError:(id*)arg1;
- (void)ic_setActiveLockerAccount:(id)arg1;
- (void)ic_setActiveLockerAccount:(id)arg1 completion:(id /* block */)arg2;
- (bool)ic_setActiveLockerAccount:(id)arg1 error:(id*)arg2;
- (void)ic_setActiveStoreAccount:(id)arg1;
- (void)ic_setActiveStoreAccount:(id)arg1 completion:(id /* block */)arg2;
- (bool)ic_setActiveStoreAccount:(id)arg1 error:(id*)arg2;
- (void)ic_storeAccountForHomeUserIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)ic_storeAccountForHomeUserIdentifier:(id)arg1 error:(id*)arg2;
- (id)ic_storeAccountForStoreAccountID:(id)arg1;
- (void)ic_storeAccountForStoreAccountID:(id)arg1 completion:(id /* block */)arg2;
- (id)ic_storeAccountForStoreAccountID:(id)arg1 error:(id*)arg2;
- (void)ic_storeAccountTypeWithCompletion:(id /* block */)arg1;
- (id)ic_storeAccountTypeWithError:(id*)arg1;

@end
