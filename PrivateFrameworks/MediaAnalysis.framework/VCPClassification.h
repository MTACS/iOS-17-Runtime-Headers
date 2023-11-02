
@interface VCPClassification : NSObject {
    float  _adjustDuration;
    float  _duration;
    NSString * _sceneId;
    float  _sumAdjustConfidence;
    float  _sumConfidence;
}

@property float adjustDuration;
@property float duration;
@property (retain) NSString *sceneId;
@property float sumAdjustConfidence;
@property float sumConfidence;

- (void).cxx_destruct;
- (float)adjustDuration;
- (float)duration;
- (id)initWithSceneId:(id)arg1 withDuration:(float)arg2 withConfidence:(float)arg3 withAdjustConfidence:(float)arg4;
- (id)sceneId;
- (void)setAdjustDuration:(float)arg1;
- (void)setDuration:(float)arg1;
- (void)setSceneId:(id)arg1;
- (void)setSumAdjustConfidence:(float)arg1;
- (void)setSumConfidence:(float)arg1;
- (float)sumAdjustConfidence;
- (float)sumConfidence;

@end
