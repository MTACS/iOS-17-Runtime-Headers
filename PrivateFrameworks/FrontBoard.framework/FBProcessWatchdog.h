
@interface FBProcessWatchdog : FBSProcessWatchdog {
    FBProcessCPUStatistics * _cpuStatistics;
    long long  _event;
    FBProcessWatchdogEventContext * _eventContext;
    RBSProcessHandle * _handle;
}

@property (nonatomic, readonly, retain) FBProcessCPUStatistics *cpuStatistics;
@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly, retain) FBProcessWatchdogEventContext *eventContext;

- (void).cxx_destruct;
- (id)_policyDesc;
- (void)activate;
- (id)cpuStatistics;
- (long long)event;
- (id)eventContext;
- (id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3;

@end
