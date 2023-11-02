
@protocol HMDAccessoryFirmwareUpdateSchedulerWingman

@required

- (NSBackgroundActivityScheduler *)newBackgroundSchedulerWithIdentifier:(NSString *)arg1;
- (HMFTimer *)newInitialDelayTimerWithDelay:(double)arg1 options:(unsigned long long)arg2;
- (NSNotificationCenter *)notificationCenter;
- (<HMDAccessoryFirmwareUpdatePolicy> *)policyForAccessory:(HMDHAPAccessory *)arg1 sessionState:(unsigned long long)arg2 workQueue:(NSObject<OS_dispatch_queue> *)arg3;

@end
