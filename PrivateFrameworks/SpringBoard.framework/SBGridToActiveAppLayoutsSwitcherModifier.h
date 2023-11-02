
@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {
    NSArray * _activeAppLayouts;
    long long  _direction;
    SBSwitcherModifier * _gridModifier;
    bool  _wantsMinificationFilter;
}

- (void).cxx_destruct;
- (bool)_isEffectivelyFullScreen;
- (bool)_isIndexActive:(unsigned long long)arg1;
- (id)_layoutSettings;
- (double)_unselectedCardScale;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleTransitionEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenScale;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 activeAppLayouts:(id)arg3 gridModifier:(id)arg4;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (double)wallpaperScale;
- (long long)wallpaperStyle;

@end
