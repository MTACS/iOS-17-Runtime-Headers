
@interface UVAgentPreviewSceneServiceServerConnection : UVBSConnection <UVAgentPreviewSceneServiceProtocol, UVBSServerConnection> {
    NSString * _sceneIdentifier;
}

@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (oneway void)generateStaticOutput:(id /* block */)arg1;
- (void)initializeWithClientContext:(id)arg1;
- (oneway void)performUpdate:(id)arg1 sceneContext:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)sceneIdentifier;
- (oneway void)sendEndpoint:(id)arg1 context:(id)arg2 contentIdentifier:(id)arg3;

@end
