
@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData {
    bool  _requiresInteraction;
    unsigned long long  _status;
}

@property (nonatomic) bool requiresInteraction;
@property (nonatomic) unsigned long long status;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPKPeerPaymentPurchaseData:(id)arg1;
- (bool)requiresInteraction;
- (void)setRequiresInteraction:(bool)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
