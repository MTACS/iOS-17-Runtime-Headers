
@interface SecureChannelServiceProxy : NSObject <SecureChannelService> {
    NSXPCConnection * _connectionToService;
    NSObject<SecureChannelService> * _remoteObject;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)actionForURL:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)runApproverFlowForURL:(id)arg1 completion:(id /* block */)arg2;

@end
