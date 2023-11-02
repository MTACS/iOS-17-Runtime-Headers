
@interface AXMindNetDetector : NSObject {
    NSArray * _filterThreshold;
    AXMindNetNetwork * _network;
    float  _nmsThreshold;
    float  _overlap_threshold;
}

@property (nonatomic, retain) NSArray *filterThreshold;
@property (nonatomic) float nmsThreshold;
@property (nonatomic) float overlap_threshold;
@property (nonatomic) float threshold;

+ (id)detectorWithModelPath:(id)arg1 configuration:(id)arg2 modelType:(long long)arg3;

- (void).cxx_destruct;
- (id)detect:(id)arg1;
- (id)filterThreshold;
- (id)initWithNetwork:(id)arg1 nmsThreshold:(float)arg2 filterThreshold:(id)arg3;
- (float)nmsThreshold;
- (float)overlap_threshold;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (void)setFilterThreshold:(id)arg1;
- (void)setNmsThreshold:(float)arg1;
- (void)setOverlap_threshold:(float)arg1;
- (void)setThreshold:(float)arg1;
- (float)threshold;

@end
