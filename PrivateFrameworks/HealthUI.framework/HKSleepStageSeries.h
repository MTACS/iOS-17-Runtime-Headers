
@interface HKSleepStageSeries : HKSleepPeriodSeries <HKSleepStageCategoryHighlightable> {
    NSNumber * _highlightedSleepStageStorage;
    NSLock * _seriesMutableStateLock;
    NSArray * _sleepStageFillStylesStorage;
}

@property (nonatomic, copy) NSNumber *highlightedSleepStage;
@property (nonatomic, copy) NSNumber *highlightedSleepStageStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic, copy) NSArray *sleepStageFillStyles;
@property (nonatomic, copy) NSArray *sleepStageFillStylesStorage;

- (void).cxx_destruct;
- (void)_drawColumnForLayer:(long long)arg1 offsets:(id)arg2 coordinate:(id)arg3 selectedBezierPaths:(id)arg4 unselectedBezierPaths:(id)arg5 barWidth:(double)arg6 pathCount:(long long*)arg7;
- (void)_drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 context:(struct CGContext { }*)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 axisResolution:(double)arg6 seriesRenderingDelegate:(id)arg7;
- (void)_rebuildFillStyles;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)highlightedSleepStage;
- (id)highlightedSleepStageStorage;
- (id)init;
- (id)marginsForYAxis:(id)arg1 xAxisRange:(id)arg2 zoomLevel:(long long)arg3 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)seriesMutableStateLock;
- (void)setHighlightedSleepStage:(id)arg1;
- (void)setHighlightedSleepStageStorage:(id)arg1;
- (void)setSleepStageFillStyles:(id)arg1;
- (void)setSleepStageFillStylesStorage:(id)arg1;
- (id)sleepStageFillStyles;
- (id)sleepStageFillStylesStorage;
- (void)updateChartPointUserInfo:(id)arg1 forHighlightedSleepStage:(id)arg2;

@end
