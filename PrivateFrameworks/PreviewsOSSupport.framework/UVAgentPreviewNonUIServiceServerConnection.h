
@interface UVAgentPreviewNonUIServiceServerConnection : UVBSConnection <UVAgentPreviewNonUIServiceProtocol, UVBSServerConnection>

@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activate;
- (oneway void)performUpdate:(id)arg1 replyHandler:(id /* block */)arg2;
- (oneway void)sendEndpoint:(id)arg1 context:(id)arg2 contentIdentifier:(id)arg3;

@end
