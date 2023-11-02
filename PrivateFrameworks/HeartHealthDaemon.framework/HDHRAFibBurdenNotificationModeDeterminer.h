
@interface HDHRAFibBurdenNotificationModeDeterminer : NSObject {
    HKCalendarCache * _calendarCache;
    id /* block */  _dateGenerator;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (struct { long long x1; long long x2; })_dayIndexRangeFromSample:(id)arg1;
- (void)_extractFromSample:(id)arg1 percentageValue:(id*)arg2 isClamped:(id*)arg3;
- (bool)_isPreviousSampleSevenDaysBeforeCurrentSample:(id)arg1 previousSample:(id)arg2;
- (bool)_isSampleForPreviousCalendarWeek:(id)arg1;
- (id)_noDataNotificationWithFeatureStatus:(id)arg1 onboardedWithinAnalysisInterval:(bool)arg2;
- (id)_noNotification;
- (id)_notificationWithCurrentValue:(id)arg1 errorOut:(id*)arg2;
- (id)_previousSampleFromCurrentValue:(id)arg1 error:(id*)arg2;
- (bool)_shouldShowNotificationWithEndWeekdayToFire:(long long)arg1;
- (id)initWithProfile:(id)arg1 calendarCache:(id)arg2;
- (id)initWithProfile:(id)arg1 calendarCache:(id)arg2 dateGenerator:(id /* block */)arg3;
- (id)notificationModeForCurrentValue:(id)arg1 featureStatus:(id)arg2 onboardedWithinAnalysisInterval:(bool)arg3 endWeekdayToFire:(long long)arg4 error:(id*)arg5;
- (id)notificationModeForCurrentValue:(id)arg1 featureStatus:(id)arg2 onboardedWithinAnalysisInterval:(bool)arg3 error:(id*)arg4;

@end
