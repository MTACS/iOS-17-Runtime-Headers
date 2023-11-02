
@interface SBCrossfadeDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fromAppLayout;
    bool  _fullScreenTransition;
    SBHomeScreenSwitcherModifier * _homeScreenModifier;
    SBAppLayout * _toAppLayout;
}

@property (getter=isFullScreenTransition, nonatomic) bool fullScreenTransition;

- (void).cxx_destruct;
- (bool)_isFromAppLayoutAtIndex:(unsigned long long)arg1;
- (bool)_isToAppLayoutAtIndex:(unsigned long long)arg1;
- (bool)_isToOrFromAppLayoutAtIndex:(unsigned long long)arg1;
- (id)_opacitySettings;
- (bool)_shouldEnsureHomeScreenVisible;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;
- (bool)isFullScreenTransition;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)setFullScreenTransition:(bool)arg1;
- (id)topMostLayoutElements;
- (unsigned long long)transactionCompletionOptions;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (double)wallpaperScale;
- (long long)wallpaperStyle;

@end
