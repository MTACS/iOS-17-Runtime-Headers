
@interface SBSystemApertureFluidAnimator : SBSystemApertureAnimator

+ (id)currentAnimationParameters;

- (void)_animateTransition:(id)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)_fluidBehaviorSettings;
- (void)animateWithMode:(long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
