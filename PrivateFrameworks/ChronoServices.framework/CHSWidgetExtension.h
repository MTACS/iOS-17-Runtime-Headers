
@interface CHSWidgetExtension : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSString * _containerBundleLocalizedDisplayName;
    long long  _dataProtectionLevel;
    CHSEntitlementCollection * _entitlements;
    bool  _hasValidHash;
    unsigned long long  _hashValue;
    CHSExtensionIdentity * _identity;
    NSString * _localizedDisplayName;
    NSArray * _orderedDescriptors;
}

@property (nonatomic, readonly) NSString *containerBundleIdentifier;
@property (nonatomic, readonly) NSString *containerBundleLocalizedDisplayName;
@property (nonatomic, readonly) long long dataProtectionLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CHSEntitlementCollection *entitlements;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CHSExtensionIdentity *identity;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) NSArray *orderedDescriptors;
@property (nonatomic, readonly, copy) NSString *sourceDeviceIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)containerBundleIdentifier;
- (id)containerBundleLocalizedDisplayName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataProtectionLevel;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptors;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlements;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)identity;
- (id)initFromExtension:(id)arg1;
- (id)initFromExtension:(id)arg1 includeIntents:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLinkedOnOrAfter:(unsigned long long)arg1;
- (id)localizedDisplayName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)orderedDescriptors;
- (id)sourceDeviceIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
