
@interface TVRMSDAAPLoginManager : NSObject {
    TVRMSFairPlaySession * _fairPlaySession;
    bool  _isFairPlayRequired;
    TVRMSDAAPRequestManager * _requestManager;
}

- (void).cxx_destruct;
- (void)_continueFairPlayHandshakeWithData:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_isFairplayRequiredForServerInfo:(id)arg1;
- (void)_requestControlInterfaceWithCompletionHandler:(id /* block */)arg1;
- (void)_requestFairPlayHandshake:(id /* block */)arg1;
- (void)_requestLoginWithCompletionHandler:(id /* block */)arg1;
- (void)_requestServerInfoWithCompletionHandler:(id /* block */)arg1;
- (id)initWithRequestManager:(id)arg1;
- (void)loginWithCompletionHandler:(id /* block */)arg1;

@end
