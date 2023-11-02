
@protocol ASVWorldTwoFingerGestureDelegate <ASVWorldGestureDelegate, ASVTwoFingerGestureDelegate>

@required

- (void)gesture:(void *)arg1 levitatedAssetToScreenPoint:(void *)arg2; // needs 2 arg types, found 1: ASVGesture *
- (void)gestureBeganLevitation:(ASVGesture *)arg1;
- (void)gestureEndedLevitation:(ASVGesture *)arg1;

@end
