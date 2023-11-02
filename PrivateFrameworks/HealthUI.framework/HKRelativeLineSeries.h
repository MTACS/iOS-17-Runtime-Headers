
@interface HKRelativeLineSeries : HKLineSeries {
    long long  _chartSizeClass;
    UIColor * _color;
    double  _indeterminateLozengeHollowLineRatio;
    double  _indeterminateLozengeLineWidth;
    UIColor * _unavailableColor;
}

@property (nonatomic, readonly, copy) UIColor *color;
@property (nonatomic, readonly) double indeterminateLozengeHollowLineRatio;
@property (nonatomic, readonly) double indeterminateLozengeLineWidth;
@property (nonatomic, readonly, copy) UIColor *unavailableColor;

- (void).cxx_destruct;
- (id)_colorForUserInfo:(id)arg1;
- (void)_drawIndeterminateLozengeForCoordinate:(id)arg1 context:(struct CGContext { }*)arg2 seriesRenderingDelegate:(id)arg3;
- (void)_drawIndeterminateLozengesForBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 renderContext:(struct CGContext { }*)arg3 seriesRenderingDelegate:(id)arg4;
- (double)_indeterminateLozengeValueForUserInfo:(id)arg1;
- (bool)_isUserInfoIndeterminateRelativeValue:(id)arg1;
- (bool)_shouldForceGapBetweenUserInfo:(id)arg1 andUserInfo:(id)arg2;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)color;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (double)indeterminateLozengeHollowLineRatio;
- (double)indeterminateLozengeLineWidth;
- (id)initFromLineSeries:(id)arg1 color:(id)arg2 unavailableColor:(id)arg3 indeterminateLozengeLineWidth:(double)arg4 chartSizeClass:(long long)arg5;
- (bool)supportsMultiTouchSelection;
- (id)unavailableColor;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
