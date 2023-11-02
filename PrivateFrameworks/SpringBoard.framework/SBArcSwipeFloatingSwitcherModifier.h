
@interface SBArcSwipeFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    unsigned long long  _direction;
    long long  _floatingConfiguration;
    SBAppLayout * _fromAppLayout;
    bool  _hasReshuffledZOrder;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4 direction:(unsigned long long)arg5 needsOvershoot:(bool)arg6;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (id)keyboardSuppressionMode;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;

@end
