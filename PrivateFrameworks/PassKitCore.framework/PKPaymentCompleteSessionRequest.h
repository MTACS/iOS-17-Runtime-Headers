
@interface PKPaymentCompleteSessionRequest : PKPaymentRewrapRequestBase {
    PKPaymentMerchantSession * _merchantSession;
}

@property (nonatomic, retain) PKPaymentMerchantSession *merchantSession;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)endpointComponents;
- (id)merchantSession;
- (void)setMerchantSession:(id)arg1;

@end
