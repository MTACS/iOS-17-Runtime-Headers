
@protocol SBApplicationSceneIdentityProviding <NSObject>

@required

- (FBSSceneIdentity *)newSceneIdentityForApplication:(SBApplication *)arg1;
- (FBSSceneIdentity *)sceneIdentityForApplication:(SBApplication *)arg1;
- (FBSSceneIdentity *)sceneIdentityForApplication:(SBApplication *)arg1 createPrimaryIfRequired:(bool)arg2 sceneSessionRole:(NSString *)arg3;
- (FBSSceneIdentity *)sceneIdentityForApplication:(SBApplication *)arg1 excludingIdentifiers:(NSSet *)arg2;
- (FBSSceneIdentity *)sceneIdentityForApplication:(SBApplication *)arg1 targetContentIdentifier:(NSString *)arg2;
- (FBSSceneIdentity *)sceneIdentityForApplication:(SBApplication *)arg1 targetContentIdentifier:(NSString *)arg2 allowCanMatches:(bool)arg3 preferNewScene:(bool)arg4 allowSceneCreation:(bool)arg5 visibleIdentifiers:(NSSet *)arg6 preferredDisplay:(FBSDisplayIdentity *)arg7;
- (FBSSceneIdentity *)sceneIdentityForApplication:(SBApplication *)arg1 targetContentIdentifier:(NSString *)arg2 allowCanMatches:(bool)arg3 preferNewScene:(bool)arg4 visibleIdentifiers:(NSSet *)arg5;
- (FBSSceneIdentity *)sceneIdentityForApplication:(SBApplication *)arg1 uniqueIdentifier:(NSString *)arg2;
- (FBSSceneIdentity *)sceneIdentityForApplication:(SBApplication *)arg1 uniqueIdentifier:(NSString *)arg2 targetContentIdentifier:(NSString *)arg3;
- (FBSSceneIdentity *)sceneIdentityForApplication:(SBApplication *)arg1 uniqueIdentifier:(NSString *)arg2 targetContentIdentifier:(NSString *)arg3 sceneSessionRole:(NSString *)arg4;

@end
