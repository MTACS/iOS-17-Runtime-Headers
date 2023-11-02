
@interface CHSMutableSessionPlatterDescriptor : CHSSessionPlatterDescriptor

@property (nonatomic, copy) NSData *activityAttributesType;
@property (nonatomic, copy) NSString *containerBundleIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *eventMachServiceName;
@property (nonatomic, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, copy) CHSExtensionIdentity *extensionIdentity;
@property (nonatomic, copy) NSData *localeToken;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) long long preferredBackgroundStyle;
@property (nonatomic, copy) NSString *sdkVersion;
@property (nonatomic) unsigned long long supportedFamilies;
@property (nonatomic) bool supportsVibrantContent;
@property (nonatomic, copy) NSString *widgetDescription;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setActivityAttributesType:(id)arg1;
- (void)setContainerBundleIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEventMachServiceName:(id)arg1;
- (void)setExtensionBundleIdentifier:(id)arg1;
- (void)setExtensionIdentity:(id)arg1;
- (void)setLocaleToken:(id)arg1;
- (void)setPlatform:(unsigned long long)arg1;
- (void)setPreferredBackgroundStyle:(long long)arg1;
- (void)setSdkVersion:(id)arg1;
- (void)setSupportedFamilies:(unsigned long long)arg1;
- (void)setSupportsVibrantContent:(bool)arg1;
- (void)setWidgetDescription:(id)arg1;

@end
