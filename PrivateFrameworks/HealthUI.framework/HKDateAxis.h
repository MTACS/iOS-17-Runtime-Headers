
@interface HKDateAxis : HKAxis {
    NSCalendar * _currentCalendar;
}

@property (nonatomic, retain) NSCalendar *currentCalendar;

- (void).cxx_destruct;
- (unsigned long long)_anchorUnitForZoom:(long long)arg1;
- (id)_axisLabelsWithModelRange:(id)arg1 zoom:(long long)arg2;
- (id)_baseDateForDate:(id)arg1 components:(id)arg2 calendar:(id)arg3;
- (id)_dateRangeForChartRange:(struct HKRange { double x1; double x2; })arg1 zoomScale:(double)arg2;
- (void)_enumerateCoordinatesInModelRange:(id)arg1 timeScope:(long long)arg2 withHandler:(id /* block */)arg3;
- (id)_firstDateAfter:(id)arg1 matchingComponents:(id)arg2 timeScope:(long long)arg3 calendar:(id)arg4;
- (id)_formattedStringForDate:(id)arg1 zoom:(long long)arg2;
- (id)_nextDateForDate:(id)arg1 components:(id)arg2 timeScope:(long long)arg3 calendar:(id)arg4;
- (void)_setRangeForDateRange:(id)arg1;
- (id)axisLabelIntervalComponentsForZoomLevelConfiguration:(id)arg1;
- (id)cacheKeysForModelRange:(id)arg1 zoomScale:(double)arg2;
- (bool)canAddLabelForAxisLabelType:(long long)arg1;
- (id)currentCalendar;
- (long long)dateZoomForZoomScale:(double)arg1;
- (id)extendModelRangeWithRange:(id)arg1 zoomScale:(double)arg2;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)initWithCurrentCalendar:(id)arg1 axisStyle:(id)arg2;
- (id)minorAxisIntervalComponentsForZoomLevelConfiguration:(id)arg1;
- (void)offsetForValueRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(struct CGPoint { double x1; double x2; }*)arg4;
- (id)rangeForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)setCurrentCalendar:(id)arg1;
- (id)stringForDate:(id)arg1 zoom:(long long)arg2 labelType:(long long)arg3;

@end
