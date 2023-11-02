
@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata {
    NSString * _currencyCode;
}

@property (nonatomic, readonly, copy) NSString *currencyCode;

- (void).cxx_destruct;
- (bool)_isEqualToMetadata:(id)arg1;
- (id)currencyCode;
- (id)displayString;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
