
@protocol _UIDigitizerGestureRecognizerImpDelegate <NSObject>

@required

- (void)pressesEndedSuccessfully:(_UIDigitizerGestureRecognizerImp *)arg1;
- (void)pressesHeldForMinimum:(_UIDigitizerGestureRecognizerImp *)arg1;
- (void)pressesHeldOverMaximum:(_UIDigitizerGestureRecognizerImp *)arg1;
- (void)pressesNotHeldLongEnough:(_UIDigitizerGestureRecognizerImp *)arg1;
- (void)touchesBeganSuccessfully:(_UIDigitizerGestureRecognizerImp *)arg1;

@end
