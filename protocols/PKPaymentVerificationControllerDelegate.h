
@protocol PKPaymentVerificationControllerDelegate <NSObject>

@required

- (void)dismissVerificationViewControllerAnimated:(bool)arg1;
- (void)presentVerificationViewController:(UIViewController *)arg1 animated:(bool)arg2;
- (UIWindow *)presentationContext;

@optional

- (void)didChangeVerificationPresentation;

@end
