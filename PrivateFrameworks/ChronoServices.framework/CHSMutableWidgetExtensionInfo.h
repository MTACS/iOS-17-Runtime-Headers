
@interface CHSMutableWidgetExtensionInfo : CHSWidgetExtensionInfo

@property (nonatomic) bool allowsMixedLocalizations;
@property (nonatomic, copy) NSArray *availableLocalizations;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSURL *bundleURL;
@property (nonatomic, copy) NSArray *configurations;
@property (nonatomic, copy) NSString *containerBundleIdentifier;
@property (nonatomic, copy) NSURL *containerURL;
@property (nonatomic, copy) NSString *dataProtectionLevel;
@property (nonatomic, copy) NSArray *descriptors;
@property (nonatomic, copy) NSString *effectiveContainerBundleIdentifier;
@property (nonatomic, retain) NSObject *entitlements;
@property (nonatomic) bool isDevelopmentExtension;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, copy) NSArray *nominatedContainerBundleIdentifiers;
@property (nonatomic, copy) NSArray *placeholderURLs;
@property (nonatomic, copy) NSString *sdkVersion;
@property (nonatomic, copy) NSArray *snapshotURLs;
@property (nonatomic, copy) NSURL *systemDataContainerURL;
@property (nonatomic, copy) NSArray *timelineURLs;
@property (nonatomic, copy) NSString *version;
@property (nonatomic) bool wantsLocation;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAllowsMixedLocalizations:(bool)arg1;
- (void)setAvailableLocalizations:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setConfigurations:(id)arg1;
- (void)setContainerBundleIdentifier:(id)arg1;
- (void)setContainerURL:(id)arg1;
- (void)setDataProtectionLevel:(id)arg1;
- (void)setDescriptors:(id)arg1;
- (void)setEffectiveContainerBundleIdentifier:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setIsDevelopmentExtension:(bool)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setNominatedContainerBundleIdentifiers:(id)arg1;
- (void)setPlaceholderURLs:(id)arg1;
- (void)setSdkVersion:(id)arg1;
- (void)setSnapshotURLs:(id)arg1;
- (void)setSystemDataContainerURL:(id)arg1;
- (void)setTimelineURLs:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setWantsLocation:(bool)arg1;

@end
