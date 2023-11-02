
@interface ICUserIdentityContext : NSObject <NSCopying, NSSecureCoding> {
    ICUserIdentity * _identity;
    ICUserIdentityStore * _identityStore;
}

@property (nonatomic, readonly) ICUserIdentity *identity;
@property (nonatomic, readonly) ICUserIdentityStore *identityStore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)identityStore;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
