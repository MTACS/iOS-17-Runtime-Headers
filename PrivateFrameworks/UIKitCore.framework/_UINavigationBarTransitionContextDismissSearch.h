
@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {
    UIView * _transitioningScopeBarContainer;
    UISearchBar * _transitioningSearchBar;
}

- (void).cxx_destruct;
- (bool)_shouldCrossfadeDismissal;
- (void)animate;
- (void)cancel;
- (void)complete;
- (void)prepare;
- (int)transition;

@end
