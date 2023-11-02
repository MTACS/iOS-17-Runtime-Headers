
@interface PRUISwitcherSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector

+ (id)diffInspectorForObservingDiffContext;

- (void)_observeOtherSetting:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)observeLeadingTopButtonFrameWithBlock:(id /* block */)arg1;
- (void)observeLockPosterComplicationRowHiddenWithBlock:(id /* block */)arg1;
- (void)observeLockPosterFloatingLayerInlinedWithBlock:(id /* block */)arg1;
- (void)observeLockPosterLiveContentLayerWithBlock:(id /* block */)arg1;
- (void)observeLockPosterLiveFloatingLayerWithBlock:(id /* block */)arg1;
- (void)observeLockPosterOverlayLayerWithBlock:(id /* block */)arg1;
- (void)observePreferredSwitcherLayoutModeWithBlock:(id /* block */)arg1;
- (void)observeTrailingTopButtonFrameWithBlock:(id /* block */)arg1;
- (void)observeVibrancyConfigurationWithBlock:(id /* block */)arg1;

@end
