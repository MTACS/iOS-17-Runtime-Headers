
@interface FMNetworkMonitor : NSObject {
    NWPathEvaluator * _evaluator;
}

@property (nonatomic, retain) NWPathEvaluator *evaluator;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)evaluator;
- (bool)isMonitoring;
- (bool)isNetworkUp;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)registerNetworkMonitorLaunchEvent:(bool)arg1;
- (void)setEvaluator:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
