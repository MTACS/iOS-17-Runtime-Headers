
@interface SPNetworkMonitor : NSObject {
    id /* block */  _block;
    bool  _cachedIsNetworkUp;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NWPathEvaluator * _evaluator;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) bool cachedIsNetworkUp;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NWPathEvaluator *evaluator;

- (void).cxx_destruct;
- (id /* block */)block;
- (bool)cachedIsNetworkUp;
- (id)callbackQueue;
- (id)evaluator;
- (bool)isMonitoring;
- (bool)isNetworkUp;
- (void)notifyNetworkStateChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setBlock:(id /* block */)arg1;
- (void)setCachedIsNetworkUp:(bool)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setEvaluator:(id)arg1;
- (void)startMonitoringWithCallback:(id /* block */)arg1;
- (void)stopMonitoring;

@end
