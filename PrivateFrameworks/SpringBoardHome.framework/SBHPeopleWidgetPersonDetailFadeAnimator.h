
@interface SBHPeopleWidgetPersonDetailFadeAnimator : NSObject <SBHViewControllerTransitionAnimating> {
    bool  _alreadyAnimating;
    BSAnimationSettings * _animationSettings;
}

@property (getter=isAlreadyAnimating, nonatomic) bool alreadyAnimating;
@property (nonatomic, readonly, copy) BSAnimationSettings *animationSettings;

- (void).cxx_destruct;
- (void)_configureForEndpoint:(long long)arg1 context:(id)arg2;
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (id)animationSettings;
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;
- (id)init;
- (bool)isAlreadyAnimating;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)setAlreadyAnimating:(bool)arg1;

@end
