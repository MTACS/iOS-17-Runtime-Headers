
@protocol FCNetworkReachabilityObserving <NSObject>

@optional

- (void)networkReachabilityDidChange:(FCNetworkReachability *)arg1;
- (void)wifiReachabilityDidChange:(FCNetworkReachability *)arg1;

@end
