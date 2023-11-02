
@interface LNEffectiveBundleIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleMetadataForURLs:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 bundleIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
