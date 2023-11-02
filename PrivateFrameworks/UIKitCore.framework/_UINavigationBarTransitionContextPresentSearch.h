
@interface _UINavigationBarTransitionContextPresentSearch : _UINavigationBarTransitionContext {
    UIView * _transitioningScopeBarContainer;
}

- (void).cxx_destruct;
- (void)_animateBackgroundView;
- (void)_prepareBackgroundView;
- (void)_resetContentAndLargeTitleViewCompleted:(bool)arg1;
- (void)animate;
- (void)cancel;
- (void)complete;
- (void)prepare;
- (int)transition;

@end
