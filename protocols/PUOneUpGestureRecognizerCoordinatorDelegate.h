
@protocol PUOneUpGestureRecognizerCoordinatorDelegate <NSObject>

@optional

- (bool)oneUpGestureRecgonizerCoordinator:(PUOneUpGestureRecognizerCoordinator *)arg1 shouldAllowIrisGestureAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (UIView *)oneUpGestureRecognizerCoordinatorViewHostingTouchingGesture:(PUOneUpGestureRecognizerCoordinator *)arg1;

@end
