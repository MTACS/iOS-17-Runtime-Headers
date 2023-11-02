
@protocol PKPeerPaymentServiceObserver <NSObject>

@optional

- (void)pendingRequestsChanged;
- (void)recurringPaymentsChanged;

@end
