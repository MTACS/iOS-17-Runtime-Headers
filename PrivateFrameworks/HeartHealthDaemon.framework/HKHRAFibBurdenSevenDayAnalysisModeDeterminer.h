
@interface HKHRAFibBurdenSevenDayAnalysisModeDeterminer : NSObject {
    HKCalendarCache * _calendarCache;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)_mostRecentSampleEndDateDayIndexWithError:(id*)arg1;
- (id)_onboardingDateDayIndexWithFeatureStatus:(id)arg1 error:(id*)arg2;
- (id)determineModeForAnalysisWeekRange:(struct { long long x1; long long x2; })arg1 featureStatus:(id)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1 calendarCache:(id)arg2;

@end
