
@interface LSSystemBundleIdentity : LSBundleIdentity {
    NSString * _bundleIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentityString:(id)arg1 parsedIdentityStringDictionary:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;

@end
