
@protocol SUUIDynamicBarAnimatorDelegate <NSObject>

@required

- (bool)dynamicBarAnimator:(SUUIDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorDidUpdate:(SUUIDynamicBarAnimator *)arg1;

@optional

- (void)dynamicBarAnimatorWillEnterSteadyState:(SUUIDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(SUUIDynamicBarAnimator *)arg1;

@end
