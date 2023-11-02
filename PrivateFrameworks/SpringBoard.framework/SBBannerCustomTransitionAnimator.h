
@interface SBBannerCustomTransitionAnimator : BNBannerTransitionAnimator <SBBannerCustomTransitionAnimating> {
    SBBannerCustomTransitionAnimatorContext * _customContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)animateInteractive:(bool)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateWithSettings:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_updateCustomContextWithTransitionContext:(id)arg1;
- (void)actionsForTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;

@end
