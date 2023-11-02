
@interface NFReachability : NSObject {
    NSObject<OS_nw_path> * _currentNetworkPath;
    long long  _currentReachabilityStatus;
    NSObject<OS_nw_path_monitor> * _networkPathMonitor;
    NSObject<OS_dispatch_queue> * _observationQueue;
}

@property (nonatomic, retain) NSObject<OS_nw_path> *currentNetworkPath;
@property long long currentReachabilityStatus;
@property (nonatomic, retain) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observationQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)_statusFromNetworkPath:(id)arg1;
- (void)_updateCurrentNetworkPath:(id)arg1;
- (id)currentNetworkPath;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (id)init;
- (id)networkPathMonitor;
- (id)observationQueue;
- (void)setCurrentNetworkPath:(id)arg1;
- (void)setCurrentReachabilityStatus:(long long)arg1;
- (void)setNetworkPathMonitor:(id)arg1;
- (void)setObservationQueue:(id)arg1;

@end
