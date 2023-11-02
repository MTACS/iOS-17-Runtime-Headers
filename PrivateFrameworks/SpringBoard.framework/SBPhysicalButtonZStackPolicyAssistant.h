
@interface SBPhysicalButtonZStackPolicyAssistant : NSObject <FBSceneObserver> {
    <SBPhysicalButtonZStackPolicyAssistantDelegate> * _delegate;
    NSArray * _foregroundScenes;
    NSArray * _physicalButtonSceneTargets;
    FBSSceneClientSettingsDiffInspector * _sceneClientSettingsDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;

@end
