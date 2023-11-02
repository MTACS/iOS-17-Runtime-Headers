
@protocol _SFDynamicBarAnimatorDelegate <_SFDynamicBarAnimatorStateObserver>

@required

- (bool)dynamicBarAnimator:(_SFDynamicBarAnimator *)arg1 canTransitionToState:(long long)arg2 byDraggingWithOffset:(double)arg3;
- (double)dynamicBarAnimator:(_SFDynamicBarAnimator *)arg1 minimumTopBarHeightForOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(_SFDynamicBarAnimator *)arg1;

@end
