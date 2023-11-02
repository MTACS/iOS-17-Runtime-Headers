
@protocol ASVTwoFingerGestureDelegate <NSObject>

@required

- (void)gesture:(ASVGesture *)arg1 rotatedAssetByDeltaYaw:(float)arg2;
- (void)gesture:(ASVGesture *)arg1 scaledAssetToScale:(float)arg2;
- (void)gestureBeganRotation:(ASVGesture *)arg1;
- (void)gestureBeganScaling:(ASVGesture *)arg1;
- (void)gestureDidSnapAwayFromScale:(ASVGesture *)arg1;
- (void)gestureDidSnapToScale:(ASVGesture *)arg1;
- (void)gestureEndedRotation:(ASVGesture *)arg1;
- (void)gestureEndedScaling:(ASVGesture *)arg1;
- (void)gestureStartScaleAnimationFrom:(float)arg1 to:(float)arg2;
- (void)gestureStopScaleAnimation;
- (float)maximumObjectScale;
- (float)minimumObjectScale;

@end
