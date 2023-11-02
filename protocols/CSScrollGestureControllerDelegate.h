
@protocol CSScrollGestureControllerDelegate <NSObject>

@required

- (bool)controller:(CSScrollGestureController *)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(UIGestureRecognizer *)arg2;

@optional

- (void)controllerDidCancelHorizontalScrolling:(CSScrollGestureController *)arg1;
- (void)controllerWillCancelHorizontalScrolling:(CSScrollGestureController *)arg1;

@end
