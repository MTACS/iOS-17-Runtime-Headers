
@protocol UIWebTouchEventsGestureRecognizerDelegate <NSObject>

@required

- (bool)isAnyTouchOverActiveArea:(NSSet *)arg1;

@optional

- (bool)gestureRecognizer:(UIWebTouchEventsGestureRecognizer *)arg1 shouldIgnoreWebTouchWithEvent:(UIEvent *)arg2;
- (bool)shouldIgnoreWebTouch;

@end
