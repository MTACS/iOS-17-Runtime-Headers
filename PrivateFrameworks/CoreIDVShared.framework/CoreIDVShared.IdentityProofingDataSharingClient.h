
@interface CoreIDVShared.IdentityProofingDataSharingClient : NSObject <CoreIDVShared.IdentityProofingDataSharing> {
    void disconnectHandler;
    void remoteObjectProxy;
    void remoteObjectProxyError;
    void serverConnection;
}

- (void).cxx_destruct;
- (void)checkUserConsentWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)didChangeUserConsent:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchUserConsentWithCompletion:(id /* block */)arg1;
- (id)init;

@end
