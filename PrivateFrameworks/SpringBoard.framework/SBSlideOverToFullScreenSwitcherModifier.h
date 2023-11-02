
@interface SBSlideOverToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fromSlideOverAppLayout;
    SBHomeScreenZoomSwitcherModifier * _homeScreenZoomModifier;
    SBAppLayout * _removedMainAppLayout;
    SBAppLayout * _toFullScreenAppLayout;
}

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 slideOverAppLayout:(id)arg2 fullScreenAppLayout:(id)arg3 replacingMainAppLayout:(id)arg4;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg1 fromAppLayouts:(id)arg2;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)visibleHomeAffordanceLayoutElements;
- (long long)wallpaperStyle;
- (bool)wantsSlideOverTongue;

@end
