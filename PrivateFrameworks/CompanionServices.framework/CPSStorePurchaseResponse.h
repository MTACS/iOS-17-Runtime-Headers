
@interface CPSStorePurchaseResponse : CPSAuthenticationResponse <NSSecureCoding> {
    AMSDelegatePurchaseResult * _purchaseResult;
}

@property (nonatomic, readonly) AMSDelegatePurchaseResult *purchaseResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchaseResult:(id)arg1;
- (id)purchaseResult;

@end
