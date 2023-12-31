
@protocol SKUIDynamicBarAnimatorDelegate <NSObject>

@required

- (bool)dynamicBarAnimator:(SKUIDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorDidUpdate:(SKUIDynamicBarAnimator *)arg1;

@optional

- (void)dynamicBarAnimatorWillEnterSteadyState:(SKUIDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(SKUIDynamicBarAnimator *)arg1;

@end
