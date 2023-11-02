
@protocol WFDrawerGestureCoordinatorDelegate <NSObject>

@required

- (UIView *)containerView;
- (double)drawerHeight;
- (UIView *)drawerView;
- (void)gestureCoordinator:(WFDrawerGestureCoordinator *)arg1 didContinueInteractionWithDrawerHeight:(double)arg2;
- (void)gestureCoordinator:(WFDrawerGestureCoordinator *)arg1 didFinishInteractionWithVelocity:(double)arg2 acceleration:(double)arg3 animation:(WFDrawerAnimation *)arg4;
- (void)gestureCoordinatorDidBeginInteraction:(WFDrawerGestureCoordinator *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })grabberAreaBounds;
- (double)maximumDrawerHeight;
- (double)minimumDrawerHeight;

@end
