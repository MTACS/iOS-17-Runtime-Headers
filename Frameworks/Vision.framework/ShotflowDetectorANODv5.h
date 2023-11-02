
@interface ShotflowDetectorANODv5 : ShotflowDetectorANODBase {
    float  _faceBodyDistanceThreshold;
    float  _petFaceThreshold;
}

@property (nonatomic) float faceBodyDistanceThreshold;
@property (nonatomic) float petFaceThreshold;

+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;

- (id)analyzePetFaces:(id)arg1;
- (float)faceBodyDistanceThreshold;
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;
- (id)groupFaceBody:(id)arg1;
- (id)initWithNetwork:(id)arg1;
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;
- (id)nmsBoxes:(id)arg1;
- (float)petFaceThreshold;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (void)setFaceBodyDistanceThreshold:(float)arg1;
- (void)setPetFaceThreshold:(float)arg1;

@end
