
@interface HKSleepComparisonDaySeries : HKGraphSeries <HKAxisLabelDataSource> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cornerRadiiStorage;
    NSArray * _defaultFillStylesStorage;
    NSLock * _seriesMutableStateLock;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cornerRadii;
@property (nonatomic) struct CGSize { double x1; double x2; } cornerRadiiStorage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *defaultFillStyles;
@property (nonatomic, copy) NSArray *defaultFillStylesStorage;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4;
- (id)cacheKeysForModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (struct CGSize { double x1; double x2; })cornerRadii;
- (struct CGSize { double x1; double x2; })cornerRadiiStorage;
- (id)defaultFillStyles;
- (id)defaultFillStylesStorage;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (struct CGPoint { double x1; double x2; })renderPositionForLabelLocation:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 constantOffset:(double)arg5 isHorizontal:(bool)arg6 optionalOffset:(struct CGPoint { double x1; double x2; })arg7;
- (id)seriesMutableStateLock;
- (void)setCornerRadii:(struct CGSize { double x1; double x2; })arg1;
- (void)setCornerRadiiStorage:(struct CGSize { double x1; double x2; })arg1;
- (void)setDefaultFillStyles:(id)arg1;
- (void)setDefaultFillStylesStorage:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)visibleValueRange;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
