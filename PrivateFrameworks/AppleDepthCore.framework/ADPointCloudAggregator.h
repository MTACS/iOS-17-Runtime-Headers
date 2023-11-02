
@interface ADPointCloudAggregator : NSObject {
    ADAggregationParameters * _aggregationParameters;
    ADCameraCalibration * _colorCameraCalibration;
    struct { id x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; } * _history;
    unsigned long long  _historyIndex;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _jasperToCameraTransform;
    ADJasperPointCloudFilterParameters * _pointCloudFilterParameters;
}

@property (nonatomic, readonly, retain) ADAggregationParameters *aggregationParameters;
@property (retain) ADCameraCalibration *colorCameraCalibration;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } jasperToCameraTransform;
@property (nonatomic, retain) ADJasperPointCloudFilterParameters *pointCloudFilterParameters;

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformMetersToMillimiters:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

- (void).cxx_destruct;
- (long long)aggregateAndProjectForTime:(double)arg1 worldToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 cropTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 rotateBy:(long long)arg4 projectedPointsBuffer:(struct __CVBuffer { }*)arg5;
- (long long)aggregateAndProjectForTime:(double)arg1 worldToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 filterParams:(id)arg3 cropTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 rotateBy:(long long)arg5 projectedPointsBuffer:(struct __CVBuffer { }*)arg6;
- (id)aggregateForTime:(double)arg1 worldToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)aggregationParameters;
- (long long)clear;
- (id)colorCameraCalibration;
- (void)dealloc;
- (id)initWithAggregationParameters:(id)arg1;
- (id)initWithAggregationParameters:(id)arg1 jasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 colorCamera:(id)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })jasperToCameraTransform;
- (id)pointCloudFilterParameters;
- (long long)pushPointCloud:(id)arg1 timestamp:(double)arg2 worldToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (long long)pushPointCloud:(id)arg1 timestamp:(double)arg2 worldToLidarTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (void)setColorCameraCalibration:(id)arg1;
- (void)setJasperToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPointCloudFilterParameters:(id)arg1;

@end
