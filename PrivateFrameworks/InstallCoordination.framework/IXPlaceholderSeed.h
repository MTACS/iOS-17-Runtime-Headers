
@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _bundleName;
    unsigned long long  _installType;
    unsigned long long  _placeholderType;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *bundleName;
@property (nonatomic) unsigned long long installType;
@property (nonatomic, readonly) bool isAppExtension;
@property (nonatomic) unsigned long long placeholderType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)bundleName;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installType;
- (bool)isAppExtension;
- (unsigned long long)placeholderType;
- (void)setBundleID:(id)arg1;
- (void)setBundleName:(id)arg1;
- (void)setInstallType:(unsigned long long)arg1;
- (void)setPlaceholderType:(unsigned long long)arg1;

@end
