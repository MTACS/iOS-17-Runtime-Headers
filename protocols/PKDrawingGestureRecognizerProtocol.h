
@protocol PKDrawingGestureRecognizerProtocol <NSObject>

@required

- (unsigned long long)activeInputProperties;
- (void)cancel;
- (<PKDrawingGestureRecognizerDelegate> *)delegate;
- (<PKDrawingGestureTarget> *)drawingTarget;
- (UITouch *)drawingTouch;
- (void)end;
- (bool)isReplaying;
- (void)setDelegate:(id <PKDrawingGestureRecognizerDelegate>)arg1;
- (void)setDrawingTarget:(id <PKDrawingGestureTarget>)arg1;

@end
