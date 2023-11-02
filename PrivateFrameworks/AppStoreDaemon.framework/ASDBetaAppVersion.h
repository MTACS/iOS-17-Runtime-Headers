
@interface ASDBetaAppVersion : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _bundleVersion;
    long long  _platform;
    NSString * _shortVersion;
}

@property (readonly) NSString *bundleID;
@property (readonly) NSString *bundleVersion;
@property (readonly) long long platform;
@property (readonly) NSString *shortVersion;

+ (long long)defaultPlatform;
+ (bool)supportsSecureCoding;
+ (id)versionWithBundleID:(id)arg1 bundleVersion:(id)arg2 andShortVersion:(id)arg3;
+ (id)versionWithBundleID:(id)arg1 bundleVersion:(id)arg2 platform:(long long)arg3 andShortVersion:(id)arg4;

- (void).cxx_destruct;
- (id)bundleID;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)platform;
- (id)shortVersion;

@end
