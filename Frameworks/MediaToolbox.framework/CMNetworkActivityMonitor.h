
@interface CMNetworkActivityMonitor : NSObject {
    CMNetworkActivityObserver * _cmObserver;
    long long  _monitoringActiveCount;
    bool  _networkIsActive;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _showingNetworkActivityCount;
}

@property (setter=setCMObserver:, nonatomic, retain) CMNetworkActivityObserver *cmObserver;
@property (nonatomic) long long monitoringActiveCount;
@property (nonatomic) bool networkIsActive;
@property (nonatomic) long long showingNetworkActivityCount;

+ (id)sharedActivityMonitor;

- (void)beginMonitoring;
- (id)cmObserver;
- (void)dealloc;
- (void)endMonitoring;
- (id)init;
- (long long)monitoringActiveCount;
- (bool)networkIsActive;
- (void)setCMObserver:(id)arg1;
- (void)setMonitoringActiveCount:(long long)arg1;
- (void)setNetworkIsActive:(bool)arg1;
- (void)setShowingNetworkActivityCount:(long long)arg1;
- (long long)showingNetworkActivityCount;

@end
