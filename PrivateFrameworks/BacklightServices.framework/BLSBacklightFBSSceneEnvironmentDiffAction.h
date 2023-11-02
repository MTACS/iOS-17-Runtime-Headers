
@interface BLSBacklightFBSSceneEnvironmentDiffAction : NSObject {
    <BLSBacklightFBSSceneEnvironmentDiffActionDelegate> * _delegate;
    BLSBacklightSceneSettingsDiffInspector * _diffInspector;
}

@property <BLSBacklightFBSSceneEnvironmentDiffActionDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)performActionsForUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setDelegate:(id)arg1;

@end
