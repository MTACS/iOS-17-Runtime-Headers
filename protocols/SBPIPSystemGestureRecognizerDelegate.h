
@protocol SBPIPSystemGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@required

- (bool)gestureRecognizerShouldFailForMovementPastHysteresis:(UIGestureRecognizer *)arg1;

@end
