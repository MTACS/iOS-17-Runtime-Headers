
@protocol HDSPWakeDetectionStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (unsigned long long)activeTypes;
- (NSDate *)currentDate;
- (NSDateInterval *)detectionWindowForType:(unsigned long long)arg1;
- (bool)isWatch;
- (NSDate *)nextWakeUp;
- (HKSPSleepScheduleOccurrence *)relevantOccurrence;
- (bool)sleepModeIsOff;
- (HKSPSleepScheduleModel *)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;
- (NSDate *)upcomingStartDetection;

@end
