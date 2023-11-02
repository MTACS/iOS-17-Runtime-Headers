
@interface CSDeviceBlockViewController : CSModalViewControllerBase <CSDeviceBlockViewDelegate, CSEraseDeviceAuthViewControllerDelegate, CSModalViewDelegate> {
    NSObject<OS_dispatch_queue> * _accountAccessQueue;
    ACAccountStore * _accountStore;
    bool  _attemptingErase;
    bool  _attemptingRecovery;
    CSEraseDeviceAuthViewController * _authenticationViewController;
    <SBFBlockStatusProvider> * _blockStatusProvider;
    SBFDeviceBlockTimer * _blockTimer;
    CSDeviceUnblockViewController * _deviceUnblockViewController;
    ACAccount * _findMyAccount;
    bool  _hasActiveInternetConnection;
    CSLockScreenSettings * _lockScreenSettings;
    NSObject<OS_dispatch_queue> * _networkMonitorQueue;
    NSObject<OS_nw_path_monitor> * _networkPathMonitor;
    CSDevicePasscodeRecoveryService * _passcodeRecovery;
    id /* block */  _pendingAction;
    bool  _shouldEraseDataPlan;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *networkMonitorQueue;
@property (nonatomic, readonly) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (readonly) Class superclass;

+ (Class)viewClass;

- (void).cxx_destruct;
- (void)_attemptErase;
- (void)_attemptRecovery;
- (void)_attemptToDisableFindMyWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_cancelPendingActionAfterDelay:(double)arg1;
- (void)_disableFindMyInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 completion:(id /* block */)arg3;
- (void)_eraseDeviceWithCompletion:(id /* block */)arg1;
- (void)_getUserAccountWithCompletion:(id /* block */)arg1;
- (void)_handleDeviceLocatorStateDidChange:(id)arg1;
- (bool)_isFindMyChangingState;
- (bool)_isFindMyEnabled;
- (id)_obfuscateUsername:(id)arg1;
- (void)_performFMIPAuthenticationForContext:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentAuthenticationViewController;
- (void)_presentUnblockDeviceViewController;
- (void)_setNetworkMonitorUpdateHandlerWithPath:(id)arg1 completion:(id /* block */)arg2;
- (void)_setUpNetworkPathMonitor;
- (bool)_shouldShowUnblockDeviceButton;
- (id)_unblockPolicy;
- (void)_updateText;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)authViewController:(id)arg1 didConfirmEraseAfterAuthenticationWithResults:(id)arg2 shouldEraseDataPlan:(bool)arg3;
- (void)authViewControllerDidCancelToEraseDeviceAfterAuthentication:(id)arg1;
- (void)cancelButtonTapped;
- (void)dealloc;
- (void)deviceUnblockViewModelHandleDidRequestCancel;
- (void)deviceUnblockViewModelHandleDidRequestErase;
- (void)deviceUnblockViewModelHandleDidRequestRecovery;
- (void)handleEmergencyButtonAction;
- (void)handlePrimaryActionForView:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (void)handleUnblockButtonAction;
- (id)initWithDeviceBlockStatusProvider:(id)arg1;
- (id)networkMonitorQueue;
- (id)networkPathMonitor;
- (long long)presentationPriority;
- (id)view;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewIfLoaded;

@end
