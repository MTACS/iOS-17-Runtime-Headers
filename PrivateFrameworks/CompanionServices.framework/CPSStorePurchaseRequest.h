
@interface CPSStorePurchaseRequest : CPSAuthenticationRequest <NSSecureCoding> {
    ACAccount * _account;
    AMSDelegatePurchaseRequest * _purchaseRequest;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AMSDelegatePurchaseRequest *purchaseRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (long long)authType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)purchaseRequest;
- (void)setAccount:(id)arg1;
- (void)setPurchaseRequest:(id)arg1;

@end
