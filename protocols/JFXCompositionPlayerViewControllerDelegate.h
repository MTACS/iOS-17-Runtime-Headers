
@protocol JFXCompositionPlayerViewControllerDelegate <NSObject>

@optional

- (JFXCompositionPlayerViewControllerAnimationProperties *)animationPropertiesForCompositionTransition:(JFXCompositionPlayerViewController *)arg1;
- (void)playbackAreaDoubleTapped:(UITapGestureRecognizer *)arg1;
- (void)playbackAreaPanned:(JFXCompositionPlayerViewController *)arg1 gesture:(UIPanGestureRecognizer *)arg2 normalizedClipPoint:(struct CGPoint { double x1; double x2; })arg3 normalizedMinimumSize:(struct { double x1; double x2; })arg4 translationDelta:(struct CGPoint { double x1; double x2; })arg5 atTime:(int)arg6 timeScale:(int)arg7;
- (void)playbackAreaPinched:(JFXCompositionPlayerViewController *)arg1 gesture:(UIPinchGestureRecognizer *)arg2 normalizedClipPoints:(NSArray *)arg3 normalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg4 normalizedMinimumSize:(struct { double x1; double x2; })arg5 scaleDelta:(double)arg6 atTime:(int)arg7 timeScale:(int)arg8;
- (void)playbackAreaRotated:(JFXCompositionPlayerViewController *)arg1 gesture:(UIRotationGestureRecognizer *)arg2 normalizedClipPoints:(NSArray *)arg3 normalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg4 normalizedMinimumSize:(struct { double x1; double x2; })arg5 rotateDelta:(double)arg6 atTime:(int)arg7;
- (void)playbackAreaTapped:(JFXCompositionPlayerViewController *)arg1 normalizedClipPoint:(struct CGPoint { double x1; double x2; })arg2 normalizedMinimumSize:(struct { double x1; double x2; })arg3 atTime:(int)arg4;
- (void)playbackDidStart:(JFXCompositionPlayerViewController *)arg1;
- (void)playbackDidStop:(JFXCompositionPlayerViewController *)arg1 currentTime:(int)arg2;
- (void)playbackTimeDidChange:(JFXCompositionPlayerViewController *)arg1 currentTime:(int)arg2;
- (void)updateFromPlayer:(AVPlayer *)arg1;

@end
