
@protocol PKContinuityPaymentCoordinatorDelegate <PKContinuityPaymentServiceDelegate>

@required

- (void)continuityPaymentCoordinator:(PKContinuityPaymentCoordinator *)arg1 didReceivePayment:(PKPayment *)arg2;
- (void)continuityPaymentCoordinator:(PKContinuityPaymentCoordinator *)arg1 didReceiveUpdatedPaymentDevices:(NSArray *)arg2;
- (void)continuityPaymentCoordinator:(PKContinuityPaymentCoordinator *)arg1 didTimeoutTotalWithPaymentDevices:(NSArray *)arg2;
- (void)continuityPaymentCoordinatorDidReceiveCancellation:(PKContinuityPaymentCoordinator *)arg1;
- (void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(PKContinuityPaymentCoordinator *)arg1;

@end
