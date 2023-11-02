
@interface SBBannerUnfurlToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBBannerUnfurlSourceContext * _bannerUnfurlSourceContext;
    SBAppLayout * _fromAppLayout;
    SBFullScreenAppLayoutSwitcherModifier * _fullScreenModifier;
    bool  _isScalingDown;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (bool)_isAppLayout:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 bannerUnfurlSourceContext:(id)arg4;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;
- (bool)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
