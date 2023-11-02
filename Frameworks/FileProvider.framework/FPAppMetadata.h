
@interface FPAppMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _displayName;
    NSURL * _documentsURL;
    bool  _isManaged;
    NSString * _providerDomainID;
    bool  _useDefaultProviderDomainID;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) NSURL *documentsURL;
@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, retain) NSString *providerDomainID;
@property (nonatomic, readonly) bool useDefaultProviderDomainID;

+ (id)_entitledCloudDocsContainerIDForAppProxy:(id)arg1;
+ (id)_entitledUbiquityContainerIDForAppProxy:(id)arg1;
+ (bool)_isContainerIDPermitted:(id)arg1;
+ (id)_localizedCustomDisplayNameForAppProxy:(id)arg1;
+ (id)findBundleIDForCurrentPlatformInSet:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)documentsURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppProxy:(id)arg1 providerDomainID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isManaged;
- (id)providerDomainID;
- (void)setDisplayName:(id)arg1;
- (void)setProviderDomainID:(id)arg1;
- (bool)useDefaultProviderDomainID;

@end
