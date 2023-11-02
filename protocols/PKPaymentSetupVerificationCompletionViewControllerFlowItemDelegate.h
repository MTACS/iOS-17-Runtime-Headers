
@protocol PKPaymentSetupVerificationCompletionViewControllerFlowItemDelegate <NSObject>

@required

- (void)showVerificationMethodsForVerificationCompletionViewController:(PKPaymentSetupVerificationCompletionViewController *)arg1;
- (void)verificationCompletionViewControllerDidFinish:(PKPaymentSetupVerificationCompletionViewController *)arg1;

@end
