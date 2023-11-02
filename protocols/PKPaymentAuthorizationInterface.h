
@protocol PKPaymentAuthorizationInterface <NSObject>

@required

- (UIViewController *)primaryViewController;

@optional

- (void)didAppear;
- (void)invalidate;
- (<PKPaymentAuthorizationServiceProtocol> *)serviceDelegate;
- (bool)shouldBlockHardwareCancels;
- (void)willAppear;

@end
