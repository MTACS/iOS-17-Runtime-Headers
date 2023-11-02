
@interface SBIconFadeAnimator : SBIconAnimator {
    bool  _addedToWindow;
    UIView * _crossfadeView;
    bool  _fadesReferenceView;
}

@property (nonatomic) bool fadesReferenceView;

- (void).cxx_destruct;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id /* block */)arg3;
- (void)_applyAlphaForFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (bool)fadesReferenceView;
- (id)initWithAnimationContainer:(id)arg1 crossfadeView:(id)arg2;
- (void)setFadesReferenceView:(bool)arg1;

@end
