
@interface UVAgentControlServiceServerConnection : UVBSConnection <UVAgentControlServiceProtocol, UVBSServerConnection>

@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activate;
- (oneway void)connectHostMessagePipeWithEndpoint:(id)arg1;
- (oneway void)connectJITWithEndpoint:(id)arg1 setupPayload:(id)arg2 replyHandler:(id /* block */)arg3;
- (oneway void)connectShellMessagePipeWithEndpoint:(id)arg1;
- (oneway void)copyURLWithURLWrapperData:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)createPreviewNonUIAgentWithEndpoint:(id)arg1;
- (oneway void)createPreviewSceneAgentWithEndpoint:(id)arg1 forSceneIdentifier:(id)arg2;
- (oneway void)grantExecutePermissionWithURLWrapperData:(id)arg1 reply:(id /* block */)arg2;

@end
