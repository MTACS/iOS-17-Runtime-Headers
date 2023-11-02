
@interface _EXExtensionValueIdentity : _EXExtensionIdentity {
    NSUUID * _UUID;
    NSDictionary * _attributes;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    LSBundleRecord * _containingBundleRecord;
    NSURL * _containingURL;
    unsigned char  _defaultUserElection;
    NSDictionary * _entitlements;
    NSDictionary * _extensionDictionary;
    NSString * _extensionPointIdentifier;
    NSString * _localizedName;
    unsigned int  _platform;
    NSDictionary * _sdkDictionary;
    NSURL * _url;
    unsigned char  _userElection;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)applicationExtensionRecord;
- (id)attributes;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)containingBundleRecord;
- (id)containingURL;
- (unsigned char)defaultUserElection;
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;
- (id)entitlements;
- (id)extensionDictionary;
- (id)extensionPointIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (unsigned int)platform;
- (id)sdkDictionary;
- (id)url;
- (unsigned char)userElection;

@end
