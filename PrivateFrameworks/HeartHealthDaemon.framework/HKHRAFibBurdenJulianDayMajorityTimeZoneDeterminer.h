
@interface HKHRAFibBurdenJulianDayMajorityTimeZoneDeterminer : NSObject {
    HKCalendarCache * _calendarCache;
    HDProfile * _profile;
    HKSeriesType * _seriesType;
}

- (void).cxx_destruct;
- (id)_totalDatePredicateForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2;
- (id)determineJulianDayToMajorityTimeZoneForRange:(struct { long long x1; long long x2; })arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1 calendarCache:(id)arg2;

@end
