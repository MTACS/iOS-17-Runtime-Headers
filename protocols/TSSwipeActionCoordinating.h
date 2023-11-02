
@protocol TSSwipeActionCoordinating

@required

- (void)coordinatingResetSwipeAction;
- (UIPanGestureRecognizer *)coordinatingSwipeActionPanGestureRecognizer;
- (bool)coordinatingSwipeActionShouldCancel;

@end
