
@interface VGFaceSelectionState : VGSelectionState {
    VGCapturedPose * _capturedFrontPose;
    float  _completionScore;
    NSDictionary * _expressionCapturedPoses;
    NSArray * _hairPoses;
    float  _pitchAngle;
    NSDictionary * _pitchAngleCapturedPoses;
    NSDictionary * _posesForHairCapturedPoses;
    NSArray * _tronPoses;
    float  _yawAngle;
    NSDictionary * _yawAngleCapturedPoses;
}

@property (nonatomic, retain) VGCapturedPose *capturedFrontPose;
@property (nonatomic) float completionScore;
@property (nonatomic, readonly) NSDictionary *expressionCaptured;
@property (nonatomic, retain) NSDictionary *expressionCapturedPoses;
@property (nonatomic, retain) NSArray *hairPoses;
@property (nonatomic) float pitchAngle;
@property (nonatomic, readonly) NSDictionary *pitchAngleCaptured;
@property (nonatomic, retain) NSDictionary *pitchAngleCapturedPoses;
@property (nonatomic, readonly) NSDictionary *posesForHairCaptured;
@property (nonatomic, retain) NSDictionary *posesForHairCapturedPoses;
@property (nonatomic, retain) NSArray *tronPoses;
@property (nonatomic) float yawAngle;
@property (nonatomic, readonly) NSDictionary *yawAngleCaptured;
@property (nonatomic, retain) NSDictionary *yawAngleCapturedPoses;

- (void).cxx_destruct;
- (id)capturedFrontPose;
- (float)completionScore;
- (id)description;
- (id)expressionCaptured;
- (id)expressionCapturedPoses;
- (id)hairPoses;
- (float)pitchAngle;
- (id)pitchAngleCaptured;
- (id)pitchAngleCapturedPoses;
- (id)posesForHairCaptured;
- (id)posesForHairCapturedPoses;
- (void)setCapturedFrontPose:(id)arg1;
- (void)setCompletionScore:(float)arg1;
- (void)setExpressionCapturedPoses:(id)arg1;
- (void)setHairPoses:(id)arg1;
- (void)setPitchAngle:(float)arg1;
- (void)setPitchAngleCapturedPoses:(id)arg1;
- (void)setPosesForHairCapturedPoses:(id)arg1;
- (void)setTronPoses:(id)arg1;
- (void)setYawAngle:(float)arg1;
- (void)setYawAngleCapturedPoses:(id)arg1;
- (id)tronPoses;
- (float)yawAngle;
- (id)yawAngleCaptured;
- (id)yawAngleCapturedPoses;

@end
