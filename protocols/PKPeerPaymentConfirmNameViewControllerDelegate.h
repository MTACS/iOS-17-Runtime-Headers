
@protocol PKPeerPaymentConfirmNameViewControllerDelegate <NSObject>

@required

- (void)confirmNameViewController:(PKPeerPaymentConfirmNameViewController *)arg1 enteredFirstName:(NSString *)arg2 lastName:(NSString *)arg3;
- (void)confirmNameViewControllerCancelled:(PKPeerPaymentConfirmNameViewController *)arg1;

@end
