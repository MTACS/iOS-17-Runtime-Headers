
@interface __HMFNetAddressMonitor : HMFNetMonitor {
    unsigned int  _currentNetworkFlags;
    HMFNetAddress * _netAddress;
    struct __SCNetworkReachability { } * _networkReachabilityRef;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) unsigned int currentNetworkFlags;
@property (nonatomic, readonly) struct __SCNetworkReachability { }*networkReachabilityRef;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned int)currentNetworkFlags;
- (void)dealloc;
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;
- (id)init;
- (id)initWithNetAddress:(id)arg1;
- (id)initWithNetService:(id)arg1;
- (id)logIdentifier;
- (id)netAddress;
- (struct __SCNetworkReachability { }*)networkReachabilityRef;
- (unsigned long long)reachabilityPath;
- (void)setCurrentNetworkFlags:(unsigned int)arg1;
- (id)shortDescription;

@end
