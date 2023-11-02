
@interface IXPlaceholderAttributes : NSObject <NSCopying, NSSecureCoding> {
    bool  _arcadeApp;
    NSString * _bundleVersion;
    NSString * _companionBundleIdentifierForWatchApp;
    NSDictionary * _exAppExtensionAttributes;
    NSDictionary * _extensionDictionary;
    bool  _launchProhibited;
    NSArray * _lsCounterpartIdentifiers;
    bool  _lsRequiresPostProcessing;
    NSString * _minimumOSVersion;
    NSDictionary * _requiredDeviceCapabilities;
    bool  _runsIndependentlyOfCompanionApp;
    NSArray * _sbAppTags;
    NSString * _sbIconMasqueradeIdentifier;
    NSArray * _uiDeviceFamily;
    bool  _watchOnlyApp;
    NSDictionary * _webKitPushBundleMetadata;
}

@property (nonatomic) bool arcadeApp;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, copy) NSString *companionBundleIdentifierForWatchApp;
@property (nonatomic, copy) NSDictionary *exAppExtensionAttributes;
@property (nonatomic, copy) NSDictionary *extensionDictionary;
@property (nonatomic) bool launchProhibited;
@property (nonatomic, copy) NSArray *lsCounterpartIdentifiers;
@property (nonatomic) bool lsRequiresPostProcessing;
@property (nonatomic, copy) NSString *minimumOSVersion;
@property (nonatomic, copy) NSDictionary *requiredDeviceCapabilities;
@property (nonatomic) bool runsIndependentlyOfCompanionApp;
@property (nonatomic, copy) NSArray *sbAppTags;
@property (nonatomic, copy) NSString *sbIconMasqueradeIdentifier;
@property (nonatomic, copy) NSArray *uiDeviceFamily;
@property (nonatomic) bool watchOnlyApp;
@property (nonatomic, copy) NSDictionary *webKitPushBundleMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_plistKeys;
- (bool)arcadeApp;
- (id)bundleVersion;
- (id)companionBundleIdentifierForWatchApp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exAppExtensionAttributes;
- (id)extensionDictionary;
- (unsigned long long)hash;
- (id)infoPlistContent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfoPlistDictionary:(id)arg1;
- (id)initWithInfoPlistFromBundle:(struct __CFBundle { }*)arg1 error:(id*)arg2;
- (id)initWithInfoPlistFromBundleURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)launchProhibited;
- (id)lsCounterpartIdentifiers;
- (bool)lsRequiresPostProcessing;
- (id)minimumOSVersion;
- (id)requiredDeviceCapabilities;
- (bool)runsIndependentlyOfCompanionApp;
- (id)sbAppTags;
- (id)sbIconMasqueradeIdentifier;
- (void)setArcadeApp:(bool)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setCompanionBundleIdentifierForWatchApp:(id)arg1;
- (void)setExAppExtensionAttributes:(id)arg1;
- (void)setExtensionDictionary:(id)arg1;
- (void)setLaunchProhibited:(bool)arg1;
- (void)setLsCounterpartIdentifiers:(id)arg1;
- (void)setLsRequiresPostProcessing:(bool)arg1;
- (void)setMinimumOSVersion:(id)arg1;
- (void)setRequiredDeviceCapabilities:(id)arg1;
- (void)setRequiredDeviceCapabilitiesWithArray:(id)arg1;
- (void)setRunsIndependentlyOfCompanionApp:(bool)arg1;
- (void)setSbAppTags:(id)arg1;
- (void)setSbIconMasqueradeIdentifier:(id)arg1;
- (void)setUiDeviceFamily:(id)arg1;
- (void)setWatchOnlyApp:(bool)arg1;
- (void)setWebKitPushBundleMetadata:(id)arg1;
- (id)uiDeviceFamily;
- (bool)watchOnlyApp;
- (id)webKitPushBundleMetadata;

@end
