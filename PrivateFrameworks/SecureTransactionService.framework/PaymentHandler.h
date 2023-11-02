
@interface PaymentHandler : STSTransactionHandler <NFLoyaltyAndPaymentSessionDelegate> {
    NFLoyaltyAndPaymentSession * _nfSession;
    NSArray * _vasCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)loyaltyAndPaymentSession:(id)arg1 didDetectField:(bool)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned int)arg2 withObject:(id)arg3;
- (void)loyaltyAndPaymentSession:(id)arg1 didFailDeferredAuthorization:(bool)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didFelicaStateChange:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(bool)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2;
- (void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg1;
- (id)setActiveCredential:(id)arg1;
- (id)startNFSessionWithCompletion:(id /* block */)arg1;
- (id)startTransactionWithAuthorization:(id)arg1 options:(unsigned long long)arg2;
- (id)stopTransaction;
- (unsigned char)supportedCredentialType;

@end
