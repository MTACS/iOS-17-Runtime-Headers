
@protocol TSDGestureDelegate <UIGestureRecognizerDelegate>

@required

- (void)didReset:(id <TSDGesture>)arg1;
- (void)gestureRemovedFromView:(id <TSDGesture>)arg1;

@optional

- (bool)gestureActionShouldBegin:(id <TSDGesture>)arg1;

@end
