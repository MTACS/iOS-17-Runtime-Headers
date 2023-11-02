
@interface _TtCC15PreviewShellKit12DaemonServerP33_576070ED32EC2757B9EEB3834790A9E115MessageReceiver : NSObject <UVDaemonServiceProtocol> {
    void connection;
    void responder;
}

- (void).cxx_destruct;
- (void)copyURLToAgentDescriptorPayload:(id)arg1 usingData:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)grantExecutePermissionToAgentDescriptorPayload:(id)arg1 usingData:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)init;
- (void)sendPreviewServiceMessage:(id)arg1 replyHandler:(id /* block */)arg2;

@end
