
@interface HKBarSeries : HKGraphSeries {
    struct CGSize { 
        double width; 
        double height; 
    }  _cornerRadiiStorage;
    HKBarSeriesConfiguration * _defaultConfigurationStorage;
    NSMutableArray * _overrideConfigurationsStorage;
    HKStrokeStyle * _selectedStrokeStyleStorage;
    NSLock * _seriesMutableStateLock;
    HKStrokeStyle * _tiledStrokeStyleStorage;
    HKStrokeStyle * _unselectedStrokeStyleStorage;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cornerRadii;
@property (nonatomic) struct CGSize { double x1; double x2; } cornerRadiiStorage;
@property (nonatomic, retain) HKBarSeriesConfiguration *defaultConfiguration;
@property (nonatomic, retain) HKBarSeriesConfiguration *defaultConfigurationStorage;
@property (nonatomic, retain) HKFillStyle *inactiveFillStyle;
@property (nonatomic, retain) NSMutableArray *overrideConfigurations;
@property (nonatomic, retain) NSMutableArray *overrideConfigurationsStorage;
@property (nonatomic, retain) HKFillStyle *selectedFillStyle;
@property (nonatomic, retain) HKStrokeStyle *selectedStrokeStyle;
@property (nonatomic, retain) HKStrokeStyle *selectedStrokeStyleStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic, retain) HKStrokeStyle *tiledStrokeStyle;
@property (nonatomic, retain) HKStrokeStyle *tiledStrokeStyleStorage;
@property (nonatomic, retain) HKFillStyle *unselectedFillStyle;
@property (nonatomic, retain) HKStrokeStyle *unselectedStrokeStyle;
@property (nonatomic, retain) HKStrokeStyle *unselectedStrokeStyleStorage;

+ (id)_approximateRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(struct CGSize { double x1; double x2; })arg3;
+ (id)barSeriesRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(struct CGSize { double x1; double x2; })arg3;
+ (id)barSeriesRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;

- (void).cxx_destruct;
- (long long)_configurationIndexForCoordinate:(id)arg1 inConfigurations:(id)arg2;
- (void)_drawConfiguration:(id)arg1 fillStyleBezierPaths:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (void)_drawPath:(id)arg1 withFillStyle:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSpacing:(double)arg3;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (void)clearCaches;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (struct CGSize { double x1; double x2; })cornerRadii;
- (struct CGSize { double x1; double x2; })cornerRadiiStorage;
- (id)defaultConfiguration;
- (id)defaultConfigurationStorage;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 context:(struct CGContext { }*)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 seriesRenderingDelegate:(id)arg6;
- (id)inactiveFillStyle;
- (id)init;
- (id)overrideConfigurations;
- (id)overrideConfigurationsStorage;
- (id)selectedFillStyle;
- (id)selectedStrokeStyle;
- (id)selectedStrokeStyleStorage;
- (id)seriesMutableStateLock;
- (void)setCornerRadii:(struct CGSize { double x1; double x2; })arg1;
- (void)setCornerRadiiStorage:(struct CGSize { double x1; double x2; })arg1;
- (void)setDefaultConfiguration:(id)arg1;
- (void)setDefaultConfigurationStorage:(id)arg1;
- (void)setInactiveFillStyle:(id)arg1;
- (void)setOverrideConfigurations:(id)arg1;
- (void)setOverrideConfigurationsStorage:(id)arg1;
- (void)setSelectedFillStyle:(id)arg1;
- (void)setSelectedStrokeStyle:(id)arg1;
- (void)setSelectedStrokeStyleStorage:(id)arg1;
- (void)setTiledStrokeStyle:(id)arg1;
- (void)setTiledStrokeStyleStorage:(id)arg1;
- (void)setUnselectedFillStyle:(id)arg1;
- (void)setUnselectedStrokeStyle:(id)arg1;
- (void)setUnselectedStrokeStyleStorage:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)tiledStrokeStyle;
- (id)tiledStrokeStyleStorage;
- (id)unselectedFillStyle;
- (id)unselectedStrokeStyle;
- (id)unselectedStrokeStyleStorage;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
