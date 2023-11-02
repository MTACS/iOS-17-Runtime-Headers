
@interface PKPaymentCredentialMetadataDate : PKPaymentCredentialMetadata {
    NSString * _displayFormat;
}

@property (nonatomic, readonly, copy) NSString *displayFormat;

- (void).cxx_destruct;
- (bool)_isEqualToMetadata:(id)arg1;
- (id)displayFormat;
- (id)displayString;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
