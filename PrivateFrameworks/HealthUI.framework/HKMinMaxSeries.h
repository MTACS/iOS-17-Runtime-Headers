
@interface HKMinMaxSeries : HKGraphSeries {
    UIImage * _selectedPointMarkerImageStorage;
    HKStrokeStyle * _selectedStrokeStyleStorage;
    NSLock * _seriesMutableStateLock;
    UIImage * _unselectedPointMarkerImageStorage;
    HKStrokeStyle * _unselectedStrokeStyleStorage;
}

@property (nonatomic, retain) UIImage *selectedPointMarkerImage;
@property (nonatomic, retain) UIImage *selectedPointMarkerImageStorage;
@property (nonatomic, retain) HKStrokeStyle *selectedStrokeStyle;
@property (nonatomic, retain) HKStrokeStyle *selectedStrokeStyleStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic, retain) UIImage *unselectedPointMarkerImage;
@property (nonatomic, retain) UIImage *unselectedPointMarkerImageStorage;
@property (nonatomic, retain) HKStrokeStyle *unselectedStrokeStyle;
@property (nonatomic, retain) HKStrokeStyle *unselectedStrokeStyleStorage;

- (void).cxx_destruct;
- (void)_drawPointMarkersWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 context:(struct CGContext { }*)arg3;
- (void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 context:(struct CGContext { }*)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (id)init;
- (id)selectedPointMarkerImage;
- (id)selectedPointMarkerImageStorage;
- (id)selectedStrokeStyle;
- (id)selectedStrokeStyleStorage;
- (id)seriesMutableStateLock;
- (void)setSelectedPointMarkerImage:(id)arg1;
- (void)setSelectedPointMarkerImageStorage:(id)arg1;
- (void)setSelectedStrokeStyle:(id)arg1;
- (void)setSelectedStrokeStyleStorage:(id)arg1;
- (void)setUnselectedPointMarkerImage:(id)arg1;
- (void)setUnselectedPointMarkerImageStorage:(id)arg1;
- (void)setUnselectedStrokeStyle:(id)arg1;
- (void)setUnselectedStrokeStyleStorage:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)unselectedPointMarkerImage;
- (id)unselectedPointMarkerImageStorage;
- (id)unselectedStrokeStyle;
- (id)unselectedStrokeStyleStorage;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
