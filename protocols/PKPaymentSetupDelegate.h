
@protocol PKPaymentSetupDelegate <NSObject>

@required

- (void)paymentSetupDidFinish:(PKPaymentSetupNavigationController *)arg1;

@optional

- (void)paymentSetupDidExitPasscodeUpgradeForPasscodeUpgradeFlowController:(PKPasscodeUpgradeFlowController *)arg1 withShouldContinue:(bool)arg2 error:(NSError *)arg3;
- (void)paymentSetupDidExitPasscodeUpgradeWithShouldContinue:(bool)arg1 error:(NSError *)arg2;
- (void)paymentSetupDidFinish:(PKPaymentSetupNavigationController *)arg1 withError:(NSError *)arg2;
- (void)paymentSetupDidShowEligibilityIssue;
- (void)paymentSetupDidShowError:(NSError *)arg1;
- (void)paymentSetupRequestPasscodeUpgradeForPasscodeUpgradeFlowController:(void *)arg1 withVisibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKPasscodeUpgradeFlowController *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)paymentSetupRequestPasscodeUpgradeWithVisibleViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)paymentSetupRequestPresentPassUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
