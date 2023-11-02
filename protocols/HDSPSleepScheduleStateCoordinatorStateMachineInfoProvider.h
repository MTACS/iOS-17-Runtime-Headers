
@protocol HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (bool)isAppleWatch;
- (HKSPSleepScheduleOccurrence *)previousOccurrence;
- (bool)sleepFeaturesEnabled;
- (HKSPSleepScheduleModel *)sleepScheduleModel;

@end
