
@interface SBHomeToDeckSwitcherModifier : SBHomeToSwitcherSwitcherModifier

- (id)_layoutSettings;
- (id)_opacitySettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutToScrollToDuringTransition;
- (id)appLayoutsToCacheSnapshots;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (long long)homeScreenBackdropBlurType;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
