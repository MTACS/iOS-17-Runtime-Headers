
@interface SBHomeScreenZoomSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _direction;
}

- (bool)_isEffectivelyHome;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2;
- (bool)isHomeScreenContentRequired;
- (bool)isWallpaperRequiredForSwitcher;
- (double)wallpaperScale;
- (long long)wallpaperStyle;

@end
