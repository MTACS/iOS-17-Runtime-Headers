
@interface PreviewsInjection.UVControlAgent : NSObject <UVAgentControlServiceProtocol> {
    void $__lazy_storage_$_hostMessagePipeAgent;
    void $__lazy_storage_$_shellMessagePipeAgent;
    void activeSecurityScopedURLs;
    void connection;
}

- (void).cxx_destruct;
- (void)connectHostMessagePipeWithEndpoint:(id)arg1;
- (void)connectJITWithEndpoint:(id)arg1 setupPayload:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)connectShellMessagePipeWithEndpoint:(id)arg1;
- (void)copyURLWithURLWrapperData:(id)arg1 reply:(id /* block */)arg2;
- (void)createPreviewNonUIAgentWithEndpoint:(id)arg1;
- (void)createPreviewSceneAgentWithEndpoint:(id)arg1 forSceneIdentifier:(id)arg2;
- (void)grantExecutePermissionWithURLWrapperData:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end
