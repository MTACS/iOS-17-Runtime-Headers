
@interface ICAccountUtilities : NSObject <ICStateHandlerProvider> {
    NSMutableDictionary * _accountByIdentifier;
    NSMutableDictionary * _accountIsManagedByIdentifier;
    ACAccountStore * _accountStore;
    NSDictionary * _currentICloudAccountState;
    ACAccount * _primaryICloudACAccount;
    bool  _primaryICloudACAccountValid;
}

@property (nonatomic, retain) NSMutableDictionary *accountByIdentifier;
@property (nonatomic, retain) NSMutableDictionary *accountIsManagedByIdentifier;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, copy) NSDictionary *currentICloudAccountState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didChooseToMigratePrimaryICloudAccount;
@property (readonly) unsigned long long hash;
@property (readonly) ACAccount *primaryICloudACAccount;
@property (getter=isPrimaryICloudACAccountValid, nonatomic) bool primaryICloudACAccountValid;
@property (nonatomic, readonly) bool primaryICloudAccountEnabled;
@property (readonly) Class superclass;

+ (void)registerStateHandler;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountByIdentifier;
- (id)accountIsManagedByIdentifier;
- (id)accountStore;
- (void)accountStoreDidChange:(id)arg1;
- (id)allICloudACAccounts;
- (id)applicationDataContainerURLForAccountIdentifier:(id)arg1;
- (id)applicationDocumentsURLForAccountIdentifier:(id)arg1;
- (void)createDirectoryIfNecessaryUsingURL:(id)arg1;
- (id)currentICloudAccountState;
- (void)dealloc;
- (bool)didChooseToMigratePrimaryICloudAccount;
- (bool)hasSyncingAccount;
- (id)iCloudACAccountWithIdentifier:(id)arg1;
- (id)init;
- (id)initForObservingAccountStoreChanges:(bool)arg1;
- (void)internalInvalidatePrimaryICloudACAccount;
- (void)invalidateCache;
- (bool)isManagedACAccountWithIdentifier:(id)arg1;
- (bool)isPrimaryICloudACAccountValid;
- (void)performBlockInPersonaContext:(id /* block */)arg1 forAccountIdentifier:(id)arg2;
- (id)primaryICloudACAccount;
- (bool)primaryICloudAccountEnabled;
- (void)setAccountByIdentifier:(id)arg1;
- (void)setAccountIsManagedByIdentifier:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setCurrentICloudAccountState:(id)arg1;
- (void)setPrimaryICloudACAccountValid:(bool)arg1;
- (id)temporaryDirectoryURLForAccountIdentifier:(id)arg1;
- (void)updateICloudACAccountFromStore;

@end
