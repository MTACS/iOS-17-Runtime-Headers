
@protocol SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate <NSObject>

@required

- (void)expandablePlatterGesture:(SiriSharedUIExpandablePlatterPanGestureRecognizer *)arg1 didCompleteTransitionToStyle:(long long)arg2 phaseHeight:(double)arg3;
- (void)expandablePlatterGesture:(SiriSharedUIExpandablePlatterPanGestureRecognizer *)arg1 trackingGestureDidUpdateHeight:(double)arg2;
- (void)expandablePlatterGestureDidBeginWithRecognizer:(SiriSharedUIExpandablePlatterPanGestureRecognizer *)arg1;
- (void)expandablePlatterGestureDidEndWithRecognizer:(SiriSharedUIExpandablePlatterPanGestureRecognizer *)arg1;

@end
