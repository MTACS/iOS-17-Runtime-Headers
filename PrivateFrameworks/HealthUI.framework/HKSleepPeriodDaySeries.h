
@interface HKSleepPeriodDaySeries : HKSleepPeriodSeries

- (void)addGoalLinePathsToCoordinate:(id)arg1 upperGoalLinePath:(id)arg2 upperGoalMarkerPoints:(id)arg3 previousUpperGoalLinePoint:(id)arg4 lowerGoalLinePath:(id)arg5 lowerGoalMarkerPoints:(id)arg6 previousLowerGoalLinePoint:(id)arg7 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSpacing:(double)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;

@end
