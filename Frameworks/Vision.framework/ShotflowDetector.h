
@interface ShotflowDetector : NSObject {
    NSArray * _filterThresholds;
    ShotflowNetwork * _network;
    float  _nmsThreshold;
    int  _olmcsMergeCountDelta;
    float  _olmcsThreshold;
    float  _osfsSizeRatio;
    float  _osfsThreshold;
    float  _smartDistanceFactor;
    float  _smartThreshold;
}

@property (nonatomic, retain) NSArray *filterThresholds;
@property (nonatomic) float nmsThreshold;
@property (nonatomic) int olmcsMergeCountDelta;
@property (nonatomic) float olmcsThreshold;
@property (nonatomic) float osfsSizeRatio;
@property (nonatomic) float osfsThreshold;
@property (nonatomic) float smartDistanceFactor;
@property (nonatomic) float smartThreshold;
@property (nonatomic) float threshold;

+ (struct CGSize { double x1; double x2; })getSuggestedImageSize:(struct CGSize { double x1; double x2; })arg1;
+ (float)inputImageAspectRatio;
+ (float)inputImageMaxDimension;
+ (float)inputImageMinDimension;
+ (struct CGSize { double x1; double x2; })inputImageSize;
+ (id)inputLayerName;
+ (id)modelName;
+ (float)networkThreshold;
+ (id)processingDeviceDetectorWithEspressoNetwork:(struct { void *x1; int x2; })arg1 espressoPlan:(void*)arg2;
+ (id)processingDeviceDetectorWithEspressoNetwork:(struct { void *x1; int x2; })arg1 espressoPlan:(void*)arg2 networkThreshold:(float)arg3 filterThresholds:(id)arg4;
+ (id)processingDeviceDetectorWithModelPath:(id)arg1 networkThreshold:(float)arg2 filterThresholds:(id)arg3 preferredDeviceID:(int)arg4 engineID:(int)arg5 storageType:(int)arg6;
+ (id)processingDeviceDetectorWithModelPath:(id)arg1 preferredDeviceID:(int)arg2 engineID:(int)arg3 storageType:(int)arg4;
+ (id)supportedLabelKeys;

- (void).cxx_destruct;
- (id)detect:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 inputIsBGR:(bool)arg2;
- (id)detectAndProcessObjects:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 inputIsBGR:(bool)arg2;
- (id)enforceSquareFaces:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (id)filterBoxes:(id)arg1;
- (id)filterThresholds;
- (id)initWithNetwork:(id)arg1;
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;
- (id)mergeBoxes:(id)arg1;
- (id)nmsBoxes:(id)arg1;
- (float)nmsThreshold;
- (int)olmcsMergeCountDelta;
- (float)olmcsThreshold;
- (float)osfsSizeRatio;
- (float)osfsThreshold;
- (id)overlappingLowMergeCountSuppression:(id)arg1;
- (id)overlappingSmallFacesSuppression:(id)arg1;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (void)setFilterThresholds:(id)arg1;
- (void)setNmsThreshold:(float)arg1;
- (void)setOlmcsMergeCountDelta:(int)arg1;
- (void)setOlmcsThreshold:(float)arg1;
- (void)setOsfsSizeRatio:(float)arg1;
- (void)setOsfsThreshold:(float)arg1;
- (void)setSmartDistanceFactor:(float)arg1;
- (void)setSmartThreshold:(float)arg1;
- (void)setThreshold:(float)arg1;
- (float)smartDistanceFactor;
- (id)smartMergeBoxes:(id)arg1;
- (float)smartThreshold;
- (id)sortBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;
- (float)threshold;

@end
