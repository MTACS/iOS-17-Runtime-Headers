
@interface PTDomainInfo : NSObject <NSSecureCoding> {
    NSString * _domainGroupName;
    NSString * _domainName;
    NSString * _settingsClassName;
    NSString * _settingsFrameworkBundlePath;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSString *domainGroupName;
@property (nonatomic, readonly) NSString *domainName;
@property (nonatomic, readonly) NSString *settingsClassName;
@property (nonatomic, readonly) NSString *settingsFrameworkBundlePath;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)_readDomainInfoFromPersistence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domainGroupName;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)loadSettingsClassBundleIfNecessary;
- (id)settingsClassName;
- (id)settingsFrameworkBundlePath;
- (id)uniqueIdentifier;

@end
