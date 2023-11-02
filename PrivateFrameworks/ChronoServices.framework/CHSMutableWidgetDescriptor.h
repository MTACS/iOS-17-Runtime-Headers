
@interface CHSMutableWidgetDescriptor : CHSWidgetDescriptor

@property (getter=isBackgroundRemovable, nonatomic) bool backgroundRemovable;
@property (nonatomic, copy) NSString *containerBundleIdentifier;
@property (nonatomic, copy) INIntent *defaultIntent;
@property (nonatomic, copy) CHSIntentReference *defaultIntentReference;
@property (nonatomic, copy) NSDictionary *disfavoredLocations;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool enablesMultipleTapTargets;
@property (nonatomic, copy) NSString *eventMachServiceName;
@property (nonatomic, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, copy) CHSExtensionIdentity *extensionIdentity;
@property (nonatomic) bool hiddenBySensitiveUI;
@property (nonatomic, retain) CHSIntentRecommendationsContainer *intentRecommendationsContainer;
@property (nonatomic, copy) NSString *intentType;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSData *localeToken;
@property (nonatomic, copy) NSString *nativeContainerBundleIdentifier;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) long long preferredBackgroundStyle;
@property (nonatomic, copy) NSString *sdkVersion;
@property (nonatomic) unsigned long long supportedFamilies;
@property (nonatomic) bool supportsInteraction;
@property (nonatomic) bool supportsVibrantContent;
@property (getter=isTransparent, nonatomic) bool transparent;
@property (nonatomic, copy) NSString *widgetDescription;
@property (nonatomic) long long widgetVisibility;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackgroundRemovable:(bool)arg1;
- (void)setContainerBundleIdentifier:(id)arg1;
- (void)setDisfavoredLocations:(id)arg1;
- (void)setDisfavoredLocations:(unsigned long long)arg1 on:(long long)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setEnablesMultipleTapTargets:(bool)arg1;
- (void)setEventMachServiceName:(id)arg1;
- (void)setExtensionBundleIdentifier:(id)arg1;
- (void)setExtensionIdentity:(id)arg1;
- (void)setHiddenBySensitiveUI:(bool)arg1;
- (void)setIntentRecommendationsContainer:(id)arg1;
- (void)setIntentType:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLocaleToken:(id)arg1;
- (void)setNativeContainerBundleIdentifier:(id)arg1;
- (void)setPlatform:(unsigned long long)arg1;
- (void)setPreferredBackgroundStyle:(long long)arg1;
- (void)setSdkVersion:(id)arg1;
- (void)setSupportedFamilies:(unsigned long long)arg1;
- (void)setSupportsInteraction:(bool)arg1;
- (void)setSupportsVibrantContent:(bool)arg1;
- (void)setTransparent:(bool)arg1;
- (void)setWidgetDescription:(id)arg1;
- (void)setWidgetVisibility:(long long)arg1;

@end
