
@interface HKSleepStageDurationSeries : HKSleepDurationSeries <HKSleepStageCategoryHighlightable> {
    NSNumber * _highlightedSleepStageStorage;
    NSLock * _seriesMutableStateLock;
    NSArray * _sleepStageFillStylesStorage;
}

@property (nonatomic, copy) NSNumber *highlightedSleepStage;
@property (nonatomic, retain) NSNumber *highlightedSleepStageStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic, copy) NSArray *sleepStageFillStyles;
@property (nonatomic, copy) NSArray *sleepStageFillStylesStorage;

- (void).cxx_destruct;
- (void)_rebuildFillStyles;
- (void)addGoalLinePathsToCoordinate:(id)arg1 goalLinePath:(id)arg2 goalLineMarkerPoints:(id)arg3 previousCoordinateGoal:(id)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (bool)hideAsleepData;
- (bool)hideInBedData;
- (id)highlightedSleepStage;
- (id)highlightedSleepStageStorage;
- (id)init;
- (id)seriesMutableStateLock;
- (void)setHighlightedSleepStage:(id)arg1;
- (void)setHighlightedSleepStageStorage:(id)arg1;
- (void)setSleepStageFillStyles:(id)arg1;
- (void)setSleepStageFillStylesStorage:(id)arg1;
- (id)sleepStageFillStyles;
- (id)sleepStageFillStylesStorage;

@end
