
@interface HKBloodPressureSeries : HKGraphSeries {
    HKBloodPressureSeriesPresentationStyle * _selectedPresentationStyleStorage;
    NSLock * _seriesMutableStateLock;
    HKBloodPressureSeriesPresentationStyle * _unselectedPresentationStyleStorage;
}

@property (nonatomic, retain) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyle;
@property (nonatomic, retain) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyleStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic, retain) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyle;
@property (nonatomic, retain) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyleStorage;

+ (void)_drawDiastolicSymbolWithColor:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 width:(double)arg3 context:(struct CGContext { }*)arg4;
+ (void)_drawSystolicSymbolWithColor:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 width:(double)arg3 context:(struct CGContext { }*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectCenteredAt:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2;
+ (id)defaultSeriesWithSystolicColor:(id)arg1;
+ (id)diastolicImageCompatibleWithFont:(id)arg1 withColor:(id)arg2;
+ (id)systolicImageCompatibleWithFont:(id)arg1 withColor:(id)arg2;

- (void).cxx_destruct;
- (void)_drawBloodPressureSymbol:(long long)arg1 withColor:(id)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 width:(double)arg4 context:(struct CGContext { }*)arg5;
- (void)_drawRangeBackgroundInContext:(struct CGContext { }*)arg1 coordinate:(id)arg2 width:(double)arg3 symbolType:(long long)arg4 symbolColor:(id)arg5 fillColor:(id)arg6;
- (void)_drawRangeDotsInContext:(struct CGContext { }*)arg1 coordinate:(id)arg2 width:(double)arg3 symbolType:(long long)arg4 symbolColor:(id)arg5 fillColor:(id)arg6;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (id)init;
- (id)selectedPresentationStyle;
- (id)selectedPresentationStyleStorage;
- (id)seriesMutableStateLock;
- (void)setSelectedPresentationStyle:(id)arg1;
- (void)setSelectedPresentationStyleStorage:(id)arg1;
- (void)setUnselectedPresentationStyle:(id)arg1;
- (void)setUnselectedPresentationStyleStorage:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)unselectedPresentationStyle;
- (id)unselectedPresentationStyleStorage;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
