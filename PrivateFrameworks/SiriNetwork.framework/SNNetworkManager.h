
@interface SNNetworkManager : NSObject <SNNetworkManagerObserverInternal> {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    SNNetworkManagerInternal * _underlyingNetworkManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SNNetworkManagerInternal *underlyingNetworkManager;

+ (void)acquireDormancySuspendAssertion:(const void**)arg1;
+ (void)releaseDormancySuspendAssertion:(const void**)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)acquireWiFiAssertion:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)forceFastDormancy;
- (void)getLinkRecommendation:(bool)arg1 recommendation:(id /* block */)arg2;
- (void)getLinkRecommendationMetrics:(id /* block */)arg1;
- (void)networkManagerLostNonWWANConnectivity:(id)arg1;
- (void)networkManagerNetworkUnreachable:(id)arg1;
- (void)networkManagerNonWWANDidBecomeAvailable:(id)arg1;
- (void)registerClient;
- (void)releaseWiFiAssertion;
- (void)removeObserver:(id)arg1;
- (void)setUnderlyingNetworkManager:(id)arg1;
- (void)startMonitoringNetworkForHost:(id)arg1;
- (void)stopMonitoringNetwork;
- (void)subscribeLinkRecommendation:(id /* block */)arg1;
- (id)underlyingNetworkManager;
- (void)unregisterClient;

@end
