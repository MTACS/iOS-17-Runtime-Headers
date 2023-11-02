
@interface ICQUIManageStorageListSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    <ICQUIManageStorageSpecifierProviderDelegate> * _delegate;
    bool  _failedToFetchAppList;
    bool  _isFetching;
    UINavigationItem * _navigationItem;
    NSArray * _specifiers;
    ICQCloudStorageApps * _storageApps;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQUIManageStorageSpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool failedToFetchAppList;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFetching;
@property (nonatomic) UINavigationItem *navigationItem;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic, retain) ICQCloudStorageApps *storageApps;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_refreshAppList;
- (void)_reloadSpecifiers;
- (id)account;
- (id)accountManager;
- (void)addDecorationToSpecifier:(id)arg1 usingAppInfo:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)failedToFetchAppList;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 navigationItem:(id)arg2;
- (bool)isFetching;
- (void)loadDrilldownFromSpecifier:(id)arg1;
- (id)nativeSpecifierForAppInfo:(id)arg1;
- (id)navigationItem;
- (id)serverUISpecifierForAppInfo:(id)arg1;
- (void)setAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFailedToFetchAppList:(bool)arg1;
- (void)setIsFetching:(bool)arg1;
- (void)setNavigationItem:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setStorageApps:(id)arg1;
- (id)specifiers;
- (id)storageApps;

@end
