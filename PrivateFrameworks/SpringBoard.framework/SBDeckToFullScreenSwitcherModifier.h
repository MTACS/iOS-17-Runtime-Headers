
@interface SBDeckToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier * _deckModifier;
    long long  _direction;
    SBAppLayout * _fullScreenAppLayout;
    bool  _wantsMinificationFilter;
}

- (void).cxx_destruct;
- (id)_appLayoutToScrollToDuringTransition;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsToCacheSnapshots;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 deckModifier:(id)arg4;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
