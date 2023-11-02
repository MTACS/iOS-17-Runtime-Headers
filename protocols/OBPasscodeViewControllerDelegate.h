
@protocol OBPasscodeViewControllerDelegate <NSObject>

@required

- (NSString *)completionButtonTitleForPasscodeViewController:(OBPasscodeViewController *)arg1;
- (void)passcodeViewController:(OBPasscodeViewController *)arg1 didEnterPasscode:(NSString *)arg2;
- (bool)passcodeViewController:(OBPasscodeViewController *)arg1 shouldEnableCompletionButtonForPasscode:(NSString *)arg2;

@end
