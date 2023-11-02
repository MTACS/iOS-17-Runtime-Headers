
@interface ICQCloudStorageSpecifierProvider : NSObject <AAUISpecifierProvider, DelayedPushDelegate, RUITableViewRowDelegate> {
    AIDAAccountManager * _accountManager;
    PSSpecifier * _activeSpecifier;
    bool  _delayedEnterManageStorage;
    <AAUISpecifierProviderDelegate> * _delegate;
    FLFollowUpController * _followUpController;
    NSString * _initialStorageFlowAction;
    PSListController<AAUISpecifierProviderDelegate> * _listController;
    PSSpecifier * _manageStorageSpecifier;
    ICQUINativeManageStorageController * _nativeManageStorage;
    <NSObject> * _quotaChangeNotificationObserver;
    _TtC13iCloudQuotaUI29RecommendationAnalyticsHelper * _recommendationAnalyticsHelper;
    ICQPreferencesRemoteUIDelegate * _ruiDelegate;
    NSArray * _specifiers;
    PSSpecifier * _storageGraphSpecifier;
    ICQCloudStorageSummary * _storageSummary;
    ICQUITipSpecifierProvider * _tipSpecifierProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *initialStorageFlowAction;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createNativeManageStorageIfNeeded;
- (void)_enterManageStorage:(id)arg1;
- (void)_fetchStorageSummary:(id)arg1;
- (void)_fetchStorageSummary:(id)arg1 completion:(id /* block */)arg2;
- (void)_finishLoadingActiveSpecifier;
- (bool)_handleManagedStorageURL:(id)arg1;
- (void)_handleStorageUpgradeURL:(id)arg1;
- (void)_manageStorageSpecifierWasTapped:(id)arg1;
- (void)_reloadStorageSpecifiers;
- (void)_replaceRUISectionWithTipUIFromObjectModel:(id)arg1 inPage:(id)arg2;
- (void)_startObservingQuotaChangeNotifications;
- (void)_stopObservingQuotaChangeNotifications;
- (id)_valueForStorageGraphSpecifier:(id)arg1;
- (id)account;
- (void)dealloc;
- (id)delegate;
- (bool)handleURL:(id)arg1;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;
- (id)initialStorageFlowAction;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;
- (void)remoteUIDelegate:(id)arg1 didCreatePage:(id)arg2 inObjectModel:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setInitialStorageFlowAction:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;
- (Class)tableCellClassForTableViewRow:(id)arg1;

@end
