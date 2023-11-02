
@protocol EMRemoteConnectionRecoveryAssertionDelegate <NSObject>

@required

- (void)voucherInitialized;
- (void)voucherInvalidated;

@end
