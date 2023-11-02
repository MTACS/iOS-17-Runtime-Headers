
@protocol NPKContactlessPaymentSessionManagerObserver <NSObject>

@required

- (void)contactlessPaymentSessionManager:(NPKContactlessPaymentSessionManager *)arg1 didChangeSessionState:(NPKContactlessPaymentSessionState *)arg2;

@end
