
@interface ContactlessReaderUI.IdentityRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    void hideMenuIndicatorTimer;
    void hideStatusBar;
    void identityViewController;
    void interruptionMonitor;
    void subscriptions;
    void supressor;
    void viewModel;
}

@property (nonatomic, readonly) unsigned long long preferredScreenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)handleHomeButtonPressed;
- (void)handlePanWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
