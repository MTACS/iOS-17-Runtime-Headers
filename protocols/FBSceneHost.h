
@protocol FBSceneHost <NSObject>

@required

- (void)client:(id <FBSceneClient>)arg1 didReceiveActions:(NSSet *)arg2 forExtension:(Class)arg3;
- (void)client:(id <FBSceneClient>)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (FBSSceneDefinition *)definition;
- (FBSSceneIdentityToken *)identityToken;
- (FBSSceneSpecification *)specification;

@end
