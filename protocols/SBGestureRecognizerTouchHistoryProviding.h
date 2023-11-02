
@protocol SBGestureRecognizerTouchHistoryProviding <NSObject>

@required

- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (double)peakSpeed;

@end
