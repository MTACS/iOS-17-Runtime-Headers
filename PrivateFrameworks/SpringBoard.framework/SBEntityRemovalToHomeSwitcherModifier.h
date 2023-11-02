
@interface SBEntityRemovalToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    bool  _canAnimateHomeScreenStyle;
    double  _homeAnimationDelay;
    SBSwitcherModifier * _multitaskingModifier;
}

- (void).cxx_destruct;
- (id)_cornerRadiusSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (id)handleTimerEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (id)initWithTransitionID:(id)arg1 homeAnimationDelay:(double)arg2 multitaskingModifier:(id)arg3;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisible;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (double)wallpaperScale;
- (long long)wallpaperStyle;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsDockWindowLevelAssertion;

@end
