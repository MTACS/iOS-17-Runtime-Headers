
@protocol SBViewMorphAnimatorObserver <NSObject>

@optional

- (void)animatorWasCanceled:(SBViewMorphAnimator *)arg1;
- (void)animatorWasInterrupted:(SBViewMorphAnimator *)arg1;
- (void)didEndAllAnimations;
- (void)didEndSourceAnimations:(void *)arg1 finished:(void *)arg2 continueBlock:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)didEndTargetAnimations:(void *)arg1 finished:(void *)arg2 continueBlock:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)willRemoveTargeMatchMoveAnimationAtFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withinSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)willStartSourceAnimations:(unsigned long long)arg1;
- (void)willStartTargetAnimations:(unsigned long long)arg1;

@end
