
@interface HKHRAFibBurdenSevenDayAnalysisManager : NSObject {
    HKHRAFibBurdenAnalyzer * _analyzer;
    HKCalendarCache * _calendarCache;
    id /* block */  _dateGenerator;
    HKHRAFibBurdenSevenDayAnalysisModeDeterminer * _modeDeterminer;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)_createBurdenSampleWithPercentage:(double)arg1 burdenPercentageWasClampedToLowerBound:(bool)arg2 range:(struct { long long x1; long long x2; })arg3 shouldSaveSampleToDatabase:(bool)arg4 error:(id*)arg5;
- (struct { long long x1; long long x2; })_determineDayIndexRangeForPreviousCalendarWeekWithCurrentDate:(id)arg1;
- (bool)_isDayOneDayAfterCalendarWeekWithCurrentDate:(id)arg1;
- (id)analyzePreviousCalendarWeekWithFeatureStatus:(id)arg1 shouldSaveSampleToDatabase:(bool)arg2 breadcrumbManager:(id)arg3 error:(id*)arg4;
- (id)initWithProfile:(id)arg1 analyzer:(id)arg2;
- (id)initWithProfile:(id)arg1 modeDeterminer:(id)arg2 analyzer:(id)arg3 calendarCache:(id)arg4 dateGenerator:(id /* block */)arg5;

@end
