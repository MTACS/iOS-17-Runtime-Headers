
@interface SBHLibraryFadeAnimator : NSObject <SBHViewControllerTransitionAnimating> {
    bool  _alreadyAnimating;
    BSAnimationSettings * _animationSettings;
}

@property (getter=isAlreadyAnimating, nonatomic) bool alreadyAnimating;
@property (nonatomic, readonly) BSAnimationSettings *animationSettings;

- (void).cxx_destruct;
- (void)_configureIndicatorViewsForEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)_configurePrimaryViewsForEndpoint:(long long)arg1 finalizing:(bool)arg2 withContext:(id)arg3;
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (id)animationSettings;
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;
- (id)init;
- (bool)isAlreadyAnimating;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)setAlreadyAnimating:(bool)arg1;

@end
