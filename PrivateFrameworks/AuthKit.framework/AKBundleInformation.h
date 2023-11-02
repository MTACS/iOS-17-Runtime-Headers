
@interface AKBundleInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleDescription;
    NSString * _bundleIdentifier;
    NSString * _bundleName;
    unsigned long long  _bundleType;
    NSDictionary * _otherInfo;
}

@property (nonatomic, readonly, copy) NSString *bundleDescription;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleName;
@property (nonatomic, readonly) unsigned long long bundleType;
@property (nonatomic, readonly, copy) NSDictionary *otherInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleDescription;
- (id)bundleIdentifier;
- (id)bundleName;
- (unsigned long long)bundleType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 bundleName:(id)arg2 bundleDescription:(id)arg3 bundleType:(unsigned long long)arg4 otherInfo:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)otherInfo;

@end
