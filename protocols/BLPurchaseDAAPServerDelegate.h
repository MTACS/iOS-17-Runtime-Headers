
@protocol BLPurchaseDAAPServerDelegate

@required

- (void)purchaseServerHandleClientExpired;
- (void)purchaseServerRequestITunesAuthentication;

@end
