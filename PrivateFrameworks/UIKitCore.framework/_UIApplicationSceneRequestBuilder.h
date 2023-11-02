
@interface _UIApplicationSceneRequestBuilder : NSObject <_UIWorkspaceSceneRequestOptionsBuilding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_customizeWorkspaceRequestOptions:(id)arg1 usingRequest:(id)arg2;
- (id)_initialClientSettingsForRequest:(id)arg1;
- (id)_optionsWithInitialClientSettings:(id)arg1 activationOptions:(id)arg2 targetSession:(id)arg3 optionsClass:(Class)arg4 outError:(id*)arg5;
- (Class)_requestOptionsClass;
- (id)_specification;
- (void)buildWorkspaceRequestOptionsForRequest:(id)arg1 withContinuation:(id /* block */)arg2;

@end
