
@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier {
    bool  _floatingAppVisibleOverExclusiveForegroundApp;
    bool  _floatingAppVisibleOverSplitView;
    long long  _floatingConfiguration;
    bool  _floatingSwitcherVisible;
    unsigned long long  _options;
    bool  _shouldDimAndBlockTouches;
}

- (bool)_shouldDimAndBlockTouchesToAppsUnderFloating;
- (long long)_stashedFloatingConfigurationForFloatingConfiguration:(long long)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (double)switcherDimmingAlpha;
- (bool)switcherDimmingViewBlocksTouches;
- (bool)wantsSwitcherDimmingView;

@end
