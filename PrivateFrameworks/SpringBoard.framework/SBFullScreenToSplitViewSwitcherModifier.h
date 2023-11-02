
@interface SBFullScreenToSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    bool  _blurExistingDisplayItem;
    SBAppLayout * _existingAppLayout;
    SBAppLayout * _incomingAppLayout;
}

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)handleSceneReadyEvent:(id)arg1;
- (double)homeScreenDimmingAlpha;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
