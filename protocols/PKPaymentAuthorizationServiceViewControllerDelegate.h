
@protocol PKPaymentAuthorizationServiceViewControllerDelegate <NSObject>

@required

- (void)authorizationViewControllerDidChangeCoachingState:(PKPaymentAuthorizationServiceViewController *)arg1;
- (void)authorizationViewControllerDidChangePhysicalButtonState:(PKPaymentAuthorizationServiceViewController *)arg1;
- (void)authorizationViewControllerDidRequestPaymentSetup;

@end
