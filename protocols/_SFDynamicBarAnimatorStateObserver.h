
@protocol _SFDynamicBarAnimatorStateObserver <NSObject>

@optional

- (void)dynamicBarAnimatorStateDidChange:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(_SFDynamicBarAnimator *)arg1;

@end
