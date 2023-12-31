
@protocol BFFPasscodeViewControllerDelegate

@required

- (void)passcodeViewController:(BFFPasscodeViewController *)arg1 didFinishWithPasscodeCreation:(NSString *)arg2;

@optional

- (void)passcodeViewController:(BFFPasscodeViewController *)arg1 didSetPasscode:(NSString *)arg2;
- (bool)passcodeViewControllerAllowSkip:(BFFPasscodeViewController *)arg1;
- (NSString *)passcodeViewControllerCustomFirstEntryInstructions:(BFFPasscodeViewController *)arg1;
- (void)passcodeViewControllerWillSetPasscode:(BFFPasscodeViewController *)arg1;

@end
