
@interface HKSleepDaySummary : NSObject <HKRedactedDescription, HKSampleAggregateCacheProviding, NSCopying, NSSecureCoding> {
    NSCalendar * _calendar;
    NSDateInterval * _dateInterval;
    _HKSleepDaySummaryDurations * _durations;
    long long  _morningIndex;
    NSArray * _periods;
    NSArray * _schedules;
    HKQuantity * _sleepDurationGoal;
}

@property (nonatomic, readonly) double awakeDuration;
@property (nonatomic, readonly, copy) NSCalendar *calendar;
@property (nonatomic, readonly) bool containsPeriodsWithAppleSleepTrackingData;
@property (nonatomic, readonly) double coreSleepDuration;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double deepSleepDuration;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _HKSleepDaySummaryDurations *durations;
@property (nonatomic, readonly) bool hasSleepStageData;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) double hui_durationOfSleep;
@property (nonatomic, readonly) NSDate *hui_endOfSleep;
@property (nonatomic, readonly) NSDate *hui_startOfSleep;
@property (nonatomic, readonly) double hui_startOfSleepOffset;
@property (nonatomic, readonly) double inBedDuration;
@property (nonatomic, readonly) bool isWeeklyAggregatedSummary;
@property (nonatomic, readonly) long long morningIndex;
@property (nonatomic, readonly, copy) NSArray *periods;
@property (nonatomic, readonly, copy) HKSleepSchedule *primarySchedule;
@property (nonatomic, readonly) double remSleepDuration;
@property (nonatomic, readonly, copy) NSArray *schedules;
@property (nonatomic, readonly) double sleepDuration;
@property (nonatomic, readonly, copy) HKQuantity *sleepDurationGoal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double unspecifiedSleepDuration;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)daySummaryWithMorningIndex:(long long)arg1 dateInterval:(id)arg2 calendar:(id)arg3 periods:(id)arg4 schedules:(id)arg5 sleepDurationGoal:(id)arg6;
+ (id)emptyDaySummaryWithMorningIndex:(long long)arg1 dateInterval:(id)arg2 calendar:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)awakeDuration;
- (long long)bucketIndexForIntervalComponents:(id)arg1 anchorDate:(id)arg2;
- (id)calendar;
- (bool)containsPeriodsWithAppleSleepTrackingData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)coreSleepDuration;
- (id)dateInterval;
- (double)deepSleepDuration;
- (id)description;
- (id)durations;
- (void)encodeWithCoder:(id)arg1;
- (bool)getData:(id*)arg1 error:(id*)arg2;
- (bool)hasSleepStageData;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (double)inBedDuration;
- (id)initWithCoder:(id)arg1;
- (id)initWithMorningIndex:(long long)arg1 dateInterval:(id)arg2 calendar:(id)arg3 periods:(id)arg4 schedules:(id)arg5 sleepDurationGoal:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isWeeklyAggregatedSummary;
- (long long)morningIndex;
- (id)periods;
- (id)primarySchedule;
- (double)remSleepDuration;
- (id)schedules;
- (double)sleepDuration;
- (id)sleepDurationGoal;
- (double)unspecifiedSleepDuration;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)_aggregateWeeklySummaryFromDailySummaries:(id)arg1 calendar:(id)arg2 strategy:(unsigned long long)arg3;
+ (id)_computeAveragePeriodsFromSummaries:(id)arg1 summaryDateInterval:(id)arg2;
+ (id)_computeProbablePeriodsFromSummaries:(id)arg1 summaryDateInterval:(id)arg2;
+ (id)_endOfWeekContainingDate:(id)arg1 calendar:(id)arg2;
+ (double)_findMidPointOffsetForSummary:(id)arg1 sleepCategory:(long long)arg2;
+ (id)_lastNonEmptySchedules:(id)arg1;
+ (id)_lastNonZeroDurationGoal:(id)arg1;
+ (id)aggregateWeeklySummariesFromDailySummaries:(id)arg1 firstWeekdayOverride:(id)arg2 strategy:(unsigned long long)arg3;

- (id)_secondsFromSummaryStartDateForDateComponents:(id)arg1;
- (id)firstStartDateMatchingSleepValues:(id)arg1;
- (id)hk_bedtimeGoalValue;
- (id)hk_sleepDurationGoalValue;
- (id)hk_wakeTimeGoalValue;
- (double)hkui_durationForSleepCategoryValue:(long long)arg1;
- (id)hkui_somnogramChartDateInterval;
- (double)hui_durationOfSleep;
- (id)hui_endOfSleep;
- (id)hui_startOfSleep;
- (double)hui_startOfSleepOffset;
- (id)lastEndDateMatchingSleepValues:(id)arg1;
- (id)maxYValue;
- (id)minYValue;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

- (void)hdsp_enumerateFirstPartyWatchSleepTrackingSegmentsWithBlock:(id /* block */)arg1;

@end
