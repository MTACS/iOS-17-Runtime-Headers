
@protocol PKPaymentSetupViewControllerDelegate <NSObject>

@required

- (void)viewControllerDidTerminateSetupFlow:(UIViewController *)arg1;

@optional

- (void)viewController:(void *)arg1 canProceedWithInstallment:(void *)arg2 featureApplication:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: UIViewController *, bool, PKFeatureApplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)viewController:(UIViewController *)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(PKPasscodeUpgradeFlowController *)arg2 withShouldContinue:(bool)arg3 error:(NSError *)arg4;
- (void)viewController:(UIViewController *)arg1 didExitPasscodeUpgradeWithShouldContinue:(bool)arg2 error:(NSError *)arg3;
- (void)viewController:(UIViewController *)arg1 didFinishWithPasses:(NSArray *)arg2 error:(NSError *)arg3;
- (void)viewController:(UIViewController *)arg1 didShowProvisioningError:(NSError *)arg2;
- (void)viewController:(UIViewController *)arg1 entitlementSelectionDidChange:(NSArray *)arg2;
- (void)viewController:(void *)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: UIViewController *, PKPasscodeUpgradeFlowController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)viewController:(void *)arg1 requestPasscodeUpgradeWithCompletion:(void *)arg2; // needs 2 arg types, found 8: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)viewController:(void *)arg1 requestPresentPassUniqueIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: UIViewController *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)viewController:(UIViewController *)arg1 requestsReturnToPresentationMarker:(unsigned long long)arg2 reset:(bool)arg3;
- (void)viewController:(void *)arg1 willPerformPasscodeUpgradeWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)viewControllerDidBeginSetupFlow:(UIViewController *)arg1;
- (void)viewControllerDidCancelSetupFlow:(UIViewController *)arg1;
- (void)viewControllerDidFailToChangePasscodeComplex:(UIViewController *)arg1;
- (void)viewControllerDidFinishChangingPasscodeComplex:(UIViewController *)arg1;
- (void)viewControllerDidShowEligibilityIssue:(UIViewController *)arg1;
- (void)viewControllerWillPresentChangePasscodeComplex:(UIViewController *)arg1;

@end
