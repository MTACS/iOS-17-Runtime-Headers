
@interface PKInAppPaymentService : NSObject {
    PKXPCService * _remoteService;
}

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)cardDataForMerchantIdentifier:(id)arg1 countryCode:(id)arg2 completion:(id /* block */)arg3;
- (long long)cardsAvailableForAMPWithCountryCode:(id)arg1;
- (void)cardsAvailableForAMPWithCountryCode:(id)arg1 completion:(id /* block */)arg2;
- (void)enrollPaymentPassWithUniqueIdentifier:(id)arg1 merchantSession:(id)arg2 completion:(id /* block */)arg3;
- (void)hasValidSecurityConfigurationWithType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)merchantStatusCheck:(id)arg1 merchantDomain:(id)arg2 sourceApplicationSecondaryIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)paymentHardwareStatusWithType:(unsigned long long)arg1;
- (void)paymentHardwareStatusWithType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)paymentServicesMerchantURLForAPIType:(long long)arg1 completion:(id /* block */)arg2;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 hostSceneIdentifier:(id)arg3 hostSceneBundleIdentifier:(id)arg4 orientation:(id)arg5 intentTriggered:(bool)arg6 completion:(id /* block */)arg7;
- (void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)secureElementStatus:(unsigned long long*)arg1;
- (void)secureElementStatusWithCompletion:(id /* block */)arg1;
- (void)validatePayLaterMerchandisingConfiguration:(id)arg1 type:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
