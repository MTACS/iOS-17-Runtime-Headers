
@interface ICQUIRecommendationsRestorableViewController : UIViewController <DelayedPushDelegate, ICQLiftUIPresenterDelegate, ICQUIRemoteUIPresenterDelegate, ICQUpgradeFlowManagerDelegate, PSController, PSStateRestoration, RecommendationFlowControllerDelegate> {
    AIDAAccountManager * _accountManager;
    CERecommendation * _activeRecommendation;
    RecommendationsController * _controller;
    ICQLiftUIPresenter * _liftUIPresenter;
    ICQUIRemoteUIPresenter * _remoteUIPresenter;
    ICQPreferencesRemoteUIDelegate * _ruiDelegate;
    ICQUpgradeFlowManager * _upgradeFlowManager;
    iCloudMailAccountProvider * mailAccountProvider;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (nonatomic, retain) RecommendationsController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *parentController;
@property (nonatomic, retain) PSRootController *rootController;
@property (nonatomic, retain) PSSpecifier *specifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_launchUpgradeFlowForRecommendation:(id)arg1 url:(id)arg2 action:(long long)arg3;
- (id)account;
- (id)accountManager;
- (void)beginFamilySharingFlowWithRecommendation:(id)arg1 familyCircle:(id)arg2;
- (bool)canBeShownFromSuspendedState;
- (void)cancelledRecommendation:(id)arg1;
- (void)completedRecommendation:(id)arg1 storageRecovered:(id)arg2;
- (id)controller;
- (void)enableDataclass:(id)arg1 forRecommendation:(id)arg2;
- (void)enableMessagesDataclassForRecommendation:(id)arg1;
- (void)enablePrivateRelayForRecommendation:(id)arg1;
- (void)handlePostFamilySharingFlowChecks:(id)arg1 familyCircle:(id)arg2;
- (void)handleTurnOnMoreServicesWithRecommendation:(id)arg1 url:(id)arg2;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)launchUpgradeFlowForRecommendationWithLiftUI:(id)arg1 url:(id)arg2;
- (void)launchUpgradeFlowForRecommendationWithRemoteUI:(id)arg1 url:(id)arg2;
- (void)liftUIPresenter:(id)arg1 didLoadWithSuccess:(bool)arg2 error:(id)arg3;
- (void)liftUIPresenterDidCancel:(id)arg1;
- (void)liftUIPresenterDidCancel:(id)arg1 userInfo:(id)arg2;
- (void)liftUIPresenterDidComplete:(id)arg1;
- (void)liftUIPresenterDidComplete:(id)arg1 userInfo:(id)arg2;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;
- (void)openExternalLinkForRecommendation:(id)arg1 deeplink:(id)arg2;
- (void)openLiftUIForRecommendation:(id)arg1 url:(id)arg2;
- (void)openRemoteUIForRecommendation:(id)arg1 url:(id)arg2;
- (void)openVCForRecommendation:(id)arg1 action:(id)arg2;
- (id)parentController;
- (void)postQuotaDidChangeNotification;
- (id)readPreferenceValue:(id)arg1;
- (void)remoteUIFlowManager:(id)arg1 didCompleteFlowWithSuccess:(bool)arg2 error:(id)arg3;
- (void)remoteUIFlowManager:(id)arg1 didDismissWithError:(id)arg2;
- (id)rootController;
- (void)setAccountManager:(id)arg1;
- (void)setController:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setupiCloudEmailForRecommendation:(id)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (id)specifier;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (void)userDidCancelAction;
- (void)userDidCompleteAction:(id)arg1;

@end
