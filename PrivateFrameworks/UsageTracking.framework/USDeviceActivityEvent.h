
@interface USDeviceActivityEvent : NSObject <NSSecureCoding> {
    NSSet * _applicationTokens;
    NSSet * _bundleIdentifiers;
    NSSet * _categoryIdentifiers;
    NSSet * _categoryTokens;
    bool  _isUntokenized;
    NSDateComponents * _threshold;
    NSSet * _webDomainTokens;
    NSSet * _webDomains;
}

@property (readonly, copy) NSSet *applicationTokens;
@property (readonly, copy) NSSet *bundleIdentifiers;
@property (readonly, copy) NSSet *categoryIdentifiers;
@property (readonly, copy) NSSet *categoryTokens;
@property (readonly) bool includesAllActivity;
@property (readonly) bool isUntokenized;
@property (readonly, copy) NSDateComponents *threshold;
@property (readonly, copy) NSSet *webDomainTokens;
@property (readonly, copy) NSSet *webDomains;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationTokens;
- (id)bundleIdentifiers;
- (id)categoryIdentifiers;
- (id)categoryTokens;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includesAllActivity;
- (id)initWithApplicationTokens:(id)arg1 categoryTokens:(id)arg2 webDomainTokens:(id)arg3 threshold:(id)arg4;
- (id)initWithBundleIdentifiers:(id)arg1 categoryIdentifiers:(id)arg2 webDomains:(id)arg3 threshold:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUntokenized;
- (id)threshold;
- (id)webDomainTokens;
- (id)webDomains;

@end
