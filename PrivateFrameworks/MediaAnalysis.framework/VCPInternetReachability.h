
@interface VCPInternetReachability : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _hasWifiOrEthernetConnection;
    struct __SCNetworkReachability { } * _reachability;
}

@property (nonatomic, readonly) bool hasWifiOrEthernetConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)hasWifiOrEthernetConnection;
- (id)init;
- (void)setReachabilityForFlags:(unsigned int)arg1 update:(bool)arg2;

@end
