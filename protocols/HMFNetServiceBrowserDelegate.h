
@protocol HMFNetServiceBrowserDelegate <NSObject>

@optional

- (void)netServiceBrowser:(HMFNetServiceBrowser *)arg1 didAddService:(HMFNetService *)arg2;
- (void)netServiceBrowser:(HMFNetServiceBrowser *)arg1 didRemoveService:(HMFNetService *)arg2;
- (void)netServiceBrowser:(HMFNetServiceBrowser *)arg1 didStopBrowsingWithError:(NSError *)arg2;

@end
