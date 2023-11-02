
@protocol CSPlatterHomeGestureManaging <NSObject>

@required

- (<SBUIPresentableHomeGestureContext> *)homeGestureContextForViewController:(UIViewController *)arg1;
- (void)unregisterHomeGestureContextForViewController:(UIViewController *)arg1;

@end
