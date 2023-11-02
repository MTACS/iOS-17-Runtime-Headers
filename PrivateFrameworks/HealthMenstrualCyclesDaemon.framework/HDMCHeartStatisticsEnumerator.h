
@interface HDMCHeartStatisticsEnumerator : NSObject {
    HKCalendarCache * _calendarCache;
    HDAssertion * _databaseAccessibilityAssertion;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)_asleepSleepAnalysisDateIntervalTreeOnDayIndex:(long long)arg1 calendar:(id)arg2 error:(id*)arg3;
- (id)_cachingSessionWithCalendar:(id)arg1 error:(id*)arg2;
- (id)_heartStatisticsForDayIndex:(long long)arg1 calendar:(id)arg2 errorOut:(id*)arg3;
- (bool)enumerateWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1 calendarCache:(id)arg2 dayIndexRange:(struct { long long x1; long long x2; })arg3 databaseAccessibilityAssertion:(id)arg4;

@end
