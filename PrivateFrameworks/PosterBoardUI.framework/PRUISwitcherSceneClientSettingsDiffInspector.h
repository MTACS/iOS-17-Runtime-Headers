
@interface PRUISwitcherSceneClientSettingsDiffInspector : UIApplicationSceneClientSettingsDiffInspector

+ (id)diffInspectorForObservingDiffContext;

- (void)_observeOtherSetting:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)observePrimaryPosterOffsetWithBlock:(id /* block */)arg1;
- (void)observePrimaryPosterScaleWithBlock:(id /* block */)arg1;
- (void)observeSwitcherContextIDWithBlock:(id /* block */)arg1;
- (void)observeSwitcherLayoutModeWithBlock:(id /* block */)arg1;

@end
