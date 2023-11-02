
@interface FBSSceneClientSettingsDiff : FBSSettingsDiff

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (Class)_settingsClass;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (bool)pr_averageColorDidChange;
- (bool)pr_contentSizeDidChange;
- (bool)pr_depthEffectDisabledDidChange;
- (bool)pr_desiredLegibilitySettingsDidChange;
- (bool)pr_extendedRenderSessionDidChange;
- (bool)pr_handlesWakeAnimationDidChange;
- (bool)pr_hideChromeDidChange;
- (bool)pr_hideDimmingLayerDidChange;
- (bool)pr_inspect:(unsigned long long)arg1;
- (bool)pr_parallaxEnabledDidChange;
- (bool)pr_significantEventTimeDidChange;
- (bool)pr_significantEventsDidChange;

@end
