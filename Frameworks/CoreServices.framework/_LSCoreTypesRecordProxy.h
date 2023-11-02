
@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding> {
    LSBundleRecord * _realRecord;
}

@property (nonatomic, readonly) LSBundleRecord *_realRecord;

+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SDKVersion;
- (id)UIBackgroundModes;
- (id)URL;
- (id)WKBackgroundModes;
- (id)_loadRealRecord;
- (id)_personasWithAttributes;
- (id)_realRecord;
- (id)accentColorName;
- (id)applicationIdentifier;
- (id)associatedPersonas;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)bundleIdentifier;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (bool)conformsToProtocol:(id)arg1;
- (id)dataContainerURL;
- (id)debugDescription;
- (id)description;
- (void)detach;
- (BOOL)developerType;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlements;
- (id)executableURL;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)intentDefinitionURLs;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (bool)isEqual:(id)arg1;
- (bool)isFreeProfileValidated;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isProfileValidated;
- (bool)isUPPValidated;
- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)arg1;
- (id)localizedShortName;
- (id)localizedShortNameWithPreferredLocalizations:(id)arg1;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2;
- (id)machOUUIDs;
- (id)managedPersonas;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)platform;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)serviceRecords;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)supportedIntentMediaCategories;
- (id)supportedIntents;
- (bool)supportsNowPlaying;
- (id)teamIdentifier;
- (bool)wasBuiltWithThreadSanitizer;

@end
