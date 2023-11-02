
@interface HKAnnotatedHorizontalLineSeries : HKGraphSeries {
    NSDictionary * _horizontalLineStylesStorage;
    NSLock * _seriesMutableStateLock;
    double  _valueOutlineWidthStorage;
}

@property (nonatomic, retain) NSDictionary *horizontalLineStyles;
@property (nonatomic, retain) NSDictionary *horizontalLineStylesStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic) double valueOutlineWidth;
@property (nonatomic) double valueOutlineWidthStorage;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForString:(id)arg1 coordinate:(id)arg2 valueAttributes:(id)arg3 rectsToAvoid:(id)arg4;
- (id)_defaultLabelStyle;
- (id)_defaultLineStyle;
- (id)_horizontalLineSeriesStyleForBlockCoordinate:(id)arg1;
- (id)_stringValueForCoordinate:(id)arg1 valueStyle:(id)arg2;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (id)horizontalLineStyles;
- (id)horizontalLineStylesStorage;
- (id)init;
- (id)seriesMutableStateLock;
- (void)setHorizontalLineStyles:(id)arg1;
- (void)setHorizontalLineStylesStorage:(id)arg1;
- (void)setValueOutlineWidth:(double)arg1;
- (void)setValueOutlineWidthStorage:(double)arg1;
- (bool)supportsMultiTouchSelection;
- (double)valueOutlineWidth;
- (double)valueOutlineWidthStorage;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
