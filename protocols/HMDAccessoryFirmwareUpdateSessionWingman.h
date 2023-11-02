
@protocol HMDAccessoryFirmwareUpdateSessionWingman

@required

- (unsigned long long)initialSessionState;
- (HMDAccessoryFirmwareUpdateScheduler *)newSchedulerWithAccessory:(HMDHAPAccessory *)arg1 firmwareUpdateSession:(HMDAccessoryFirmwareUpdateSession *)arg2 workQueue:(NSObject<OS_dispatch_queue> *)arg3;

@end
