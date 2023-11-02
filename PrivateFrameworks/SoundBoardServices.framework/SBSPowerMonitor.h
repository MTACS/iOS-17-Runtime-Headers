
@interface SBSPowerMonitor : NSObject {
    NSXPCConnection * _sbConnection;
    <SBSPowerMonitorImplementer> * _sbProxy;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)getPowerEstimateForInterval:(float)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithTarget:(id)arg1;

@end
