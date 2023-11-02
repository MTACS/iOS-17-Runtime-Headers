
@interface HKHorizontalSingleLineSeries : HKGraphSeries <HKAxisLabelDataSource> {
    UIColor * _baseColorStorage;
    double  _lineWidthStorage;
    double  _markRadiusStorage;
    double  _selectedLineWidthStorage;
    UIImage * _selectedPointMarkerImageStorage;
    NSLock * _seriesMutableStateLock;
    bool  _shouldConnectPointsStorage;
    double  _topInsetPercentageStorage;
}

@property (nonatomic, retain) UIColor *baseColor;
@property (nonatomic, retain) UIColor *baseColorStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lineWidth;
@property (nonatomic) double lineWidthStorage;
@property (nonatomic) double markRadius;
@property (nonatomic) double markRadiusStorage;
@property (nonatomic) double selectedLineWidth;
@property (nonatomic) double selectedLineWidthStorage;
@property (nonatomic, retain) UIImage *selectedPointMarkerImage;
@property (nonatomic, retain) UIImage *selectedPointMarkerImageStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic) bool shouldConnectPoints;
@property (nonatomic) bool shouldConnectPointsStorage;
@property (readonly) Class superclass;
@property (nonatomic) double topInsetPercentage;
@property (nonatomic) double topInsetPercentageStorage;

- (void).cxx_destruct;
- (id)baseColor;
- (id)baseColorStorage;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (id)cacheKeysForModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (double)lineWidth;
- (double)lineWidthStorage;
- (double)markRadius;
- (double)markRadiusStorage;
- (struct CGPoint { double x1; double x2; })renderPositionForLabelLocation:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 constantOffset:(double)arg5 isHorizontal:(bool)arg6 optionalOffset:(struct CGPoint { double x1; double x2; })arg7;
- (double)selectedLineWidth;
- (double)selectedLineWidthStorage;
- (id)selectedPointMarkerImage;
- (id)selectedPointMarkerImageStorage;
- (id)seriesMutableStateLock;
- (void)setBaseColor:(id)arg1;
- (void)setBaseColorStorage:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setLineWidthStorage:(double)arg1;
- (void)setMarkRadius:(double)arg1;
- (void)setMarkRadiusStorage:(double)arg1;
- (void)setSelectedLineWidth:(double)arg1;
- (void)setSelectedLineWidthStorage:(double)arg1;
- (void)setSelectedPointMarkerImage:(id)arg1;
- (void)setSelectedPointMarkerImageStorage:(id)arg1;
- (void)setShouldConnectPoints:(bool)arg1;
- (void)setShouldConnectPointsStorage:(bool)arg1;
- (void)setTopInsetPercentage:(double)arg1;
- (void)setTopInsetPercentageStorage:(double)arg1;
- (bool)shouldConnectPoints;
- (bool)shouldConnectPointsStorage;
- (bool)supportsMultiTouchSelection;
- (double)topInsetPercentage;
- (double)topInsetPercentageStorage;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yCoordinateForLevel:(long long)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
