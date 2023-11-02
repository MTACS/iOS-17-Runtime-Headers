
@interface _TtC16SiriAudioSupportP33_803E311218F114B89697FFF1DFF8ED2632AppleMediaServicesRequestHandler : NSObject <AMSPurchaseDelegate, AMSPurchaseResponseProtocol>

- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;

@end
