
@interface _HMDAccountIdentifier : HMFObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
}

@property (getter=isAuthenticated, readonly) bool authenticated;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *kind;
@property (readonly, copy) NSString *senderCorrelationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAuthenticated;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)senderCorrelationIdentifier;

@end
