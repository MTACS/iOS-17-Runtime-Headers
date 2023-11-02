
@interface AMSPurchaseSIWAAuthorizationResult : NSObject <NSCopying, NSSecureCoding> {
    AKAuthorization * _authorization;
    NSError * _error;
}

@property (nonatomic, retain) AKAuthorization *authorization;
@property (nonatomic, readonly) <AKCredential> *authorizationCredential;
@property (nonatomic, retain) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorization;
- (id)authorizationCredential;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithAuthorization:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPurchaseSIWAAuthorizationResult:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (void)setError:(id)arg1;

@end
