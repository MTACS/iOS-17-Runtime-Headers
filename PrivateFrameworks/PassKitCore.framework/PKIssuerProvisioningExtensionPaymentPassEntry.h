
@interface PKIssuerProvisioningExtensionPaymentPassEntry : PKIssuerProvisioningExtensionPassEntry <NSSecureCoding> {
    PKAddPaymentPassRequestConfiguration * _addRequestConfiguration;
}

@property (nonatomic, readonly) PKAddPaymentPassRequestConfiguration *addRequestConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 art:(struct CGImage { }*)arg4;
- (id)addRequestConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 art:(struct CGImage { }*)arg3 addRequestConfiguration:(id)arg4;

@end
