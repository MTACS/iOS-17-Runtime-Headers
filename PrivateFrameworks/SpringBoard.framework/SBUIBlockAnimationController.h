
@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController {
    id /* block */  _animationBlock;
    BSAnimationSettings * _animationSettings;
}

- (void).cxx_destruct;
- (void)_didComplete;
- (void)_startAnimation;
- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(id /* block */)arg3;

@end
