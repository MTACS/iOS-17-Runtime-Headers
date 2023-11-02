
@interface SBGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _direction;
    SBAppLayout * _fullScreenAppLayout;
}

- (void).cxx_destruct;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 gridModifier:(id)arg4;
- (id)transitionWillBegin;

@end
