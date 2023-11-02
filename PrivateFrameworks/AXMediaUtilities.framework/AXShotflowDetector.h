
@interface AXShotflowDetector : NSObject {
    NSArray * _filterThreshold;
    float  _mergeHeadsThreshold;
    AXShotflowNetwork * _network;
    float  _nmsThreshold;
    int  _olmcsMergeCountDelta;
    float  _olmcsThreshold;
    float  _osfsSizeRatio;
    float  _osfsThreshold;
    float  _overlap_threshold;
    float  _smartDistanceFactor;
    float  _smartThreshold;
}

@property (nonatomic, retain) NSArray *filterThreshold;
@property (nonatomic) float mergeHeadsThreshold;
@property (nonatomic) float nmsThreshold;
@property (nonatomic) int olmcsMergeCountDelta;
@property (nonatomic) float olmcsThreshold;
@property (nonatomic) float osfsSizeRatio;
@property (nonatomic) float osfsThreshold;
@property (nonatomic) float overlap_threshold;
@property (nonatomic) float smartDistanceFactor;
@property (nonatomic) float smartThreshold;
@property (nonatomic) float threshold;

+ (id)cpuDetectorWithModelPath:(id)arg1 configuration:(id)arg2 version:(int)arg3;
+ (id)gpuDetectorWithModelPath:(id)arg1 configuration:(id)arg2 preferredMetalDeviceID:(int)arg3 version:(int)arg4 modelType:(long long)arg5;

- (void).cxx_destruct;
- (id)detect:(id)arg1;
- (id)enforceSquareFaces:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (id)filterBoxes:(id)arg1;
- (id)filterThreshold;
- (id)initWithNetwork:(id)arg1 nmsThreshold:(float)arg2 filterThreshold:(id)arg3;
- (id)mergeBoxes:(id)arg1;
- (id)mergeHeadsBoxes:(id)arg1;
- (float)mergeHeadsThreshold;
- (id)nmsBoxes:(id)arg1;
- (float)nmsThreshold;
- (int)olmcsMergeCountDelta;
- (float)olmcsThreshold;
- (float)osfsSizeRatio;
- (float)osfsThreshold;
- (float)overlap_threshold;
- (id)overlappingLowMergeCountSuppression:(id)arg1;
- (id)overlappingSmallFacesSuppression:(id)arg1;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (void)setFilterThreshold:(id)arg1;
- (void)setMergeHeadsThreshold:(float)arg1;
- (void)setNmsThreshold:(float)arg1;
- (void)setOlmcsMergeCountDelta:(int)arg1;
- (void)setOlmcsThreshold:(float)arg1;
- (void)setOsfsSizeRatio:(float)arg1;
- (void)setOsfsThreshold:(float)arg1;
- (void)setOverlap_threshold:(float)arg1;
- (void)setSmartDistanceFactor:(float)arg1;
- (void)setSmartThreshold:(float)arg1;
- (void)setThreshold:(float)arg1;
- (float)smartDistanceFactor;
- (id)smartMergeBoxes:(id)arg1;
- (float)smartThreshold;
- (float)threshold;

@end
