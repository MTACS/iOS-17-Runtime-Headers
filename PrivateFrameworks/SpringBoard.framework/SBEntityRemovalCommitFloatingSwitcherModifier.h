
@interface SBEntityRemovalCommitFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _floatingConfiguration;
    SBAppLayout * _fromAppLayout;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (bool)_isIndexFromAppLayout:(unsigned long long)arg1;
- (bool)_isIndexToAppLayout:(unsigned long long)arg1;
- (id)_layoutSettings;
- (double)_toBeRemovedFinalScale;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4;
- (bool)isContentStatusBarVisible;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
