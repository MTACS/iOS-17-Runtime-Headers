
@protocol HDSPTimeAsleepTrackerStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (bool)inUnscheduledSleepMode;
- (bool)inWakeDetectionWindow;
- (bool)isCharging;
- (bool)isWristDetectEnabled;
- (HKSPSleepScheduleModel *)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;
- (NSDateInterval *)trackingWindowAfterDate:(NSDate *)arg1;

@end
