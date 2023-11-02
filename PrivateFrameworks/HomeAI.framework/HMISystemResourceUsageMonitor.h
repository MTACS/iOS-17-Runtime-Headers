
@interface HMISystemResourceUsageMonitor : HMFObject <HMISystemResourceUsageMonitorProtocol> {
    HMISystemResourceUsageMonitorImpl * _systemResourceUsageMonitorImpl;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property <HMISystemResourceUsageMonitorDelegate> *delegate;
@property (readonly) HMISystemResourceUsageMonitorImpl *systemResourceUsageMonitorImpl;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)delegate;
- (id)getCurrentSystemResourceUsage;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)systemResourceUsageMonitorImpl;
- (id)workQueue;

@end
