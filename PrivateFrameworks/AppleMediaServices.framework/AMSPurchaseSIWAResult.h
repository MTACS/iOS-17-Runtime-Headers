
@interface AMSPurchaseSIWAResult : NSObject <NSCopying, NSSecureCoding> {
    AMSPurchaseSIWAAuthorizationResult * _authorizationResult;
    AMSPurchaseResult * _purchaseResult;
}

@property (nonatomic, readonly) AMSPurchaseSIWAAuthorizationResult *authorizationResult;
@property (nonatomic, readonly) AMSPurchaseResult *purchaseResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorizationResult;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchaseResult:(id)arg1 authorizationResult:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPurchaseSIWAResult:(id)arg1;
- (id)purchaseResult;

@end
