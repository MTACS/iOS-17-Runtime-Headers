
@interface LSBundleIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identityString;
    unsigned long long  _personaType;
    NSString * _personaUniqueString;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *identityString;
@property (nonatomic, readonly) unsigned long long personaType;
@property (nonatomic, readonly) NSString *personaUniqueString;

+ (id)bundleIdentityForIdentityString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identityString;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentityString:(id)arg1 personaUniqueString:(id)arg2 personaType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)personaType;
- (id)personaUniqueString;

@end
