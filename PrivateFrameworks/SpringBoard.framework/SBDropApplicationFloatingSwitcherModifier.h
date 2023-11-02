
@interface SBDropApplicationFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fromAppLayout;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;
- (id)keyboardSuppressionMode;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
