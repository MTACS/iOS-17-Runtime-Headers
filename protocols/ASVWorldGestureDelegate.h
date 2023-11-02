
@protocol ASVWorldGestureDelegate

@required

- (void)gesture:(void *)arg1 translatedAssetToScreenPoint:(void *)arg2; // needs 2 arg types, found 1: ASVGesture *
- (void)gestureBeganTranslation:(ASVGesture *)arg1;
- (void)gestureEndedTranslation:(ASVGesture *)arg1;

@end
