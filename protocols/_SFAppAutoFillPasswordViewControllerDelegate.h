
@protocol _SFAppAutoFillPasswordViewControllerDelegate <_SFPasswordViewControllerDelegate>

@optional

- (void)passwordViewController:(_SFAppAutoFillPasswordViewController *)arg1 fillPassword:(NSString *)arg2;
- (void)passwordViewController:(_SFAppAutoFillPasswordViewController *)arg1 fillUsername:(NSString *)arg2;
- (void)passwordViewController:(_SFAppAutoFillPasswordViewController *)arg1 fillVerificationCode:(NSString *)arg2;
- (void)passwordViewController:(_SFAppAutoFillPasswordViewController *)arg1 selectedCredential:(SFSafariCredential *)arg2;

@end
