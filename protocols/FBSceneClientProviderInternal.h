
@protocol FBSceneClientProviderInternal <FBSceneClientProvider>

@required

- (<FBSceneClient> *)registerHost:(id <FBSceneHost>)arg1 settings:(FBSSceneSettings *)arg2 initialClientSettings:(FBSSceneClientSettings *)arg3 fromRemnant:(FBSceneRemnant *)arg4 error:(out id*)arg5;
- (void)registerInvalidationAction:(FBSceneClientProviderInvalidationAction *)arg1;
- (void)unregisterHost:(id <FBSceneHost>)arg1;

@end
