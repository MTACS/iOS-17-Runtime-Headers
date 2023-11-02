
@interface ICQiCloudFooterSpecifierProvider : NSObject <AAUISpecifierProvider, DelayedPushDelegate, ICQUpgradeFlowManagerDelegate> {
    AIDAAccountManager * _accountManager;
    PSSpecifier * _activeSpecifier;
    <AAUISpecifierProviderDelegate> * _delegate;
    <AAUISpecifierProvider> * _icloudPlusSpecifierProvider;
    ICQUILegacyPurchaseFlowController * _legacyPurchaseFlowController;
    ICQUILegacyPurchaseFlowManager * _legacyPurchaseFlowManager;
    PSListController<AAUISpecifierProviderDelegate> * _listController;
    ICQPreferencesRemoteUIDelegate * _ruiDelegate;
    NSArray * _specifiers;
    ICQCloudStorageSummary * _storageSummary;
    ICQUpgradeFlowManager * _upgradeFlowManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginLoadingSpecifier:(id)arg1;
- (id)_buildSubscriptionSpecifiers;
- (id)_buildiCloudPlusSpecifiers;
- (void)_fetchStorageSummary;
- (void)_finishLoadingSpecifier;
- (void)_handleICQLink:(id)arg1 forSpecifier:(id)arg2;
- (void)_launchFamilyUsageFlowWithURL:(id)arg1;
- (void)_launchFlowForSpecifier:(id)arg1;
- (void)_launchLegacyPurchaseFlow;
- (void)_launchUpgradeFlowWithICQLink:(id)arg1;
- (void)_launchUpgradeFlowWithURL:(id)arg1;
- (void)_postQuotaDidChangeNotification;
- (void)_reloadSpecifiers;
- (void)_setupSpecifier:(id)arg1;
- (void)_startFamilySharing;
- (id)_stringForSpecifier:(id)arg1;
- (id)account;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;

@end
