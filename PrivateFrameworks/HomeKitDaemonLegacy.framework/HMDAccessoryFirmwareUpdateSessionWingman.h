
@interface HMDAccessoryFirmwareUpdateSessionWingman : NSObject <HMDAccessoryFirmwareUpdateSessionWingman>

@property (readonly) unsigned long long initialSessionState;

- (unsigned long long)initialSessionState;
- (id)newSchedulerWithAccessory:(id)arg1 firmwareUpdateSession:(id)arg2 workQueue:(id)arg3;

@end
