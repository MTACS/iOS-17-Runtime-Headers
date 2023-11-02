
@protocol ICMonitoredAccountStoreObserver <NSObject>

@optional

- (void)monitoredAccountStore:(ICMonitoredAccountStore *)arg1 didAddAccount:(ACAccount *)arg2;
- (void)monitoredAccountStore:(ICMonitoredAccountStore *)arg1 didChangeCredentialsForAccount:(ACAccount *)arg2;
- (void)monitoredAccountStore:(ICMonitoredAccountStore *)arg1 didRemoveAccount:(ACAccount *)arg2;
- (void)monitoredAccountStore:(ICMonitoredAccountStore *)arg1 didUpdateAccount:(ACAccount *)arg2;

@end
