
@interface PKPaymentRewrapRequest : PKPaymentRewrapRequestBase {
    NSString * _hostApplicationIdentifier;
    NSString * _merchantDisplayName;
    NSString * _merchantIdentifier;
}

@property (nonatomic, copy) NSString *hostApplicationIdentifier;
@property (nonatomic, copy) NSString *merchantDisplayName;
@property (nonatomic, copy) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)endpointComponents;
- (id)hostApplicationIdentifier;
- (id)merchantDisplayName;
- (id)merchantIdentifier;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setMerchantDisplayName:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;

@end
