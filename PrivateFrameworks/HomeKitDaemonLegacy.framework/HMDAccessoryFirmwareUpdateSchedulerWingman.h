
@interface HMDAccessoryFirmwareUpdateSchedulerWingman : NSObject <HMDAccessoryFirmwareUpdateSchedulerWingman>

@property (readonly) NSNotificationCenter *notificationCenter;

- (id)newBackgroundSchedulerWithIdentifier:(id)arg1;
- (id)newInitialDelayTimerWithDelay:(double)arg1 options:(unsigned long long)arg2;
- (id)notificationCenter;
- (id)policyForAccessory:(id)arg1 sessionState:(unsigned long long)arg2 workQueue:(id)arg3;

@end
