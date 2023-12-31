
@interface VSAuditToken : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSData * _tokenBytes;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSData *tokenBytes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setTokenBytes:(id)arg1;
- (id)tokenBytes;

@end
