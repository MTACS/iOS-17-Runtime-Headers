
@protocol SBApplicationDropSessionSceneProviding <NSObject>

@required

- (bool)isApplicationActiveAndVisible:(SBApplication *)arg1;
- (FBSSceneIdentity *)mostRecentSceneIdentityExcludingLiveScenesForApplication:(SBApplication *)arg1;
- (FBSSceneIdentity *)newSceneIdentityForApplication:(SBApplication *)arg1;
- (FBSSceneIdentity *)preferredSceneIdentityForApplication:(SBApplication *)arg1 targetContentIdentifier:(NSString *)arg2 preferNewScene:(bool)arg3;

@end
