
@interface SBHLibraryPodFadeAnimator : SBIconAnimator {
    bool  _animationComplete;
    SBFolderController * _innerFolderController;
    UIView * _searchBar;
}

@property (nonatomic, retain) SBHLibraryPodZoomSettings *settings;

- (void).cxx_destruct;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id /* block */)arg3;
- (void)_applyAlphaForFraction:(double)arg1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)cleanup;
- (id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 searchBar:(id)arg3;

@end
