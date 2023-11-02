
@protocol WKTouchActionGestureRecognizerDelegate <NSObject>

@required

- (bool)gestureRecognizerMayDoubleTapToZoomWebView:(UIGestureRecognizer *)arg1;
- (bool)gestureRecognizerMayPanWebView:(UIGestureRecognizer *)arg1;
- (bool)gestureRecognizerMayPinchToZoomWebView:(UIGestureRecognizer *)arg1;
- (NSMapTable *)touchActionActiveTouches;

@end
