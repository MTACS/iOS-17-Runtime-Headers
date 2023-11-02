
@interface SBHomeGestureToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    bool  _showingOrAnimatingCardsForFlyIn;
}

- (id)appLayoutsToCacheSnapshots;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 showingOrAnimatingCardsForFlyIn:(bool)arg2;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (unsigned long long)transactionCompletionOptions;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
