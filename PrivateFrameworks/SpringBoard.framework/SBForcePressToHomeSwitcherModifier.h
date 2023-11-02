
@interface SBForcePressToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    double  _initalPanThreshold;
    SBSwitcherModifier * _multitaskingModifier;
    SBAppLayout * _selectedAppLayout;
    long long  _startingEnvironmentMode;
}

- (void).cxx_destruct;
- (double)_switcherCardScale;
- (id)appLayoutsToCacheSnapshots;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 initialPanThreshold:(double)arg4 multitaskingModifier:(id)arg5;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
