
@interface HKHRAFibBurdenTachogramClassificationsRetriever : NSObject {
    HKCalendarCache * _calendarCache;
    id /* block */  _dateGenerator;
    HDProfile * _profile;
    HKSeriesType * _seriesType;
}

- (void).cxx_destruct;
- (bool)_shouldAnalyzeSample:(id)arg1;
- (id)_tachogramClassificationsWithPredicate:(id)arg1 tachogramClassifier:(id)arg2 error:(id*)arg3 dayIndexBlock:(id /* block */)arg4 filterBlock:(id /* block */)arg5;
- (id)_totalDatePredicateForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2;
- (id)initWithProfile:(id)arg1 calendarCache:(id)arg2;
- (id)initWithProfile:(id)arg1 dateGenerator:(id /* block */)arg2 calendarCache:(id)arg3;
- (id)tachogramClassificationsDayIndexRange:(struct { long long x1; long long x2; })arg1 tachogramClassifier:(id)arg2 error:(id*)arg3;
- (id)tachogramClassificationsForLastSixWeeksOfHoursFrom:(long long)arg1 to:(long long)arg2 julianDayToMajorityTimeZone:(id)arg3 tachogramClassifier:(id)arg4 error:(id*)arg5;
- (id)tachogramClassificationsForLastSixWeeksOfWeekday:(long long)arg1 tachogramClassifier:(id)arg2 error:(id*)arg3;

@end
