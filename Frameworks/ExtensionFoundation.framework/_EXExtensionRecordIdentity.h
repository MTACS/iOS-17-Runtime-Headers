
@interface _EXExtensionRecordIdentity : _EXExtensionIdentity {
    LSExtensionPointRecord * _extensionPoint;
    LSApplicationExtensionRecord * _record;
}

@property (readonly) LSExtensionPointRecord *extensionPoint;
@property (readonly) LSApplicationExtensionRecord *record;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)applicationExtensionRecord;
- (id)attributes;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (Class)classForCoder;
- (id)containingBundleRecord;
- (id)containingURL;
- (unsigned char)defaultUserElection;
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;
- (id)entitlements;
- (id)extensionDictionary;
- (id)extensionPoint;
- (id)extensionPointIdentifier;
- (id)extensionSettingsKey;
- (id)initWithApplicationExtensionRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlugInKitProxy:(id)arg1;
- (id)localizedName;
- (unsigned int)platform;
- (id)record;
- (id)sdkDictionary;
- (bool)setUserElection:(unsigned char)arg1 error:(id*)arg2;
- (id)url;
- (unsigned char)userElection;

@end
