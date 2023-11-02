
@protocol _UIRotaryGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@optional

- (void)rotaryGestureRecognizerBeganClassifyingMovement:(_UIRotaryGestureRecognizer *)arg1;
- (bool)rotaryGestureRecognizerCanBeginFromRest:(_UIRotaryGestureRecognizer *)arg1;
- (void)rotaryGestureRecognizerCancelledRestTimer:(_UIRotaryGestureRecognizer *)arg1;
- (void)rotaryGestureRecognizerFailedClassifyingMovement:(_UIRotaryGestureRecognizer *)arg1;
- (bool)rotaryGestureRecognizerMustBeginFromRest:(_UIRotaryGestureRecognizer *)arg1;
- (void)rotaryGestureRecognizerStartedRestTimer:(_UIRotaryGestureRecognizer *)arg1;
- (void)rotaryGestureRecognizerUpdatedClassifyingMovement:(_UIRotaryGestureRecognizer *)arg1;

@end
