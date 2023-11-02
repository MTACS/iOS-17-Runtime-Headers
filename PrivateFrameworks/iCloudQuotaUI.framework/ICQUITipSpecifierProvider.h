
@interface ICQUITipSpecifierProvider : NSObject <AAUISpecifierProvider, AMSUIMessageViewControllerDelegate, DelayedPushDelegate, ICQLiftUIPresenterDelegate, ICQUIRemoteUIPresenterDelegate, ICQUpgradeFlowManagerDelegate, RUITableViewRowDelegate> {
    AIDAAccountManager * _accountManager;
    NSString * _anchorIdentifier;
    <AAUISpecifierProviderDelegate> * _delegate;
    bool  _hasDismissedTip;
    AMSUIBubbleTipViewController * _inlineTipController;
    ICQPreferencesRemoteUIDelegate * _legacyRemoteUIDelegate;
    ICQLiftUIPresenter * _liftUIPresenter;
    PSListController<AAUISpecifierProviderDelegate> * _listController;
    AMSUIBubbleTipViewController * _manageStorageTipController;
    ICQUIRemoteUIPresenter * _ruiFlowManager;
    bool  _showUpwardPointingTips;
    NSArray * _specifiers;
    long long  _tipRequestState;
    ICQUpgradeFlowManager * _upgradeFlowManager;
    ICQUIInlineTipViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDismissedTip;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQUIInlineTipViewModel *viewModel;

- (void).cxx_destruct;
- (void)_cleanUpSyncWithiCloudFooterIfApplicable;
- (void)_dismissPressed;
- (void)_fetchAndDisplayTipIfNotYetDismissed;
- (void)_fetchTip:(id /* block */)arg1;
- (void)_getEligibleTipFromTips:(id)arg1 completion:(id /* block */)arg2;
- (void)_launchLegacyRemoteUIWithURL:(id)arg1;
- (void)_launchLiftUIWithURL:(id)arg1;
- (void)_launchRemoteUIWithURL:(id)arg1 forDataclasses:(id)arg2;
- (void)_launchUpgradeFlowWithAction:(id)arg1 andURL:(id)arg2;
- (void)_openExternalLink:(id)arg1;
- (void)_openLiftUILink:(id)arg1;
- (void)_openRemoteUILink:(id)arg1 forDataclasses:(id)arg2;
- (void)_reloadSpecifiers;
- (void)_removeVisibleTip;
- (bool)_tipArrowConfigurationIsEligibleForDisplay:(id)arg1;
- (void)_tipDisplayed;
- (id)_tipSpecifiers;
- (void)_updateSyncWithiCloudFooterIfApplicable;
- (id)_valueForSpecifier:(id)arg1;
- (id)account;
- (void)dealloc;
- (id)delegate;
- (bool)hasDismissedTip;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2 sectionAnchorIdentifier:(id)arg3 showUpwardPointingTips:(bool)arg4;
- (void)liftUIPresenter:(id)arg1 didLoadWithSuccess:(bool)arg2 error:(id)arg3;
- (void)liftUIPresenter:(id)arg1 performAction:(long long)arg2 parameters:(id)arg3;
- (void)liftUIPresenterDidCancel:(id)arg1;
- (void)liftUIPresenterDidComplete:(id)arg1;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didLoadDialogRequest:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;
- (void)remoteUIFlowManager:(id)arg1 didCompleteFlowWithSuccess:(bool)arg2 error:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHasDismissedTip:(bool)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)specifiers;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (id)tipForManageStorageFromAttributes:(id)arg1 rows:(id)arg2 viewController:(id)arg3 remoteUIDelegate:(id)arg4;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (id)viewModel;

@end
