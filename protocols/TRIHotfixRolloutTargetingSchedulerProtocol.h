
@protocol TRIHotfixRolloutTargetingSchedulerProtocol <NSObject>

@required

- (void)scheduleHotfixForDeployment:(TRIRolloutDeployment *)arg1 allowingAnyNetworkingAndBatteryUsage:(bool)arg2 runDelay:(double)arg3;

@end
