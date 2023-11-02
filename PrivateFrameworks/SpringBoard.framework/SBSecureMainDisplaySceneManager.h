
@interface SBSecureMainDisplaySceneManager : SBSceneManager <BLSSceneDelegateWithActionHandlers> {
    NSMapTable * _blsActionHandlersForScenes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(bool)arg2 forScene:(id)arg3;
- (id)_sceneIdentifierForBundleIdentifier:(id)arg1;
- (bool)_shouldAutoHostScene:(id)arg1;
- (bool)_shouldTrackScenesForDeactivation;
- (void)addActionHandler:(id)arg1 forScene:(id)arg2;
- (id)newSceneIdentityForApplication:(id)arg1;
- (void)removeActionHandler:(id)arg1 forScene:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3;

@end
