
@interface FBSSceneSettingsDiff : FBSSettingsDiff

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (Class)_settingsClass;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (bool)pr_inspect:(unsigned long long)arg1;
- (bool)pr_posterContentDidChange;
- (bool)pr_posterPropertiesDidChange;
- (bool)pr_unlockProgressDidChange;

@end
