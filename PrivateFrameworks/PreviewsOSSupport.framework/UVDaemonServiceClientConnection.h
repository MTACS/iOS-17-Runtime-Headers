
@interface UVDaemonServiceClientConnection : UVBSConnection <UVBSClientConnection, UVDaemonServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createWithVariant:(long long)arg1 error:(id*)arg2;

- (void)activate;
- (oneway void)copyURLToAgentDescriptorPayload:(id)arg1 usingData:(id)arg2 replyHandler:(id /* block */)arg3;
- (oneway void)grantExecutePermissionToAgentDescriptorPayload:(id)arg1 usingData:(id)arg2 replyHandler:(id /* block */)arg3;
- (oneway void)sendPreviewServiceMessage:(id)arg1 replyHandler:(id /* block */)arg2;

@end
