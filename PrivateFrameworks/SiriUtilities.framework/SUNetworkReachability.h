
@interface SUNetworkReachability : NSObject {
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) unsigned long long reachabilityState;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)reachabilityState;

@end
