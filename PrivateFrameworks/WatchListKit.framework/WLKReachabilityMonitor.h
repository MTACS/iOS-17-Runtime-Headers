
@interface WLKReachabilityMonitor : NSObject

@property (nonatomic, readonly) bool isNetworkReachable;
@property (nonatomic, readonly) bool isWifiEnabled;

+ (id)sharedInstance;

- (id)_init;
- (void)_reachabilityDidChange:(id)arg1;
- (void)_wifiDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isNetworkReachable;
- (bool)isWifiEnabled;

@end
