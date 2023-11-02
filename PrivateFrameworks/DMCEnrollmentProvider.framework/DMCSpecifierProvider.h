
@interface DMCSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    bool  _isReloading;
    ACAccount * _rmAccount;
    NSArray * _specifiers;
}

@property (nonatomic, readonly) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isReloading;
@property (nonatomic, readonly) ACAccount *rmAccount;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_listenForNotification:(id)arg1 isLocalNotification:(bool)arg2;
- (id)accountManager;
- (id)cachedSpecifiers:(id)arg1;
- (id)cellForSpecifier:(id)arg1 inTableView:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccount:(id)arg1 reloadNotification:(id)arg2 isLocalNotification:(bool)arg3 reloadIfMissingRMAccount:(bool)arg4;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 reloadNotification:(id)arg2 isLocalNotification:(bool)arg3 reloadIfMissingRMAccount:(bool)arg4;
- (bool)isReloading;
- (void)registerSpecifierBridgeForTableView:(id)arg1;
- (void)reloadNotificationPosted:(id)arg1;
- (void)reloadSpecifiers;
- (id)rmAccount;
- (void)setDelegate:(id)arg1;
- (void)setIsReloading:(bool)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;
- (id)specifiersReloadedNotificationName;
- (id)tableCellsForSpecifiersInTableView:(id)arg1;

@end
