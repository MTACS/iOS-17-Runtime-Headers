
@interface CHUISWidgetSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector

- (void)_observerForKey:(long long)arg1 observer:(id /* block */)arg2;
- (void)inspectDiff:(id)arg1 withContext:(id)arg2;
- (void)observeAnimationsPausedWithBlock:(id /* block */)arg1;
- (void)observeCanAppearInSecureEnvironmentWithBlock:(id /* block */)arg1;
- (void)observeClipBehaviorWithBlock:(id /* block */)arg1;
- (void)observeColorSchemeWithBlock:(id /* block */)arg1;
- (void)observeContentPausedWithBlock:(id /* block */)arg1;
- (void)observeContentTypeWithBlock:(id /* block */)arg1;
- (void)observeInlineTextParametersWithBlock:(id /* block */)arg1;
- (void)observeInteractionDisabledWithBlock:(id /* block */)arg1;
- (void)observeMetricsWithBlock:(id /* block */)arg1;
- (void)observePrefersUnredactedContentInLowLuminanceEnvironmentWithBlock:(id /* block */)arg1;
- (void)observeRenderSchemeWithBlock:(id /* block */)arg1;
- (void)observeShowsWidgetLabelWithBlock:(id /* block */)arg1;
- (void)observeSupportsLowLuminanceWithBlock:(id /* block */)arg1;
- (void)observeTintingParametersWithBlock:(id /* block */)arg1;
- (void)observeVisibilityWithBlock:(id /* block */)arg1;
- (void)observeVisibleEntryShouldSnapshotWithBlock:(id /* block */)arg1;
- (void)observeWidgetConfigurationIdentifierBlock:(id /* block */)arg1;
- (void)observeWidgetPriorityWithBlock:(id /* block */)arg1;
- (void)observeWidgetWithBlock:(id /* block */)arg1;

@end
