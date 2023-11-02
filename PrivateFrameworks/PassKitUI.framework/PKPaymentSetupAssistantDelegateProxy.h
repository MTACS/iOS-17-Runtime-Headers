
@interface PKPaymentSetupAssistantDelegateProxy : NSObject <PKPaymentSetupViewControllerDelegate> {
    bool  _didTerminateSetupFlow;
    <PKPaymentSetupViewControllerDelegate> * _externalDelegate;
    PKPaymentProvisioningController * _provisioningController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setExternalDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 provisioningController:(id)arg2;
- (void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(bool)arg3 error:(id)arg4;
- (void)viewController:(id)arg1 didExitPasscodeUpgradeWithShouldContinue:(bool)arg2 error:(id)arg3;
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
- (void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(id /* block */)arg3;
- (void)viewController:(id)arg1 requestPasscodeUpgradeWithCompletion:(id /* block */)arg2;
- (void)viewControllerDidBeginSetupFlow:(id)arg1;
- (void)viewControllerDidFailToChangePasscodeComplex:(id)arg1;
- (void)viewControllerDidFinishChangingPasscodeComplex:(id)arg1;
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end
