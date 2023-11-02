
@interface FudProgressWeights : NSObject {
    float  applyWeight;
    float  finishWeight;
    float  prepareWeight;
}

@property float applyWeight;
@property float finishWeight;
@property float prepareWeight;

- (float)applyWeight;
- (double)calculateOverallProgressWithStepProgress:(double)arg1 step:(int)arg2;
- (id)description;
- (float)finishWeight;
- (id)initWithPrepareWeight:(float)arg1 applyWeight:(float)arg2 finishWeight:(float)arg3;
- (float)prepareWeight;
- (void)setApplyWeight:(float)arg1;
- (void)setFinishWeight:(float)arg1;
- (void)setPrepareWeight:(float)arg1;

@end
