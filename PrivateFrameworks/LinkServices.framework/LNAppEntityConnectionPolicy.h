
@interface LNAppEntityConnectionPolicy : NSObject {
    NSString * _appBundleIdentifier;
    NSString * _appEntityIdentifier;
    NSString * _appEntityMangledTypeName;
    LNEffectiveBundleIdentifier * _effectiveBundleIdentifier;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSString *appEntityIdentifier;
@property (nonatomic, readonly) NSString *appEntityMangledTypeName;
@property (nonatomic, readonly) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)appEntityIdentifier;
- (id)appEntityMangledTypeName;
- (id)connectionWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectiveBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAppEntityIdentifier:(id)arg1 appEntityMangledTypeName:(id)arg2 effectiveBundleIdentifier:(id)arg3 appBundleIdentifier:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
