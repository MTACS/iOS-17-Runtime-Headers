
@interface SBHStackConfigurationFadeAnimator : NSObject <SBHViewControllerTransitionAnimating> {
    bool  _alreadyAnimating;
    BSAnimationSettings * _animationSettings;
    UIView * _sourceSnapshotView;
}

@property (getter=isAlreadyAnimating, nonatomic) bool alreadyAnimating;
@property (nonatomic, readonly) BSAnimationSettings *animationSettings;
@property (nonatomic, retain) UIView *sourceSnapshotView;

- (void).cxx_destruct;
- (void)_configureForEndpoint:(long long)arg1 withCoordinator:(id)arg2;
- (void)_setupMatchMoveAnimationWithSourceView:(id)arg1 targetView:(id)arg2;
- (void)_updateSourceSnapshotViewUsingSourceIconView:(bool)arg1 withCoordinator:(id)arg2;
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (id)animationSettings;
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;
- (id)init;
- (bool)isAlreadyAnimating;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)setAlreadyAnimating:(bool)arg1;
- (void)setSourceSnapshotView:(id)arg1;
- (id)sourceSnapshotView;

@end
