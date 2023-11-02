
@interface SBSwitcherToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _direction;
    SBSwitcherModifier * _floatingDeckModifier;
    SBAppLayout * _fullScreenAppLayout;
}

- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsToCacheSnapshots;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 floatingDeckModifier:(id)arg4;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (long long)switcherBackdropBlurType;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (bool)wantsSwitcherBackdropBlur;
- (bool)wantsSwitcherDimmingView;

@end
