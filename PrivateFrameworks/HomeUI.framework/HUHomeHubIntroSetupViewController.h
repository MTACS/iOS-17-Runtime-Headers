
@interface HUHomeHubIntroSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    OBLinkTrayButton * _cancelButton;
    OBBoldTrayButton * _commitButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HFHomeKitDispatcher * _homeKitDispatcher;
    bool  _isFinalStep;
    bool  _isViewVisible;
    bool  _moreThanOneHome;
    bool  _needsToPresentUpgradeFailedAlert;
}

@property (nonatomic, retain) OBLinkTrayButton *cancelButton;
@property (nonatomic, retain) OBBoldTrayButton *commitButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFHomeKitDispatcher *homeKitDispatcher;
@property (nonatomic) bool isFinalStep;
@property (nonatomic) bool isViewVisible;
@property (nonatomic) bool moreThanOneHome;
@property (nonatomic) bool needsToPresentUpgradeFailedAlert;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelFlow;
- (void)_commitOrContinue;
- (id)_commitOrContinueButtonTitle;
- (bool)_limitToNonScrollingContentHeight;
- (void)_presentUpgradeFailedAlert:(id)arg1 message:(id)arg2 retryTitle:(id)arg3 retryBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (id)cancelButton;
- (id)commitButton;
- (id)delegate;
- (id)homeKitDispatcher;
- (id)initWithHomes:(id)arg1;
- (bool)isFinalStep;
- (bool)isViewVisible;
- (bool)moreThanOneHome;
- (bool)needsToPresentUpgradeFailedAlert;
- (Class)onboardingFlowClass;
- (void)setCancelButton:(id)arg1;
- (void)setCommitButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeKitDispatcher:(id)arg1;
- (void)setIsFinalStep:(bool)arg1;
- (void)setIsViewVisible:(bool)arg1;
- (void)setMoreThanOneHome:(bool)arg1;
- (void)setNeedsToPresentUpgradeFailedAlert:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
