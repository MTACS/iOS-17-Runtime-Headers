
@interface _EXDefaults : NSObject

@property (readonly) bool allowPrototypeAPI;
@property (readonly) bool allowPrototypeSPI;
@property (readonly) bool allowSimulatedJetsam;
@property (readonly) NSSet *allowedUnsandboxedExtensionPoints;
@property (readonly) bool allowsAppleInternalComponents;
@property (readonly) NSSet *alwaysEnabledExtensionBundleIdentifiers;
@property (readonly) bool appleInternal;
@property (readonly) bool assertOnDisallowedPrototypeAPIUse;
@property (readonly) bool assertOnDisallowedPrototypeSPIUse;
@property (readonly) double debugDelayBeforeRequestingRemoteViewController;
@property (readonly) double defaultPlaceholderDelayBeforeShowingLoadingIndicator;
@property (readonly) bool defaultPlaceholderViewControllerShowsState;
@property (readonly) double defaultRetryFailedSessionDelay;
@property (readonly) NSString *defaultSandboxProfileName;
@property (readonly) bool disableLaunchdCheckinTimeout;
@property (readonly) bool enforceLegacyExtensionPointAllowList;
@property (readonly) bool enforceXPCCacheCodeSigning;
@property (readonly) NSSet *errorTypes;
@property (readonly) NSSet *extensionItemTypes;
@property (readonly) bool forceSandbox;
@property (readonly) bool hostRequiresEntitlements;
@property (readonly) bool implementsNSExtension;
@property (readonly) NSSet *itemProviderTypes;
@property (readonly) bool platformShouldExhibitEmbeddedBehavior;
@property (readonly) NSSet *plistAndValueTypes;
@property (readonly) NSSet *plistTypes;
@property (readonly) bool preferInProcessDiscovery;
@property (readonly) bool queryAllowsDuplicates;
@property (readonly) bool queryPredicatesEvaluatedOutOfProcess;
@property (readonly) bool startUIHostingSessionImmediately;
@property (readonly) bool supportExtensionKitConfigPath;
@property (readonly) bool useItemProviderXPCConnection;
@property (readonly) bool useLSDExtensionKitServiceForDiscovery;
@property (readonly) bool useLSDExtensionKitServiceForLaunch;
@property (readonly) bool viewBridgeSupportsCatalystExtensions;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

+ (id)sharedInstance;

- (id)_init;
- (bool)allowPrototypeAPI;
- (bool)allowPrototypeSPI;
- (bool)allowSimulatedJetsam;
- (id)allowedUnsandboxedExtensionPoints;
- (bool)allowsAppleInternalComponents;
- (id)alwaysEnabledExtensionBundleIdentifiers;
- (bool)appleInternal;
- (bool)assertOnDisallowedPrototypeAPIUse;
- (bool)assertOnDisallowedPrototypeSPIUse;
- (id)defaultSandboxProfileName;
- (bool)disableLaunchdCheckinTimeout;
- (bool)enforceLegacyExtensionPointAllowList;
- (bool)enforceXPCCacheCodeSigning;
- (id)errorTypes;
- (id)extensionItemTypes;
- (bool)forceSandbox;
- (bool)hostRequiresEntitlements;
- (bool)implementsNSExtension;
- (id)itemProviderTypes;
- (bool)platformShouldExhibitEmbeddedBehavior;
- (id)plistAndValueTypes;
- (id)plistTypes;
- (bool)preferInProcessDiscovery;
- (bool)queryAllowsDuplicates;
- (bool)queryPredicatesEvaluatedOutOfProcess;
- (bool)startUIHostingSessionImmediately;
- (bool)supportExtensionKitConfigPath;
- (bool)useItemProviderXPCConnection;
- (bool)useLSDExtensionKitServiceForDiscovery;
- (bool)useLSDExtensionKitServiceForLaunch;

// Image: /System/Library/Frameworks/ExtensionKit.framework/ExtensionKit

- (double)debugDelayBeforeRequestingRemoteViewController;
- (double)defaultPlaceholderDelayBeforeShowingLoadingIndicator;
- (bool)defaultPlaceholderViewControllerShowsState;
- (double)defaultRetryFailedSessionDelay;
- (bool)viewBridgeSupportsCatalystExtensions;

@end
