
@interface HKInteractiveChartOverlaySleepViewController : HKInteractiveChartOverlayViewController <HKSleepStageDayAxisDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_customDateAxisForTimeScope:(long long)arg1 segmentIndex:(long long)arg2 sectionIndex:(long long)arg3 currentCalendar:(id)arg4;
- (id)_dayTimeScopeDateAxisStyleWithTextAlignment:(long long)arg1 hyphenationFactor:(id)arg2;
- (bool)_isSleepSeries:(id)arg1;
- (id)_sleepAnalysisDayAxisWithCalendar:(id)arg1;
- (id)_sleepComparisonDayAxisWithCalendar:(id)arg1;
- (id)_sleepStageDayAxisWithCalendar:(id)arg1;
- (id)_sleepStageDurationDayAxisWithCalendar:(id)arg1;
- (id)addNoDataEntries:(id)arg1 timeScope:(long long)arg2 targetSeries:(id)arg3;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)dateRangeFromSelectionContext:(id)arg1 timeScope:(long long)arg2;
- (long long)defaultAlignmentForTimeScope:(long long)arg1;
- (id)descriptionForStartX:(double)arg1 endX:(double)arg2 chartData:(id)arg3 timeScope:(long long)arg4 resolution:(long long)arg5 graphView:(id)arg6;
- (long long)effectiveAnnotationTimeScopeForTimeScope:(long long)arg1 displayType:(id)arg2 segmentIndex:(long long)arg3 sectionIndex:(long long)arg4;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(bool)arg3 changeContext:(long long)arg4;
- (id)makePrimaryGraphViewControllerWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3 currentCalendar:(id)arg4;
- (id)sleepDaySummaryForDate:(id)arg1;
- (id)stringForValueRange:(id)arg1 timeScope:(long long)arg2;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4;

@end
