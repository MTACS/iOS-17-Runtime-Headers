
@protocol TSDGestureTarget <NSObject>

@required

- (bool)canHandleGesture:(id <TSDGesture>)arg1;
- (bool)handleGesture:(id <TSDGesture>)arg1;

@optional

- (void)gestureSequenceDidEnd;
- (void)gestureSequenceWillBegin;
- (void)willBeginHandlingGesture:(UIGestureRecognizer *)arg1;

@end
