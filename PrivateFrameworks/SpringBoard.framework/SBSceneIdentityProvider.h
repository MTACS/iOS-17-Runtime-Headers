
@interface SBSceneIdentityProvider : NSObject <SBApplicationSceneIdentityProviding> {
    FBSDisplayIdentity * _displayIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_sceneIdentifierForBundleIdentifier:(id)arg1;
- (id)initWithDisplayIdentity:(id)arg1;
- (id)newSceneIdentityForApplication:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1 createPrimaryIfRequired:(bool)arg2 sceneSessionRole:(id)arg3;
- (id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(bool)arg3 preferNewScene:(bool)arg4 allowSceneCreation:(bool)arg5 visibleIdentifiers:(id)arg6 preferredDisplay:(id)arg7;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(bool)arg3 preferNewScene:(bool)arg4 visibleIdentifiers:(id)arg5;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 sceneSessionRole:(id)arg4;

@end
