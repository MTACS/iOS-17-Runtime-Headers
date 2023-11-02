
@interface NSExtension : NSObject <CXCallDirectoryStoreMigratorExtension>

@property (readonly) NSURL *URL;
@property (nonatomic, readonly, retain) NSBundle *_extensionBundle;
@property (nonatomic, readonly, copy) NSString *_localizedName;
@property (nonatomic, readonly, copy) NSString *_localizedShortName;
@property (readonly, copy) NSArray *_personas;
@property (setter=_setPlugIn:, nonatomic, retain) <PKPlugIn> *_plugIn;
@property (nonatomic, copy) id /* block */ _requestPostCompletionBlock;
@property (nonatomic, copy) id /* block */ _requestPostCompletionBlockWithItems;
@property (readonly) bool _wantsProcessPerRequest;
@property (nonatomic, readonly, copy) NSDictionary *attributes;
@property (nonatomic, readonly) NSURL *containingAppURL;
@property (nonatomic, readonly) NSString *containingBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabledViaPlugInKit, nonatomic, readonly) bool enabledViaPlugInKit;
@property (nonatomic, readonly, copy) NSString *extensionPointIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *icons;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *infoDictionary;
@property (nonatomic, readonly) NSString *localizedContainingAppName;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) bool optedIn;
@property (nonatomic, readonly) LSPlugInKitProxy *plugInKitProxy;
@property (nonatomic, retain) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSIndexSet *pu_supportedMediaTypes;
@property (nonatomic, copy) id /* block */ requestCancellationBlock;
@property (nonatomic, copy) id /* block */ requestCompletionBlock;
@property (nonatomic, copy) id /* block */ requestInterruptionBlock;
@property (readonly) bool requiresMacCatalystBehavior;
@property (nonatomic, readonly) NSString *safari_containingAppAdamID;
@property (nonatomic, readonly) bool safari_containingAppIsTestFlightApp;
@property (nonatomic, readonly) NSString *safari_correspondingMacOSContainingAppBundleIdentifier;
@property (nonatomic, readonly) NSString *safari_correspondingMacOSExtensionBundleIdentifier;
@property (nonatomic, readonly) NSString *safari_displayVersion;
@property (nonatomic, readonly) NSString *safari_humanReadableDescription;
@property (nonatomic, readonly) NSString *safari_launchServicesDeveloperIdentifier;
@property (nonatomic, readonly) NSString *safari_localizedContainingAppDisplayName;
@property (nonatomic, readonly) NSString *safari_localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *sf_bundleIdentifierForContainingApp;
@property (nonatomic, readonly) NSUUID *sf_uniqueIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *un_allowedSourceIdentifiers;
@property (getter=un_isDefaultContentHidden, nonatomic, readonly) bool un_defaultContentHidden;
@property (getter=un_isDefaultTitleOverridden, nonatomic, readonly) bool un_defaultTitleOverridden;
@property (nonatomic, readonly) double un_effectiveContentSizeRatio;
@property (nonatomic, readonly, copy) NSArray *un_supportedCategoryIdentifiers;
@property (getter=un_isUserInteractionEnabled, nonatomic, readonly) bool un_userInteractionEnabled;
@property (readonly) NSUUID *uuid;
@property (nonatomic, readonly, copy) NSString *version;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_evaluateActivationRuleWithoutWorkarounds:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (bool)_shouldLogExtensionDiscovery;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(id /* block */)arg2;
+ (void)endMatchingExtensions:(id)arg1;
+ (bool)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (id)extensionWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(bool)arg2 error:(id*)arg3;
+ (void)extensionWithURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)extensionWithUUID:(id)arg1 completion:(id /* block */)arg2;
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(id /* block */)arg2;
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id*)arg2;
+ (id)globalStateQueueForExtension:(id)arg1;
+ (void)initializeFiltering;
+ (id)predicateForActivationRule:(id)arg1;

- (void)_dropAssertion;
- (id)_extensionContextForUUID:(id)arg1;
- (void)_hostDidBecomeActiveNote:(id)arg1;
- (void)_hostDidEnterBackgroundNote:(id)arg1;
- (void)_hostWillEnterForegroundNote:(id)arg1;
- (void)_hostWillResignActiveNote:(id)arg1;
- (id)_init;
- (id)_initWithPKPlugin:(id)arg1;
- (bool)_isPhotoServiceAccessGranted;
- (void)_kill:(int)arg1;
- (void)_safelyBeginUsing:(id /* block */)arg1;
- (void)_safelyEndUsing:(id /* block */)arg1;
- (void)_setAllowedErrorClasses:(id)arg1;
- (bool)attemptOptIn:(id*)arg1;
- (bool)attemptOptOut:(id*)arg1;
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(id /* block */)arg2;
- (id)beginExtensionRequestWithInputItems:(id)arg1 error:(id*)arg2;
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(id /* block */)arg3;
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 completion:(id /* block */)arg3;
- (id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 error:(id*)arg3;
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;
- (id)init;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (int)pidForRequestIdentifier:(id)arg1;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

- (id)_as_auxiliaryRemoteObjectWithRequestID:(id)arg1;
- (void)_as_instantiateViewControllerWithConnectionHandler:(id /* block */)arg1;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

- (id)containingAppURL;
- (bool)isEnabledViaPlugInKit;
- (id)localizedContainingAppName;
- (id)localizedName;
- (id)plugInKitProxy;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

+ (id)extensionInfoForCurrentProcess;
+ (id)extensionRepresentedBy:(id)arg1 error:(id*)arg2;
+ (id)extensionWithIdentity:(id)arg1 error:(id*)arg2;

- (id)URL;
- (id)_personas;
- (void)beginExtensionRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)beginExtensionRequest:(id)arg1 error:(id*)arg2;
- (id)containingBundleIdentifier;
- (id)extensionIdentityWithError:(id*)arg1;
- (id)preferredLanguages;
- (bool)requiresMacCatalystBehavior;
- (void)setPreferredLanguages:(id)arg1;
- (id)uuid;

// Image: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI

- (id)SMSReportDestination;
- (id)networkReportDestination;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3;
+ (void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabledUseFilter:(long long)arg1 completion:(id /* block */)arg2;
+ (id)_intents_extensionMatchingAttributesForIntents:(id)arg1;
+ (void)_intents_findAppsWithAnIntentsServiceExtension:(id /* block */)arg1;
+ (void)_intents_findPossibleSiriEnabledAppsWithAnIntentsServiceExtension:(id /* block */)arg1;
+ (void)_intents_findSiriEntitledAppsContainingAnIntentsExtensionWithCompletion:(id /* block */)arg1;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 requireTrustCheck:(bool)arg2 completion:(id /* block */)arg3;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 shouldIgnoreLaunchId:(bool)arg2 completion:(id /* block */)arg3;
+ (void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (void)_intents_matchSiriUISnippetExtensionsWithCompletion:(id /* block */)arg1;
+ (void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1;
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(bool)arg3 requireTrustCheck:(bool)arg4 completion:(id /* block */)arg5;
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(bool)arg3 shouldIgnoreLaunchId:(bool)arg4 requireTrustCheck:(bool)arg5 completion:(id /* block */)arg6;
+ (void)_matchExtensionsWithAttributes:(id)arg1 extensionPointName:(id)arg2 requireTrustCheck:(bool)arg3 completion:(id /* block */)arg4;
+ (void)_matchSnippetExtensionsWithExtensionPointName:(id)arg1 completion:(id /* block */)arg2;
+ (bool)appAllowedToTalkToSiri:(id)arg1;

- (bool)_intents_extensionSupportsAtLeastOneSiriIntent;
- (id)_intents_intentsRestrictedWhileProtectedDataUnavailable;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (bool)_canSupportIntent:(id)arg1;
- (bool)_canSupportIntentClass:(Class)arg1;
- (id)_containingAppDisplayName;
- (id)_containingAppIdentifer;
- (id)_displayName;
- (id)_extensionVendorContextForUUID:(id)arg1 withErrorHandler:(id /* block */)arg2;
- (id)_iconWithFormat:(int)arg1;
- (unsigned long long)_mapExtensionType;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (void)extensionsWithMatchingPointName:(id)arg1 activationRule:(id)arg2 completion:(id /* block */)arg3;
+ (void)extensionsWithMatchingPointName:(id)arg1 baseIdentifier:(id)arg2 activationRule:(id)arg3 unwantedActivationRule:(id)arg4 completion:(id /* block */)arg5;
+ (void)extensionsWithMatchingPointName:(id)arg1 baseIdentifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)extensionsWithMatchingPointName:(id)arg1 baseIdentifier:(id)arg2 unwantedActivationRule:(id)arg3 completion:(id /* block */)arg4;
+ (void)extensionsWithMatchingPointName:(id)arg1 completion:(id /* block */)arg2;
+ (void)extensionsWithMatchingPointName:(id)arg1 unwantedActivationRule:(id)arg2 completion:(id /* block */)arg3;

- (long long)processMode;

// Image: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI

- (id)_un_contentSizeRatio;
- (id)_un_customSectionIdentifiers;
- (id)_un_extensionContainerBundleIdentifier;
- (id)un_allowedSourceIdentifiers;
- (double)un_effectiveContentSizeRatio;
- (bool)un_isDefaultContentHidden;
- (bool)un_isDefaultTitleOverridden;
- (bool)un_isUserInteractionEnabled;
- (id)un_supportedCategoryIdentifiers;

// Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon

- (id)testFlightServiceExtensionCustomServiceTime;

// Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation

- (id)_cnd_requestWithInputItems:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon

- (id)_freshCopy;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkExtensionWithIdentifier:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_extensionContainerBundleIdentifier;
- (id)hd_extensionContainerBundleProxy;

// Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore

- (void)_intents_startExtensionConnectionWithExtensionInputItems:(id)arg1 intent:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (id)pu_supportedMediaTypes;
- (bool)pu_supportsMediaType:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport

- (bool)QL_isAppleExtension;
- (id)QL_parentBundleID;
- (bool)isGenerationPreview;

// Image: /System/Library/PrivateFrameworks/QuickLookUICore.framework/QuickLookUICore

- (bool)ql_isPreviewExtensionThatHaveCustomPresentationView;
- (id)ql_previewExtensionCustomLoadingTime;

// Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation

- (void)_sf_addHandlerForRequestIdentifier:(id)arg1 withBlock:(id /* block */)arg2;
- (id)sf_bundleIdentifierForContainingApp;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)_safari_containingAppRecord;
- (id)_safari_stringFromContainingAppInfoPlistWithKey:(id)arg1;
- (id)safari_containingAppAdamID;
- (bool)safari_containingAppIsTestFlightApp;
- (id)safari_correspondingMacOSContainingAppBundleIdentifier;
- (id)safari_correspondingMacOSExtensionBundleIdentifier;
- (id)safari_displayVersion;
- (id)safari_humanReadableDescription;
- (id)safari_launchServicesDeveloperIdentifier;
- (id)safari_localizedContainingAppDisplayName;
- (id)safari_localizedDisplayName;
- (id)sf_uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)_siriui_extensionIconImage;
- (id)_siriui_iconImageWithFormat:(int)arg1;
- (id)siriui_displayName;
- (id)siriui_iconImage;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)__UIKit_upcall_icons;
- (void)_instantiateAccessoryViewControllerWithInputItems:(id)arg1 connectionHandler:(id /* block */)arg2;
- (void)_instantiateViewControllerWithInputItems:(id)arg1 asAccessory:(bool)arg2 traitCollection:(id)arg3 listenerEndpoint:(id)arg4 connectionHandler:(id /* block */)arg5;
- (void)instantiateViewControllerWithInputItems:(id)arg1 connectionHandler:(id /* block */)arg2;
- (void)instantiateViewControllerWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 connectionHandler:(id /* block */)arg3;
- (void)instantiateViewControllerWithInputItems:(id)arg1 traitCollection:(id)arg2 connectionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/UserNotificationsCore.framework/UserNotificationsCore

- (id)uns_extensionContainerBundleIdentifier;
- (id)uns_extensionContainerBundleProxy;
- (bool)uns_isExtensionSessionBeingDebugged:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

- (id)wg_description;
- (bool)wg_hasExplicitUserElectionState;

@end
