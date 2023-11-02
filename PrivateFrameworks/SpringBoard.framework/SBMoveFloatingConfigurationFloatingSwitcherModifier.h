
@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _fromFloatingConfiguration;
    long long  _toFloatingConfiguration;
}

- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromFloatingConfiguration:(long long)arg2 toFloatingConfiguration:(long long)arg3;
- (id)keyboardSuppressionMode;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
