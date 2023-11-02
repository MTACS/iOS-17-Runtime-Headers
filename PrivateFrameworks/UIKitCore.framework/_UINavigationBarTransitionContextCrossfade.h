
@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext

- (void)_animateContentView;
- (void)_animateLargeTitleView;
- (void)_animateSearchBar;
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;
- (void)_prepareContentView;
- (void)_prepareLargeTitleView;
- (void)_prepareSearchBar;
- (void)animate;
- (void)cancel;
- (void)complete;
- (double)contentViewMaxY;
- (void)prepare;
- (bool)shouldPerformTwoPartCrossfadeTransition;
- (int)transition;

@end
