
@protocol HMDSiriAccessoryMonitorDelegate

@required

- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 needsSiriCapabilityForAccessory:(id)arg2;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 willAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 willNotAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitorHasNoAccessoriesForDragonSiri:(HMDSiriAccessoryMonitor *)arg1;

@end
