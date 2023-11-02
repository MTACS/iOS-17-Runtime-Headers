
@interface SBShelfZoomTransitionModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _centerWindowAppLayout;
    SBAppLayout * _centerWindowBeingReplacedAppLayout;
    unsigned long long  _direction;
    SBAppLayout * _fromAppLayout;
    SBAppLayout * _fullScreenSpaceAppLayout;
    SBSwitcherShelf * _shelf;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForCenterWindowInShelf;
- (bool)_isEffectivelyInShelf;
- (bool)_shouldDimLayoutRole:(long long)arg1 inAppLayout:(id)arg2 forZoomDirection:(unsigned long long)arg3;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)contentPageViewScaleForAppLayout:(id)arg1 withScale:(double)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (id)hiddenAppLayoutsInShelf:(id)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(unsigned long long)arg2 fromAppLayout:(id)arg3 toAppLayout:(id)arg4 shelf:(id)arg5;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (struct SBSwitcherShelfPresentationAttributes { bool x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; unsigned long long x3; unsigned long long x4; })presentationAttributesForShelf:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
