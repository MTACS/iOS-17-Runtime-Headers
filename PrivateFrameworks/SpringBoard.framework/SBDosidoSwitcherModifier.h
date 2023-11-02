
@interface SBDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    unsigned long long  _direction;
    SBAppLayout * _fromAppLayout;
    bool  _shouldSuppressScaleAnimation;
    SBAppLayout * _toAppLayout;
}

@property (nonatomic) bool shouldSuppressScaleAnimation;

- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 direction:(unsigned long long)arg4;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setShouldSuppressScaleAnimation:(bool)arg1;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;
- (bool)shouldSuppressScaleAnimation;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
