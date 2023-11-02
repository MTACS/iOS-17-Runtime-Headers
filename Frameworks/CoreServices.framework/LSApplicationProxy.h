
@interface LSApplicationProxy : LSBundleProxy <LSDetachable, NSSecureCoding> {
    NSString * _deviceIdentifierVendorName;
    NSArray * _plugInKitPlugins;
    LSApplicationRecord * _record;
    bool  _userInitiatedUninstall;
}

@property (nonatomic, readonly) NSNumber *ODRDiskUsage;
@property (nonatomic, readonly) NSArray *UIBackgroundModes;
@property (nonatomic, readonly) NSArray *VPNPlugins;
@property (nonatomic, readonly) NSArray *activityTypes;
@property (getter=isAdHocCodeSigned, nonatomic, readonly) bool adHocCodeSigned;
@property (nonatomic, readonly) NSString *appIDPrefix;
@property (nonatomic, readonly) _LSApplicationState *appState;
@property (nonatomic, readonly) NSString *appStoreToolsBuildVersion;
@property (getter=isAppStoreVendable, nonatomic, readonly) bool appStoreVendable;
@property (nonatomic, readonly) NSArray *appTags;
@property (getter=isAppUpdate, nonatomic, readonly) bool appUpdate;
@property (nonatomic, readonly) NSString *applicationDSID;
@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *applicationType;
@property (nonatomic, readonly) NSString *applicationVariant;
@property (getter=isArcadeApp, nonatomic, readonly) bool arcadeApp;
@property (nonatomic, readonly) NSArray *audioComponents;
@property (nonatomic, readonly) NSArray *backgroundTaskSchedulerPermittedIdentifiers;
@property (getter=isBetaApp, nonatomic, readonly) bool betaApp;
@property (nonatomic, readonly) NSNumber *betaExternalVersionIdentifier;
@property (nonatomic, readonly) int bundleModTime;
@property (nonatomic, readonly) bool canHandleWebAuthentication;
@property (nonatomic, readonly) NSArray *carPlayInstrumentClusterURLSchemes;
@property (nonatomic, readonly) NSSet *claimedDocumentContentTypes;
@property (nonatomic, readonly) NSSet *claimedURLSchemes;
@property (nonatomic, readonly) NSString *companionApplicationIdentifier;
@property (nonatomic, readonly) NSString *complicationPrincipalClass;
@property (nonatomic, readonly) LSApplicationRecord *correspondingApplicationRecord;
@property (nonatomic, readonly) NSArray *counterpartIdentifiers;
@property (nonatomic, readonly) LSApplicationRecord *cslprf_safeCorrespondingApplicationRecord;
@property (getter=isDeletable, nonatomic, readonly) bool deletable;
@property (getter=isDeviceBasedVPP, nonatomic, readonly) bool deviceBasedVPP;
@property (nonatomic, readonly) NSArray *deviceFamily;
@property (nonatomic, readonly) NSUUID *deviceIdentifierForAdvertising;
@property (nonatomic, readonly) NSUUID *deviceIdentifierForVendor;
@property (nonatomic, readonly) long long deviceManagementPolicy;
@property (nonatomic, readonly) NSArray *directionsModes;
@property (nonatomic, readonly) _LSDiskUsage *diskUsage;
@property (nonatomic, readonly) NSNumber *downloaderDSID;
@property (nonatomic, readonly) NSNumber *dynamicDiskUsage;
@property (nonatomic, readonly) NSArray *externalAccessoryProtocols;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly) NSNumber *familyID;
@property (nonatomic, readonly) bool fileSharingEnabled;
@property (getter=isGameCenterEnabled, nonatomic, readonly) bool gameCenterEnabled;
@property (nonatomic, readonly) bool gameCenterEverEnabled;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) NSNumber *genreID;
@property (nonatomic, readonly) bool hasComplication;
@property (nonatomic, readonly) bool hasCustomNotification;
@property (nonatomic, readonly) bool hasGlance;
@property (nonatomic, readonly) bool hasMIDBasedSINF;
@property (nonatomic, readonly) bool hasParallelPlaceholder;
@property (nonatomic, readonly) bool hasSettingsBundle;
@property (nonatomic, readonly) bool hf_isInstalledForLaunching;
@property (nonatomic, readonly) bool iconIsPrerendered;
@property (nonatomic, readonly) bool iconUsesAssetCatalog;
@property (readonly) NSArray *if_userActivityTypes;
@property (nonatomic, readonly) NSNumber *installFailureReason;
@property (nonatomic, readonly) NSProgress *installProgress;
@property (nonatomic, readonly) unsigned long long installType;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) NSString *itemName;
@property (getter=isLaunchProhibited, nonatomic, readonly) bool launchProhibited;
@property (nonatomic, readonly) NSArray *managedPersonas;
@property (nonatomic, readonly) NSString *maximumSystemVersion;
@property (nonatomic, readonly) NSString *minimumSystemVersion;
@property (nonatomic, readonly) bool missingRequiredSINF;
@property (getter=isNewsstandApp, nonatomic, readonly) bool newsstandApp;
@property (nonatomic, readonly) unsigned long long originalInstallType;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, readonly) NSNumber *platform;
@property (nonatomic, readonly) NSArray *plugInKitPlugins;
@property (nonatomic, readonly) NSString *preferredArchitecture;
@property (getter=isPurchasedReDownload, nonatomic, readonly) bool purchasedReDownload;
@property (nonatomic, readonly) NSNumber *purchaserDSID;
@property (nonatomic, readonly) NSString *ratingLabel;
@property (nonatomic, readonly) NSNumber *ratingRank;
@property (nonatomic, readonly) NSDate *registeredDate;
@property (getter=isRemoveableSystemApp, nonatomic, readonly) bool removeableSystemApp;
@property (getter=isRemovedSystemApp, nonatomic, readonly) bool removedSystemApp;
@property (nonatomic, readonly) NSArray *requiredDeviceCapabilities;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly) bool runsIndependentlyOfCompanionApp;
@property (nonatomic, readonly) NSString *shortVersionString;
@property (nonatomic, readonly) bool shouldSkipWatchAppInstall;
@property (nonatomic, readonly) NSDictionary *siriActionDefinitionURLs;
@property (nonatomic, readonly) NSString *sourceAppIdentifier;
@property (getter=isStandaloneWatchApp, nonatomic, readonly) bool standaloneWatchApp;
@property (nonatomic, readonly) NSNumber *staticDiskUsage;
@property (nonatomic, readonly) NSArray *staticShortcutItems;
@property (nonatomic, readonly) NSString *storeCohortMetadata;
@property (nonatomic, readonly) NSNumber *storeFront;
@property (nonatomic, readonly) NSArray *subgenres;
@property (nonatomic, readonly) NSArray *supportedComplicationFamilies;
@property (nonatomic, readonly) bool supportsAlternateIconNames;
@property (nonatomic, readonly) bool supportsAudiobooks;
@property (nonatomic, readonly) bool supportsExternallyPlayableContent;
@property (nonatomic, readonly) bool supportsMultiwindow;
@property (nonatomic, readonly) bool supportsODR;
@property (nonatomic, readonly) bool supportsOpenInPlace;
@property (nonatomic, readonly) bool supportsPurgeableLocalStorage;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic) bool userInitiatedUninstall;
@property (nonatomic, readonly) NSString *vendorName;
@property (getter=isWatchKitApp, nonatomic, readonly) bool watchKitApp;
@property (nonatomic, readonly) NSString *watchKitVersion;
@property (getter=isWhitelisted, nonatomic, readonly) bool whitelisted;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)applicationProxyForBundleType:(unsigned long long)arg1 identifier:(id)arg2 isCompanion:(bool)arg3 URL:(id)arg4 itemID:(id)arg5 bundleUnit:(unsigned int*)arg6;
+ (id)applicationProxyForBundleURL:(id)arg1;
+ (id)applicationProxyForCompanionIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(bool)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1 withContext:(struct LSContext { id x1; }*)arg2;
+ (id)applicationProxyForItemID:(id)arg1;
+ (id)applicationProxyForSystemPlaceholder:(id)arg1;
+ (id)applicationProxyWithBundleUnitID:(unsigned int)arg1 withContext:(struct LSContext { id x1; }*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ODRDiskUsage;
- (bool)UPPValidated;
- (id)_initWithBundleUnit:(unsigned int)arg1 context:(struct LSContext { id x1; }*)arg2 bundleIdentifier:(id)arg3;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 bundleUnit:(unsigned int)arg2 applicationRecord:(id)arg3 bundleID:(id)arg4 resolveAndDetach:(bool)arg5;
- (id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(bool)arg2;
- (id)_managedPersonas;
- (id)_stringLocalizerForTable:(id)arg1;
- (bool)_usesSystemPersona;
- (id)activityTypes;
- (id)alternateIconName;
- (id)appIDPrefix;
- (id)appState;
- (id)applicationDSID;
- (id)applicationIdentifier;
- (id)applicationType;
- (id)applicationVariant;
- (id)betaExternalVersionIdentifier;
- (int)bundleModTime;
- (id)bundleType;
- (id)claimedDocumentContentTypes;
- (id)claimedURLSchemes;
- (void)clearAdvertisingIdentifier;
- (id)companionApplicationIdentifier;
- (id)complicationPrincipalClass;
- (id)correspondingApplicationRecord;
- (id)dataContainerURL;
- (id)description;
- (void)detach;
- (id)deviceFamily;
- (long long)deviceManagementPolicy;
- (id)downloaderDSID;
- (id)dynamicDiskUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)environmentVariables;
- (id)externalVersionIdentifier;
- (id)familyID;
- (bool)fileSharingEnabled;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)freeProfileValidated;
- (bool)gameCenterEverEnabled;
- (id)genre;
- (id)genreID;
- (id)getBundleMetadata;
- (void)getDeviceManagementPolicyWithCompletionHandler:(id /* block */)arg1;
- (bool)getGenericTranslocationTargetURL:(id*)arg1 error:(id*)arg2;
- (id)groupContainerURLs;
- (id)handlerRankOfClaimForContentType:(id)arg1;
- (bool)hasMIDBasedSINF;
- (id)iconDataForVariant:(int)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (bool)iconIsPrerendered;
- (bool)iconUsesAssetCatalog;
- (id)initWithCoder:(id)arg1;
- (id)installFailureReason;
- (id)installProgress;
- (id)installProgressSync;
- (unsigned long long)installType;
- (bool)isAppUpdate;
- (bool)isBetaApp;
- (bool)isDeletableIgnoringRestrictions;
- (bool)isDeviceBasedVPP;
- (bool)isGameCenterEnabled;
- (bool)isInstalled;
- (bool)isNewsstandApp;
- (bool)isPlaceholder;
- (bool)isPurchasedReDownload;
- (bool)isRemoveableSystemApp;
- (bool)isRemovedSystemApp;
- (bool)isRestricted;
- (bool)isStandaloneWatchApp;
- (bool)isWatchKitApp;
- (bool)isWhitelisted;
- (id)itemID;
- (id)itemName;
- (id)localizedNameForContext:(id)arg1;
- (id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2;
- (id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2 useShortNameOnly:(bool)arg3;
- (id)managedPersonas;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)missingRequiredSINF;
- (unsigned long long)originalInstallType;
- (id)platform;
- (id)plugInKitPlugins;
- (id)preferredArchitecture;
- (id)primaryIconDataForVariant:(int)arg1;
- (bool)profileValidated;
- (id)purchaserDSID;
- (id)ratingLabel;
- (id)ratingRank;
- (id)registeredDate;
- (id)requiredDeviceCapabilities;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setAlternateIconName:(id)arg1 withResult:(id /* block */)arg2;
- (void)setUserInitiatedUninstall:(bool)arg1;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)siriActionDefinitionURLs;
- (id)sourceAppIdentifier;
- (id)staticDiskUsage;
- (id)storeCohortMetadata;
- (id)storeFront;
- (id)subgenres;
- (bool)supportsODR;
- (id)teamID;
- (bool)userInitiatedUninstall;
- (id)valueForUndefinedKey:(id)arg1;
- (id)vendorName;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_applicationBundleIdentifier;
- (id)un_applicationBundleURL;

// Image: /System/Library/PrivateFrameworks/CarouselPreferenceServices.framework/CarouselPreferenceServices

- (id)cslprf_safeCorrespondingApplicationRecord;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_messagesPluginKitProxy;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (id)fbs_correspondingApplicationRecord;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_applicationProxyForAccessory:(id)arg1;

- (bool)hf_isInstalledForLaunching;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (id)__IS_iconDataForVariant:(int)arg1 preferredIconName:(id)arg2 withOptions:(int)arg3;
- (id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)if_userActivityTypes;

@end
