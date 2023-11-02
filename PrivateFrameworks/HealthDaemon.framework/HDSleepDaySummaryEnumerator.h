
@interface HDSleepDaySummaryEnumerator : NSObject {
    NSMutableDictionary * _adjustedMorningIndexCache;
    bool  _ascending;
    long long  _cachedFirstDayOfWeek;
    HDSampleAggregateCachingSession * _cachingSession;
    HKCalendarCache * _calendarCache;
    NSString * _debugIdentifier;
    struct { 
        long long start; 
        long long duration; 
    }  _morningIndexRange;
    unsigned long long  _options;
    HDProfile * _profile;
    NSMutableDictionary * _schedulesByWeekday;
    HKQuantitySample * _sleepDurationGoalSample;
    <HDStatisticsCollectionCalculatorSourceOrderProvider> * _sourceOrderProvider;
}

+ (id)sleepAnalysisQueryDescriptorForDateInterval:(id)arg1 options:(unsigned long long)arg2;
+ (id)sleepTypesQueryDescriptorsForDateInterval:(id)arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)enumerateWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1 cachingSession:(id)arg2 calendarCache:(id)arg3 morningIndexRange:(struct { long long x1; long long x2; })arg4 ascending:(bool)arg5 options:(unsigned long long)arg6 debugIdentifier:(id)arg7;

@end
