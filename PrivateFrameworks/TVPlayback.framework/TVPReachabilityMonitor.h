
@interface TVPReachabilityMonitor : NSObject {
    unsigned long long  _networkType;
    struct __SCNetworkReachability { } * _reachability;
}

@property (nonatomic, readonly) bool isNetworkReachable;
@property (nonatomic, readonly) bool isWifiEnabled;
@property (nonatomic, readonly) unsigned long long networkType;

+ (id)sharedInstance;

- (id)_init;
- (void)_reachabilityDidChange:(id)arg1;
- (void)_wifiDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isNetworkReachable;
- (bool)isWifiEnabled;
- (unsigned long long)networkType;

@end
