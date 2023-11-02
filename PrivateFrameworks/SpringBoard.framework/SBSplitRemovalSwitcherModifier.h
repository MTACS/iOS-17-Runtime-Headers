
@interface SBSplitRemovalSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _animationPhase;
    long long  _animationStyle;
    SBAppLayout * _fromAppLayout;
    long long  _layoutRoleToKeep;
    long long  _layoutRoleToRemove;
    SBAppLayout * _remainingAppLayout;
    SBAppLayout * _removedAppLayout;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 layoutRoleToRemove:(long long)arg4 animationStyle:(long long)arg5;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
