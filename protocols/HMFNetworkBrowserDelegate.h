
@protocol HMFNetworkBrowserDelegate <NSObject>

@optional

- (void)browser:(HMFNetworkBrowser *)arg1 didFindNetworkService:(HMFNetworkService *)arg2;
- (void)browser:(HMFNetworkBrowser *)arg1 didLoseNetworkService:(HMFNetworkService *)arg2;
- (void)browser:(HMFNetworkBrowser *)arg1 didStartBrowsingForServiceType:(NSString *)arg2;
- (void)browser:(HMFNetworkBrowser *)arg1 didStopBrowsingForServiceType:(NSString *)arg2;
- (void)browser:(HMFNetworkBrowser *)arg1 didUpdateNetworkService:(HMFNetworkService *)arg2;

@end
