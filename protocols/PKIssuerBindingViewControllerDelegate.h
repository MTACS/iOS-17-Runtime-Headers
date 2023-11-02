
@protocol PKIssuerBindingViewControllerDelegate <NSObject>

@required

- (void)issuerBindingViewController:(PKIssuerBindingViewController *)arg1 didFinishWithPassesData:(NSArray *)arg2;
- (void)issuerBindingViewControllerDidCancel:(PKIssuerBindingViewController *)arg1;

@end
