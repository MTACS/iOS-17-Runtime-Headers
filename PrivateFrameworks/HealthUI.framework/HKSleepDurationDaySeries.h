
@interface HKSleepDurationDaySeries : HKSleepDurationSeries {
    NSCalendar * _currentCalendar;
    NSNumber * _highlightedSleepValueStorage;
    NSLock * _seriesMutableStateLock;
}

@property (nonatomic, retain) NSCalendar *currentCalendar;
@property (nonatomic, retain) NSNumber *highlightedSleepValue;
@property (nonatomic, retain) NSNumber *highlightedSleepValueStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;

- (void).cxx_destruct;
- (void)_rebuildFillStyles;
- (void)addGoalLinePathsToCoordinate:(id)arg1 goalLinePath:(id)arg2 goalLineMarkerPoints:(id)arg3 previousCoordinateGoal:(id)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSpacing:(double)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)currentCalendar;
- (bool)hideAsleepData;
- (bool)hideInBedData;
- (id)highlightedSleepValue;
- (id)highlightedSleepValueStorage;
- (id)init;
- (id)seriesMutableStateLock;
- (void)setCurrentCalendar:(id)arg1;
- (void)setHighlightedSleepValue:(id)arg1;
- (void)setHighlightedSleepValueStorage:(id)arg1;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;

@end
