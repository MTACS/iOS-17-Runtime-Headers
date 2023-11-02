
@interface REMAppleAccountUtilities : NSObject {
    ACAccount * __debug_fullICloudACAccount;
    ACAccount * __debug_primaryICloudACAccount;
    ACAccountStore * _accountStore;
    bool  _cachedICloudACAccountsAreValid;
    NSArray * _unsafeUntilSystemReady_allICloudACAccounts;
    NSMutableDictionary * _unsafeUntilSystemReady_parentICloudACAccountIdentifierMap;
    ACAccount * _unsafeUntilSystemReady_primaryICloudACAccount;
}

@property (nonatomic, retain) ACAccount *_debug_fullICloudACAccount;
@property (nonatomic, retain) ACAccount *_debug_primaryICloudACAccount;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic) bool cachedICloudACAccountsAreValid;
@property (readonly) NSArray *unsafeUntilSystemReady_allICloudACAccounts;
@property (nonatomic, retain) NSMutableDictionary *unsafeUntilSystemReady_parentICloudACAccountIdentifierMap;
@property (readonly) ACAccount *unsafeUntilSystemReady_primaryICloudACAccount;

+ (id)accountDescriptionWithACAccount:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cachedDisplayICloudACAccountWithIdentifier:(id)arg1;
- (id)_debug_fullICloudACAccount;
- (id)_debug_primaryICloudACAccount;
- (void)_invalidateCachedICloudACAccounts;
- (void)_setNonPrimaryICloudACAccount:(id)arg1;
- (void)_setPrimaryICloudACAccount:(id)arg1;
- (void)_updateCachedICloudACAccounts;
- (id)accessQueue;
- (id)accountStore;
- (void)accountStoreDidChange:(id)arg1;
- (bool)cachedICloudACAccountsAreValid;
- (id)currentPersonaUserPersonaUniqueString;
- (void)dealloc;
- (id)init;
- (id)initForObservingAccountStoreChanges:(bool)arg1;
- (void)invalidateICloudACAccounts;
- (bool)isCurrentPersonaDataSeparated;
- (void)performBlockInPersonaContextForAccountIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)saveDidChooseToMigrate:(bool)arg1 didFinishMigration:(bool)arg2 toACAccount:(id)arg3 inStore:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setAccountStore:(id)arg1;
- (void)setCachedICloudACAccountsAreValid:(bool)arg1;
- (void)setUnsafeUntilSystemReady_parentICloudACAccountIdentifierMap:(id)arg1;
- (void)set_debug_fullICloudACAccount:(id)arg1;
- (void)set_debug_primaryICloudACAccount:(id)arg1;
- (id)unsafeUntilSystemReady_allCloudKitRemindersEnabledICloudACAccounts;
- (id)unsafeUntilSystemReady_allICloudACAccounts;
- (id)unsafeUntilSystemReady_displayedHostnameOfICloudACAccountWithAccountIdentifier:(id)arg1;
- (id)unsafeUntilSystemReady_iCloudAccountCalDavServiceWithAccountID:(id)arg1;
- (id)unsafeUntilSystemReady_icloudACAccountMatchingAccountIdentifier:(id)arg1;
- (id)unsafeUntilSystemReady_parentICloudACAccountIdentifierMap;
- (id)unsafeUntilSystemReady_primaryICloudACAccount;

@end
