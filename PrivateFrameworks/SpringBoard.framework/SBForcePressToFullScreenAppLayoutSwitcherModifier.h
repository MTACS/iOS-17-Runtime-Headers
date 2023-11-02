
@interface SBForcePressToFullScreenAppLayoutSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fromAppLayout;
    SBSwitcherModifier * _multitaskingModifier;
    long long  _startingEnvironmentMode;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (id)appLayoutsToCacheSnapshots;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
