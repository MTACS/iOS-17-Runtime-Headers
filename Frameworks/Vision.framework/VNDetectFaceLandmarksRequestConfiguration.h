
@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration {
    NSNumber * _cascadeStepCount;
    unsigned long long  _constellation;
    bool  _performBlinkDetection;
    bool  _refineLeftEyeRegion;
    bool  _refineMouthRegion;
    bool  _refineRightEyeRegion;
}

@property (nonatomic, retain) NSNumber *cascadeStepCount;
@property (nonatomic) unsigned long long constellation;
@property (nonatomic) bool performBlinkDetection;
@property (nonatomic) bool refineLeftEyeRegion;
@property (nonatomic) bool refineMouthRegion;
@property (nonatomic) bool refineRightEyeRegion;

+ (bool)revision:(unsigned long long)arg1 supportsConstellation:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)cascadeStepCount;
- (unsigned long long)constellation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (bool)performBlinkDetection;
- (bool)refineLeftEyeRegion;
- (bool)refineMouthRegion;
- (bool)refineRightEyeRegion;
- (void)setCascadeStepCount:(id)arg1;
- (void)setConstellation:(unsigned long long)arg1;
- (void)setPerformBlinkDetection:(bool)arg1;
- (void)setRefineLeftEyeRegion:(bool)arg1;
- (void)setRefineMouthRegion:(bool)arg1;
- (void)setRefineRightEyeRegion:(bool)arg1;

@end
