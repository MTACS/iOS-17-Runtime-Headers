
@interface HKJulianIndexedSevenDayQuantitySeries : HKGraphSeries {
    UIColor * _color;
    double  _hollowLineRatio;
    double  _lineWidth;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) double hollowLineRatio;
@property (nonatomic, readonly) double lineWidth;

- (void).cxx_destruct;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (id)color;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (double)hollowLineRatio;
- (id)initWithColor:(id)arg1 lineWidth:(double)arg2;
- (id)initWithColor:(id)arg1 lineWidth:(double)arg2 hollowLineRatio:(double)arg3;
- (double)lineWidth;
- (bool)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
