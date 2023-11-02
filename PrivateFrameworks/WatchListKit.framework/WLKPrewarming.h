
@interface WLKPrewarming : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_connection;
- (id)_init;
- (void)_onQueue_prewarmDevice;
- (id)init;
- (void)prewarm;
- (void)prewarmDevice;
- (void)prewarmDeviceAndNetwork;
- (void)prewarmSubscriptionData;
- (void)prewarmWithConfigCachePolicy:(unsigned long long)arg1;

@end
