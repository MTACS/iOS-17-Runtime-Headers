
@interface HDMCDaySummaryEnumerator : NSObject {
    bool  _ascending;
    HKCalendarCache * _calendarCache;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    HDMultiTypeSortedSampleIterator * _iterator;
    NSArray * _orderedWatchSources;
    HDProfile * _profile;
}

@property (nonatomic, readonly, copy) NSArray *orderedWatchSources;

+ (id)daySummariesInIndexRange:(struct { long long x1; long long x2; })arg1 profile:(id)arg2 calendarCache:(id)arg3 error:(id*)arg4;
+ (id)daySummaryAtIndex:(long long)arg1 profile:(id)arg2 calendarCache:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_addSample:(id)arg1 toBuilders:(id)arg2 atDayIndex:(long long)arg3;
- (void)_addSample:(id)arg1 toBuilders:(id)arg2 inRange:(struct { long long x1; long long x2; })arg3;
- (void)_addSample:(id)arg1 toBuilders:(id)arg2 sampleRange:(struct { long long x1; long long x2; })arg3;
- (void)_closeBuilders:(id)arg1 withIndexes:(id)arg2 handler:(id /* block */)arg3 stop:(bool*)arg4;
- (bool)enumerateWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1 calendarCache:(id)arg2 dayIndexRange:(struct { long long x1; long long x2; })arg3 ascending:(bool)arg4 includeFactors:(bool)arg5 includeWristTemperature:(bool)arg6;
- (id)orderedWatchSources;

@end
