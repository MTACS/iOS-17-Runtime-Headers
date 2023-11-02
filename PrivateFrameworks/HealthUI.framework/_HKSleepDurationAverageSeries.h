
@interface _HKSleepDurationAverageSeries : HKSleepDurationSeries {
    NSString * _averageDescriptionStorage;
    double  _averageValueStorage;
    NSNumber * _averageValueTypeStorage;
    NSLock * _seriesMutableStateLock;
}

@property (nonatomic, copy) NSString *averageDescriptionStorage;
@property (nonatomic) double averageValueStorage;
@property (nonatomic, retain) NSNumber *averageValueType;
@property (nonatomic, retain) NSNumber *averageValueTypeStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;

- (void).cxx_destruct;
- (id)averageDescriptionStorage;
- (double)averageValueStorage;
- (id)averageValueType;
- (id)averageValueTypeStorage;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawOverlayInContext:(struct CGContext { }*)arg1 seriesOverlayData:(id)arg2;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (id)init;
- (long long)overlayType;
- (id)seriesMutableStateLock;
- (void)setAverageDescriptionStorage:(id)arg1;
- (void)setAverageValue:(double)arg1 averageDescription:(id)arg2;
- (void)setAverageValueStorage:(double)arg1;
- (void)setAverageValueType:(id)arg1;
- (void)setAverageValueTypeStorage:(id)arg1;

@end
