
@protocol HMISystemResourceUsageMonitorProtocol

@required

- (<HMISystemResourceUsageMonitorDelegate> *)delegate;
- (HMISystemResourceUsage *)getCurrentSystemResourceUsage;
- (void)setDelegate:(id <HMISystemResourceUsageMonitorDelegate>)arg1;
- (void)start;

@end
