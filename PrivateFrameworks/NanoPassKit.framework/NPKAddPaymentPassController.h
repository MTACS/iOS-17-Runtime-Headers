
@interface NPKAddPaymentPassController : PKAddPaymentPassController <NPKAddPaymentPassControllerClientProtocol, PKXPCServiceDelegate> {
    PKAddPaymentPassRequestConfiguration * _configuration;
    bool  _didFinishCallbackSent;
    PKXPCService * _remoteService;
}

@property (nonatomic, retain) PKAddPaymentPassRequestConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didFinishCallbackSent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKXPCService *remoteService;
@property (readonly) Class superclass;

+ (bool)canAddPaymentPass;

- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_sendDidFinishWithPass:(id)arg1 error:(id)arg2;
- (id)configuration;
- (bool)didFinishCallbackSent;
- (void)didFinishWithPass:(id)arg1 error:(id)arg2;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;
- (void)presentWithCompletion:(id /* block */)arg1;
- (id)remoteService;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)setConfiguration:(id)arg1;
- (void)setDidFinishCallbackSent:(bool)arg1;
- (void)setRemoteService:(id)arg1;

@end
