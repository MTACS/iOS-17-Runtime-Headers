
@interface _EXExtensionIdentity : NSObject <MTSDeviceSetupExtensionIdentity, NSSecureCoding, _EXExtensionConfigurationProviding, _EXExtensionRepresenting>

@property (readonly) NSUUID *UUID;
@property (readonly) NSArray *alternateSandboxProfileNames;
@property (readonly) LSApplicationExtensionRecord *applicationExtensionRecord;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) bool canDisable;
@property (readonly) <_EXExtensionConfigurationProviding> *configuration;
@property (readonly) Class connectionHandlerClass;
@property (readonly, copy) NSURL *containingAppBundleURL;
@property (readonly) LSBundleRecord *containingBundleRecord;
@property (readonly) NSURL *containingURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned char defaultUserElection;
@property (readonly, copy) NSString *description;
@property (readonly) bool disableLaunchdCheckinTimeout;
@property (readonly) bool enabled;
@property (readonly) unsigned long long enablementState;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSURL *executableURL;
@property (readonly) Class extensionClass;
@property (readonly) Class extensionContextClass;
@property (readonly) NSDictionary *extensionDictionary;
@property (readonly) NSDictionary *extensionPointConfiguration;
@property (readonly) NSString *extensionPointIdentifier;
@property (readonly) bool hasSandboxEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class hostContextClass;
@property (readonly) ISIcon *icon;
@property (readonly) NSString *internalServiceName;
@property (readonly) NSString *localizedName;
@property (readonly) NSDictionary *nsExtensionAttributes;
@property (readonly) bool performsUserInteractiveWork;
@property (readonly) unsigned int platform;
@property (readonly) bool presentsUserInterface;
@property (readonly) Class principalClass;
@property (readonly) NSDictionary *requiredHostEntitlements;
@property (readonly) bool requiresHostToBeContainerApp;
@property (readonly) bool requiresLegacyInfrastructure;
@property (readonly) bool requiresMacCatalystBehavior;
@property (readonly) bool requiresMultiInstance;
@property (readonly) bool requiresSceneHosting;
@property (readonly) NSArray *roles;
@property (readonly) NSString *sandboxProfileName;
@property (readonly) NSDictionary *sdkDictionary;
@property (readonly) NSString *serviceName;
@property (readonly) bool showsInExtensionsManager;
@property (readonly) NSArray *spotlightImporterIdentifiers;
@property (readonly) bool spotlightIndexable;
@property (readonly) Class superclass;
@property (readonly) bool supportsNSExtensionPlistKeys;
@property (getter=isSystemComponent, readonly) bool systemComponent;
@property (readonly) bool targetsSystemExtensionPoint;
@property (readonly) unsigned long long type;
@property (readonly) bool unelected;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSURL *url;
@property (readonly) unsigned char userElection;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)disableExtension:(id)arg1 error:(id*)arg2;
+ (bool)enableExtension:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (id)_executableURLWithError:(id*)arg1;
- (id)_init;
- (id)alternateSandboxProfileNames;
- (bool)canDisable;
- (id)configuration;
- (Class)connectionHandlerClass;
- (id)description;
- (bool)disableLaunchdCheckinTimeout;
- (bool)enabled;
- (unsigned long long)enablementState;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;
- (id)executableURL;
- (Class)extensionClass;
- (Class)extensionContextClass;
- (id)extensionPointConfiguration;
- (bool)hasSandboxEntitlement;
- (unsigned long long)hash;
- (Class)hostContextClass;
- (id)icon;
- (id)initWithApplicationExtensionRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlugInKitProxy:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 error:(id*)arg2;
- (id)internalServiceName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToExtension:(id)arg1;
- (bool)isSystemComponent;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (id)nsExtensionAttributes;
- (bool)performsUserInteractiveWork;
- (bool)presentsUserInterface;
- (Class)principalClass;
- (id)requiredHostEntitlements;
- (bool)requiresHostToBeContainerApp;
- (bool)requiresLegacyInfrastructure;
- (bool)requiresMultiInstance;
- (bool)requiresSceneHosting;
- (id)roles;
- (id)sandboxProfileName;
- (id)serviceName;
- (bool)showsInExtensionsManager;
- (id)spotlightImporterIdentifiers;
- (bool)spotlightIndexable;
- (bool)supportsNSExtensionPlistKeys;
- (bool)targetsSystemExtensionPoint;
- (unsigned long long)type;
- (bool)unelected;
- (id)uniqueIdentifier;
- (id)xpcOverlayDictionaryOverridingSandboxProfileName:(id)arg1 multiInstance:(bool)arg2 arguments:(id)arg3 additionalEnvironment:(id)arg4;

// Image: /System/Library/Frameworks/ExtensionKit.framework/ExtensionKit

- (id)configurationWithParameters:(id)arg1;
- (Class)extensionViewControllerClassForSceneRole:(id)arg1;
- (id)scenes;

// Image: /System/Library/Frameworks/MatterSupport.framework/MatterSupport

- (id)containingAppBundleURL;

@end
