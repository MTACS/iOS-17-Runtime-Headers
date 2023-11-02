
@protocol HKSPSleepClient <HKSPClient>

@required

- (void)sleepEventOccurred:(HKSPSleepEvent *)arg1;
- (void)sleepEventRecordChanged:(HKSPSleepEventRecord *)arg1 clientIdentifier:(HKSPXPCClientIdentifier *)arg2;
- (void)sleepModeChanged:(HKSPSleepModeObject *)arg1;
- (void)sleepScheduleChanged:(HKSPSleepSchedule *)arg1 clientIdentifier:(HKSPXPCClientIdentifier *)arg2;
- (void)sleepScheduleStateChanged:(HKSPSleepScheduleStateObject *)arg1;
- (void)sleepSettingsChanged:(HKSPSleepSettings *)arg1 clientIdentifier:(HKSPXPCClientIdentifier *)arg2;

@end
