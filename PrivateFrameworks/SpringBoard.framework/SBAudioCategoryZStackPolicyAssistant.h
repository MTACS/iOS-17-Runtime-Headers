
@interface SBAudioCategoryZStackPolicyAssistant : NSObject <FBSceneObserver> {
    NSSet * _audioCategoriesDisablingVolumeHUD;
    <SBAudioCategoryZStackPolicyAssistantDelegate> * _delegate;
    NSArray * _foregroundScenes;
    FBSSceneClientSettingsDiffInspector * _sceneClientSettingsDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;

@end
