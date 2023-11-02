
@interface HKSleepStageDurationDaySeries : HKSleepStageDurationSeries {
    NSCalendar * _currentCalendar;
}

@property (nonatomic, retain) NSCalendar *currentCalendar;

- (void).cxx_destruct;
- (id)_buildSleepDurationCoordinateWithDurationValue:(double)arg1 sleepValue:(long long)arg2 barLocationIndex:(long long)arg3 startOfCalendarDay:(id)arg4 xAxisTransform:(id)arg5 yAxisTransform:(id)arg6 userInfo:(id)arg7;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)currentCalendar;
- (id)init;
- (void)setCurrentCalendar:(id)arg1;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;

@end
