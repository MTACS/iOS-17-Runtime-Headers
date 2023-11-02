
@interface PKPasscodeUpgradeFlowController : NSObject <DevicePINControllerDelegate, PKNewDevicePasscodeViewControllerDelegate> {
    id /* block */  _completionHandler;
    long long  _context;
    <PKPasscodeUpgradeFlowRenderer> * _flowRenderer;
    long long  _presentedViewControllerCount;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    id /* block */  _setupLaterHandler;
    bool  _upgradeRequiredToAddNewPass;
}

@property (nonatomic, readonly) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (nonatomic, copy) id /* block */ setupLaterHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PKPaymentWebServiceTargetDeviceProtocol> *targetDevice;
@property (nonatomic) bool upgradeRequiredToAddNewPass;

- (void).cxx_destruct;
- (void)_completeWithShouldContinue:(bool)arg1 error:(id)arg2;
- (bool)_isWatchTarget;
- (void)_showChangePasscodeFlow;
- (void)_showCurrentDevicePasscodeViewController;
- (void)_showNewDevicePasscodeViewControllerWithCurrentPasscode:(id)arg1;
- (void)_showPasscodeUpgradeExplanation;
- (void)beginShowingViewController;
- (long long)context;
- (void)dealloc;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)dismissPasscodeUpgradeFlow;
- (void)endedShowingViewController;
- (void)forceShowPasscodeUpgradeFlow;
- (id)init;
- (id)initWithPaymentProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 flowRenderer:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)newDevicePasscodeViewController:(id)arg1 didFinishSettingPasscode:(bool)arg2 withError:(id)arg3;
- (void)setSetupLaterHandler:(id /* block */)arg1;
- (void)setUpgradeRequiredToAddNewPass:(bool)arg1;
- (id)setupDelegate;
- (id /* block */)setupLaterHandler;
- (void)showPasscodeUpgradeFlow;
- (void)showPasscodeUpgradeFlow:(bool)arg1;
- (id)targetDevice;
- (bool)upgradeRequiredToAddNewPass;

@end
