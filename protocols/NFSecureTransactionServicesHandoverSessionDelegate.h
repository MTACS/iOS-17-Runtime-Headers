
@protocol NFSecureTransactionServicesHandoverSessionDelegate <NSObject>

@required

- (void)connectionHandoverCompleted:(NFSecureTransactionServicesHandoverSession *)arg1;
- (void)session:(NFSecureTransactionServicesHandoverSession *)arg1 connectionHandoverProcessFailure:(NSError *)arg2;
- (void)session:(NFSecureTransactionServicesHandoverSession *)arg1 fieldNotification:(NFFieldNotification *)arg2;
- (void)session:(NFSecureTransactionServicesHandoverSession *)arg1 tnepService:(NSString *)arg2;

@optional

- (void)session:(NFSecureTransactionServicesHandoverSession *)arg1 didEndUnexpectedly:(NSError *)arg2;
- (void)session:(NFSecureTransactionServicesHandoverSession *)arg1 fieldChange:(bool)arg2;

@end
