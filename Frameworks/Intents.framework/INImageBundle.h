
@interface INImageBundle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _bundlePath;
    unsigned long long  _bundleType;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic) unsigned long long bundleType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundlePath;
- (unsigned long long)bundleType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setBundleType:(unsigned long long)arg1;

@end
