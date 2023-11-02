
@protocol HDSPSleepModeStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (bool)hasSleepFocusMode;
- (bool)isAppleWatch;
- (bool)shouldGoIntoSleepModeDuringState:(unsigned long long)arg1;
- (bool)sleepFeaturesEnabled;
- (HKSPSleepScheduleModel *)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;

@end
