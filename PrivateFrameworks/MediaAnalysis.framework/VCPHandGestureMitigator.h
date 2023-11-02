
@interface VCPHandGestureMitigator : NSObject {
    float  _minHandSize;
    int  _rotationInDegrees;
}

@property float minHandSize;
@property int rotationInDegrees;

+ (float)getFaceExtensionRatio;
+ (float)getGestureTypeConsistencyLookBackDuration;
+ (float)getHandMotionLookBackDuration;
+ (float)getMinHandFaceRatio;
+ (float)getMinTiltingAngle;
+ (float)getMinTiltingThumbAngle;
+ (float)getPalmMoveDistanceThreshold;
+ (float)getPalmScaleChangeThreshold;

- (void)adjustGestureForHand:(id)arg1 withFace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)checkHandGestureGlobalMotion:(id)arg1 forHand:(id)arg2;
- (bool)checkHandGestureJitter:(id)arg1 forHand:(id)arg2;
- (bool)checkHandGestureTemporalInconsistency:(id)arg1 forHand:(id)arg2;
- (bool)handInMitigationQuadrant:(id)arg1 withFace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)handPalmFacingCamera:(id)arg1 rotationInDegrees:(int)arg2 useTips:(bool)arg3;
- (bool)handTouchFace:(id)arg1 andFace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotationInDegrees:(int)arg3;
- (bool)handsOverlap:(id)arg1 pairedHand:(id)arg2;
- (bool)handsTooClose:(id)arg1 pairedHand:(id)arg2;
- (id)init;
- (float)minHandSize;
- (int)mitigate:(id)arg1 rightHand:(id)arg2 featureProvider:(id)arg3 faceRects:(id)arg4;
- (int)mitigateHand:(id)arg1 handKey:(id)arg2 pairedHand:(id)arg3 featureProvider:(id)arg4 faceRects:(id)arg5;
- (bool)mitigateWithFingerOpennessForHand:(id)arg1;
- (bool)mitigateWithFingerTiltingForHand:(id)arg1;
- (int)rotationInDegrees;
- (void)setMinHandSize:(float)arg1;
- (void)setRotationInDegrees:(int)arg1;

@end
