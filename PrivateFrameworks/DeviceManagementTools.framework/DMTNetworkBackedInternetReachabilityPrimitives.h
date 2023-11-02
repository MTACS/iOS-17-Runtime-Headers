
@interface DMTNetworkBackedInternetReachabilityPrimitives : NSObject <DMTInternetReachabilityPrimitives> {
    NWPathEvaluator * _pathEvaluator;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
    NSObject<OS_dispatch_queue> * _reachabilityMonitorQueue;
    bool  _reachable;
    id /* block */  _statusChangedBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NWPathEvaluator *pathEvaluator;
@property (nonatomic, readonly) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *reachabilityMonitorQueue;
@property (nonatomic) bool reachable;
@property (nonatomic, copy) id /* block */ statusChangedBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)pathDidChange:(id)arg1;
- (id)pathEvaluator;
- (id)pathMonitor;
- (id)reachabilityMonitorQueue;
- (bool)reachable;
- (void)setReachable:(bool)arg1;
- (void)setStatusChangedBlock:(id /* block */)arg1;
- (id /* block */)statusChangedBlock;

@end
