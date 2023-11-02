
@interface CHSBaseDescriptor : NSObject <BSDescriptionProviding, CHSExtensionIdentifiable, NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _eventMachServiceName;
    CHSExtensionIdentity * _extensionIdentity;
    bool  _hiddenBySensitiveUI;
    NSData * _localeToken;
    NSString * _nativeContainerBundleIdentifier;
    unsigned long long  _platform;
    long long  _preferredBackgroundStyle;
    NSString * _sdkVersion;
    unsigned long long  _supportedFamilies;
    bool  _supportsVibrantContent;
    unsigned long long  _version;
    NSString * _widgetDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *effectiveContainerBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *eventMachServiceName;
@property (nonatomic, readonly, copy) CHSExtensionIdentity *extensionIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hiddenBySensitiveUI;
@property (nonatomic, readonly, copy) NSData *localeToken;
@property (nonatomic, readonly, copy) NSString *nativeContainerBundleIdentifier;
@property (nonatomic, readonly) unsigned long long platform;
@property (nonatomic, readonly, copy) NSString *sdkVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedFamilies;
@property (nonatomic) unsigned long long version;
@property (nonatomic, readonly, copy) NSString *widgetDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDescriptor:(id)arg1;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (id)effectiveContainerBundleIdentifier;
- (struct CHSWidgetRenderStyle { long long x1; bool x2; })effectiveRenderStyleForFamily:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventMachServiceName;
- (id)extensionBundleIdentifier;
- (id)extensionIdentity;
- (unsigned long long)hash;
- (bool)hiddenBySensitiveUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 supportedFamilies:(unsigned long long)arg3;
- (id)initWithExtensionIdentity:(id)arg1 supportedFamilies:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLinkedOnOrAfter:(unsigned long long)arg1;
- (bool)isTransparentForFamily:(long long)arg1;
- (id)localeToken;
- (id)nativeContainerBundleIdentifier;
- (unsigned long long)platform;
- (bool)requiresCARenderingForFamily:(long long)arg1;
- (id)sdkVersion;
- (void)setVersion:(unsigned long long)arg1;
- (id)sourceDeviceIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedFamilies;
- (unsigned long long)version;
- (bool)wantsMaterialBackgroundForFamily:(long long)arg1;
- (id)widgetDescription;

@end
