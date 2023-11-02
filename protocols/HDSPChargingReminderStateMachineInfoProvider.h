
@protocol HDSPChargingReminderStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (NSDate *)currentDate;
- (bool)isCharging;
- (NSDateInterval *)monitoringWindowAfterDate:(NSDate *)arg1;
- (bool)sleepFeaturesEnabled;
- (HKSPSleepScheduleModel *)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;

@end
