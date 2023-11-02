
@interface LNEntityQueryConnectionPolicy : NSObject {
    NSString * _appBundleIdentifier;
    LNEffectiveBundleIdentifier * _effectiveBundleIdentifier;
    NSString * _entityQueryIdentifier;
    NSString * _entityQueryMangledTypeName;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;
@property (nonatomic, readonly) NSString *entityQueryIdentifier;
@property (nonatomic, readonly) NSString *entityQueryMangledTypeName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)connectionWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectiveBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)entityQueryIdentifier;
- (id)entityQueryMangledTypeName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityQueryIdentifier:(id)arg1 entityQueryMangledTypeName:(id)arg2 effectiveBundleIdentifier:(id)arg3 appBundleIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;

@end
