
@interface FARemoteAlertServiceViewController : SBUIRemoteAlertServiceViewController {
    FACircleContext * _circleContext;
    <FAFamilyPresenterHostProtocol> * _hostProxy;
    NSXPCConnection * _lookupConnection;
}

@property (nonatomic, retain) <FAFamilyPresenterHostProtocol> *hostProxy;

- (void).cxx_destruct;
- (id)_account;
- (void)_dismissAndExit;
- (void)_handleSignedOutAcceptInvitation;
- (void)_invalidateLookupConnection;
- (void)_main_dismissAndExit;
- (void)_setupRemoteProxy;
- (void)_showFamilyFlow;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)handleButtonActions:(id)arg1;
- (id)hostProxy;
- (long long)preferredStatusBarStyle;
- (void)setHostProxy:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
