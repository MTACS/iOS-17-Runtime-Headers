
@protocol _MKUserInteractionGestureRecognizerTouchObserver <NSObject>

@required

- (void)gestureRecognizerTouchesBegan:(_MKUserInteractionGestureRecognizer *)arg1;
- (void)gestureRecognizerTouchesCanceled:(_MKUserInteractionGestureRecognizer *)arg1;
- (void)gestureRecognizerTouchesEnded:(_MKUserInteractionGestureRecognizer *)arg1;

@end
