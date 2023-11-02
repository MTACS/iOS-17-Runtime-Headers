
@interface CHSWidgetExtensionInfo : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying> {
    bool  _allowsMixedLocalizations;
    NSArray * _availableLocalizations;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSArray * _configurations;
    NSString * _containerBundleIdentifier;
    NSURL * _containerURL;
    NSString * _dataProtectionLevel;
    NSArray * _descriptors;
    NSString * _effectiveContainerBundleIdentifier;
    CHSEntitlementCollection * _entitlements;
    bool  _isDevelopmentExtension;
    NSDate * _lastModifiedDate;
    NSArray * _nominatedContainerBundleIdentifiers;
    NSArray * _placeholderURLs;
    NSString * _sdkVersion;
    NSArray * _snapshotURLs;
    NSURL * _systemDataContainerURL;
    NSArray * _timelineURLs;
    NSString * _version;
    bool  _wantsLocation;
}

@property (nonatomic, readonly) bool allowsMixedLocalizations;
@property (nonatomic, readonly, copy) NSArray *availableLocalizations;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (nonatomic, readonly, copy) NSArray *configurations;
@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *containerURL;
@property (nonatomic, readonly, copy) NSString *dataProtectionLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *descriptors;
@property (nonatomic, readonly, copy) NSString *effectiveContainerBundleIdentifier;
@property (nonatomic, readonly) NSObject *entitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDevelopmentExtension;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly, copy) NSArray *nominatedContainerBundleIdentifiers;
@property (nonatomic, readonly, copy) NSArray *placeholderURLs;
@property (nonatomic, readonly, copy) NSString *sdkVersion;
@property (nonatomic, readonly, copy) NSArray *snapshotURLs;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *systemDataContainerURL;
@property (nonatomic, readonly, copy) NSArray *timelineURLs;
@property (nonatomic, readonly, copy) NSString *version;
@property (nonatomic, readonly) bool wantsLocation;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithInfo:(id)arg1;
- (bool)allowsMixedLocalizations;
- (id)availableLocalizations;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)configurations;
- (id)containerBundleIdentifier;
- (id)containerURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataProtectionLevel;
- (id)descriptors;
- (id)effectiveContainerBundleIdentifier;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)entitlements;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isDevelopmentExtension;
- (id)lastModifiedDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nominatedContainerBundleIdentifiers;
- (id)placeholderURLs;
- (id)sdkVersion;
- (id)snapshotURLs;
- (id)systemDataContainerURL;
- (id)timelineURLs;
- (id)version;
- (bool)wantsLocation;

@end
