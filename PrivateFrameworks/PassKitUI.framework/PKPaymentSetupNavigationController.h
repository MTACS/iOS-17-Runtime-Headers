
@interface PKPaymentSetupNavigationController : PKPaymentSetupDismissibleNavigationController <PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable> {
    bool  _allowsManualEntry;
    PKGroupsController * _groupsController;
    long long  _paymentSetupMode;
    PKPaymentProvisioningController * _provisioningController;
    bool  _rootViewControllerNeedsConfiguration;
    <PKPaymentSetupDelegate> * _setupDelegate;
    bool  _showsWelcomeViewController;
}

@property (nonatomic) bool allowsManualEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PKGroupsController *groupsController;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long paymentSetupMode;
@property (nonatomic, readonly, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) <PKPaymentSetupDelegate> *setupDelegate;
@property (nonatomic) bool showsWelcomeViewController;
@property (readonly) Class superclass;

+ (id)viewControllerForPresentingPaymentError:(id)arg1;

- (void).cxx_destruct;
- (long long)_preferredModalPresentationStyle;
- (void)_reconfigureRootViewControllerWithCompletion:(id /* block */)arg1;
- (bool)allowsManualEntry;
- (void)cancelButtonPressed:(id)arg1;
- (id)groupsController;
- (id)init;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2;
- (long long)paymentSetupMode;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)provisioningController;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setGroupsController:(id)arg1;
- (void)setPaymentSetupMode:(long long)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setShowsWelcomeViewController:(bool)arg1;
- (id)setupDelegate;
- (bool)showsWelcomeViewController;
- (void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(bool)arg3 error:(id)arg4;
- (void)viewController:(id)arg1 didExitPasscodeUpgradeWithShouldContinue:(bool)arg2 error:(id)arg3;
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
- (void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(id /* block */)arg3;
- (void)viewController:(id)arg1 requestPasscodeUpgradeWithCompletion:(id /* block */)arg2;
- (void)viewController:(id)arg1 requestPresentPassUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)viewController:(id)arg1 requestsReturnToPresentationMarker:(unsigned long long)arg2 reset:(bool)arg3;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
