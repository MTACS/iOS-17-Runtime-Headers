
@interface HDSleepDaySummaryBuilder : NSObject {
    HKCalendarCache * _calendarCache;
    bool  _containsAsleepOrInBedData;
    NSDateInterval * _dateInterval;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    unsigned long long  _options;
    HDProfile * _profile;
    NSMutableArray * _sleepAnalysisSamples;
    NSMutableArray * _sleepDurationGoalSamples;
    NSMutableArray * _sleepScheduleSamples;
    <HDStatisticsCollectionCalculatorSourceOrderProvider> * _sourceOrderProvider;
    unsigned long long  _weekday;
}

@property (nonatomic, readonly) HKCalendarCache *calendarCache;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) long long morningIndex;
@property (nonatomic, readonly) long long numberOfDays;
@property (nonatomic, readonly) unsigned long long options;

+ (id)dateIntervalForDayIndexRange:(struct { long long x1; long long x2; })arg1 calendar:(id)arg2;

- (void).cxx_destruct;
- (void)addOrderedSample:(id)arg1;
- (id)applicableSleepSchedules;
- (id)calendarCache;
- (id)createDaySummary;
- (id)dateInterval;
- (id)initWithProfile:(id)arg1 dayIndexRange:(struct { long long x1; long long x2; })arg2 weekday:(unsigned long long)arg3 options:(unsigned long long)arg4 calendarCache:(id)arg5 sourceOrderProvider:(id)arg6;
- (id)initWithProfile:(id)arg1 morningIndex:(long long)arg2 weekday:(unsigned long long)arg3 options:(unsigned long long)arg4 calendarCache:(id)arg5 sourceOrderProvider:(id)arg6;
- (long long)morningIndex;
- (long long)numberOfDays;
- (unsigned long long)options;
- (id)sleepAnalysisSamples;
- (id)sleepDurationGoalSamples;
- (id)sleepScheduleSamples;

@end
