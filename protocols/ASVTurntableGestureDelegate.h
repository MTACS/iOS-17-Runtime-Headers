
@protocol ASVTurntableGestureDelegate

@required

- (void)gesture:(void *)arg1 beganPanningAtScreenPoint:(void *)arg2; // needs 2 arg types, found 1: ASVGesture *
- (void)gesture:(void *)arg1 pannedToScreenPoint:(void *)arg2; // needs 2 arg types, found 1: ASVGesture *
- (void)gestureEndedPanning:(ASVGesture *)arg1;

@end
