
@interface HDMHDaySummaryEnumerator : NSObject {
    bool  _ascending;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    NSCalendar * _gregorianCalendar;
    HKStateOfMind * _pendingDailyStateOfMind;
    HDSQLitePredicate * _predicate;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (long long)_compareDayIndex:(long long)arg1 withDayIndex:(long long)arg2;
- (bool)_finishCurrentSummaryBuilder:(id)arg1 pendingDailyStateOfMind:(id)arg2 pendingDailyStateOfMindDayIndex:(long long)arg3 clientRequestedStop:(bool*)arg4 handler:(id /* block */)arg5;
- (id)_makeStateOfMindSampleEnumerator;
- (id)_queryPredicate;
- (bool)enumerateWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1 dayIndexRange:(struct { long long x1; long long x2; })arg2 gregorianCalendar:(id)arg3 predicate:(id)arg4 pendingDailyStateOfMind:(id)arg5 ascending:(bool)arg6;

@end
