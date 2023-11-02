
@interface HMISystemResourceUsageMonitorImpl : HMFObject <HMISystemResourceUsageMonitorProtocol> {
    <HMISystemResourceUsageMonitorProtocol> * _resourceUsageMonitor;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property <HMISystemResourceUsageMonitorDelegate> *delegate;
@property (readonly) <HMISystemResourceUsageMonitorProtocol> *resourceUsageMonitor;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)delegate;
- (id)getCurrentSystemResourceUsage;
- (id)initWithProductClass:(long long)arg1 workQueue:(id)arg2;
- (id)resourceUsageMonitor;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)workQueue;

@end
