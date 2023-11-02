
@interface HKHorizontalTimePeriodSeries : HKGraphSeries <HKAxisLabelDataSource> {
    NSArray * _cachedAxisLabelsStorage;
    NSArray * _enumerationValueOrderingStorage;
    UIColor * _fillColorStorage;
    double  _lineWidthStorage;
    UIImage * _selectedPointMarkerImageStorage;
    NSLock * _seriesMutableStateLock;
    NSDictionary * _valueLabelsStorage;
}

@property (nonatomic, readonly) NSArray *cachedAxisLabelsStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enumerationValueOrdering;
@property (nonatomic, retain) NSArray *enumerationValueOrderingStorage;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) UIColor *fillColorStorage;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lineWidth;
@property (nonatomic) double lineWidthStorage;
@property (nonatomic, retain) UIImage *selectedPointMarkerImage;
@property (nonatomic, retain) UIImage *selectedPointMarkerImageStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *valueLabels;
@property (nonatomic, retain) NSDictionary *valueLabelsStorage;

- (void).cxx_destruct;
- (long long)_enumeratedLevelForCoordinate:(id)arg1;
- (id)_generateAxisLabels;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (id)cacheKeysForModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)cachedAxisLabels;
- (id)cachedAxisLabelsStorage;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })enumerationRectForLevel:(long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)enumerationValueOrdering;
- (id)enumerationValueOrderingStorage;
- (id)fillColor;
- (id)fillColorStorage;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (double)lineWidth;
- (double)lineWidthStorage;
- (double)offsetForCoordinate:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)offsetForEnumerationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })renderPositionForLabelLocation:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 constantOffset:(double)arg5 isHorizontal:(bool)arg6 optionalOffset:(struct CGPoint { double x1; double x2; })arg7;
- (id)selectedPointMarkerImage;
- (id)selectedPointMarkerImageStorage;
- (id)seriesMutableStateLock;
- (void)setEnumerationValueOrdering:(id)arg1;
- (void)setEnumerationValueOrderingStorage:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFillColorStorage:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setLineWidthStorage:(double)arg1;
- (void)setSelectedPointMarkerImage:(id)arg1;
- (void)setSelectedPointMarkerImageStorage:(id)arg1;
- (void)setValueLabels:(id)arg1;
- (void)setValueLabelsStorage:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)valueLabels;
- (id)valueLabelsStorage;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
