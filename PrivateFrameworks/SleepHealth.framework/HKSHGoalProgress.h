
@interface HKSHGoalProgress : NSObject {
    HKQuantity * _averageAwakeDuration;
    NSDateComponents * _averageBedtime;
    HKQuantity * _averageBedtimeMiss;
    HKQuantity * _averageCoreSleepDuration;
    HKQuantity * _averageDeepSleepDuration;
    HKQuantity * _averageInBedDuration;
    NSDateComponents * _averageInBedEndTime;
    NSDateComponents * _averageInBedStartTime;
    HKQuantity * _averageREMSleepDuration;
    HKQuantity * _averageSleepDuration;
    HKQuantity * _averageSleepDurationGoalMiss;
    NSDateComponents * _averageSleepEndTime;
    NSDateComponents * _averageSleepStartTime;
    HKQuantity * _averageUnspecifiedSleepDuration;
    NSDateComponents * _averageWakeTime;
    long long  _bedtimeAchievedCount;
    struct { 
        long long start; 
        long long duration; 
    }  _morningIndexRange;
    long long  _sleepAnalysisAsleepCount;
    long long  _sleepAnalysisCount;
    long long  _sleepAnalysisInBedCount;
    long long  _sleepDurationGoalAchievedCount;
    long long  _sleepDurationGoalStreakCount;
    NSNumber * _standardDeviationActualTimeAsleep;
    NSNumber * _standardDeviationActualVsScheduledTimeAsleep;
    NSNumber * _standardDeviationScheduledTimeAsleep;
}

@property (nonatomic, readonly, copy) HKQuantity *averageAwakeDuration;
@property (nonatomic, readonly, copy) NSDateComponents *averageBedtime;
@property (nonatomic, readonly, copy) HKQuantity *averageBedtimeMiss;
@property (nonatomic, readonly, copy) HKQuantity *averageCoreSleepDuration;
@property (nonatomic, readonly, copy) HKQuantity *averageDeepSleepDuration;
@property (nonatomic, readonly, copy) HKQuantity *averageInBedDuration;
@property (nonatomic, readonly, copy) NSDateComponents *averageInBedEndTime;
@property (nonatomic, readonly, copy) NSDateComponents *averageInBedStartTime;
@property (nonatomic, readonly, copy) HKQuantity *averageREMSleepDuration;
@property (nonatomic, readonly, copy) HKQuantity *averageSleepDuration;
@property (nonatomic, readonly, copy) HKQuantity *averageSleepDurationGoalMiss;
@property (nonatomic, readonly, copy) NSDateComponents *averageSleepEndTime;
@property (nonatomic, readonly, copy) NSDateComponents *averageSleepStartTime;
@property (nonatomic, readonly, copy) HKQuantity *averageUnspecifiedSleepDuration;
@property (nonatomic, readonly, copy) NSDateComponents *averageWakeTime;
@property (nonatomic, readonly) long long bedtimeAchievedCount;
@property (nonatomic, readonly) struct { long long x1; long long x2; } morningIndexRange;
@property (nonatomic, readonly) long long sleepAnalysisAsleepCount;
@property (nonatomic, readonly) long long sleepAnalysisCount;
@property (nonatomic, readonly) long long sleepAnalysisInBedCount;
@property (nonatomic, readonly) long long sleepDurationGoalAchievedCount;
@property (nonatomic, readonly) long long sleepDurationGoalStreakCount;
@property (nonatomic, readonly, copy) NSNumber *standardDeviationActualTimeAsleep;
@property (nonatomic, readonly, copy) NSNumber *standardDeviationActualVsScheduledTimeAsleep;
@property (nonatomic, readonly, copy) NSNumber *standardDeviationScheduledTimeAsleep;

+ (id)goalProgressWithMorningIndexRange:(struct { long long x1; long long x2; })arg1 sleepAnalysisAsleepCount:(long long)arg2 sleepAnalysisInBedCount:(long long)arg3 sleepAnalysisCount:(long long)arg4 averageSleepDuration:(id)arg5 averageInBedDuration:(id)arg6 averageREMSleepDuration:(id)arg7 averageCoreSleepDuration:(id)arg8 averageDeepSleepDuration:(id)arg9 averageUnspecifiedSleepDuration:(id)arg10 averageAwakeDuration:(id)arg11 bedtimeAchievedCount:(long long)arg12 sleepDurationGoalAchievedCount:(long long)arg13 sleepDurationGoalStreakCount:(long long)arg14 averageBedtimeMiss:(id)arg15 averageSleepDurationGoalMiss:(id)arg16 averageBedtime:(id)arg17 averageWakeTime:(id)arg18 averageInBedStartTime:(id)arg19 averageInBedEndTime:(id)arg20 averageSleepStartTime:(id)arg21 averageSleepEndTime:(id)arg22 standardDeviationActualTimeAsleep:(id)arg23 standardDeviationScheduledTimeAsleep:(id)arg24 standardDeviationActualVsScheduledTimeAsleep:(id)arg25;

- (void).cxx_destruct;
- (id)averageAwakeDuration;
- (id)averageBedtime;
- (id)averageBedtimeMiss;
- (id)averageCoreSleepDuration;
- (id)averageDeepSleepDuration;
- (id)averageInBedDuration;
- (id)averageInBedEndTime;
- (id)averageInBedStartTime;
- (id)averageREMSleepDuration;
- (id)averageSleepDuration;
- (id)averageSleepDurationGoalMiss;
- (id)averageSleepEndTime;
- (id)averageSleepStartTime;
- (id)averageUnspecifiedSleepDuration;
- (id)averageWakeTime;
- (long long)bedtimeAchievedCount;
- (struct { long long x1; long long x2; })morningIndexRange;
- (long long)sleepAnalysisAsleepCount;
- (long long)sleepAnalysisCount;
- (long long)sleepAnalysisInBedCount;
- (long long)sleepDurationGoalAchievedCount;
- (long long)sleepDurationGoalStreakCount;
- (id)standardDeviationActualTimeAsleep;
- (id)standardDeviationActualVsScheduledTimeAsleep;
- (id)standardDeviationScheduledTimeAsleep;

@end
