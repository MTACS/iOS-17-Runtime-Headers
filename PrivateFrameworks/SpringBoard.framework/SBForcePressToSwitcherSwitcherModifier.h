
@interface SBForcePressToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier * _multitaskingModifier;
    SBAppLayout * _selectedAppLayout;
    long long  _startingEnvironmentMode;
}

- (void).cxx_destruct;
- (id)_appLayoutToScrollToDuringTransition;
- (id)_dismissForEmptySwitcherResponseName;
- (unsigned long long)_indexOfSelectedAppLayout;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (double)containerStatusBarAnimationDuration;
- (id)handleTimerEvent:(id)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
