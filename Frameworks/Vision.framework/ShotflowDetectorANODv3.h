
@interface ShotflowDetectorANODv3 : ShotflowDetectorANODBase

@property (nonatomic) float faceDetectionPrecisionRecallThreshold;

+ (float)defaultFaceDetectionPrecisionRecallThreshold;
+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;

- (float)faceDetectionPrecisionRecallThreshold;
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;
- (id)initWithNetwork:(id)arg1;
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;
- (id)nmsBoxes:(id)arg1;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (void)setFaceDetectionPrecisionRecallThreshold:(float)arg1;

@end
