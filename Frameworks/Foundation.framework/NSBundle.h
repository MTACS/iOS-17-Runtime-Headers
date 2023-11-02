
@interface NSBundle : NSObject <PRSRoleProviding, PRSRoleProvidingInternal> {
    NSMutableDictionary * _attributedStringTable;
    _Atomic struct __CFBundle {} * _cfBundle;
    NSString * _firstClassName;
    _Atomic unsigned long long  _flags;
    id  _initialPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    Class  _principalClass;
    id  _resolvedPath;
}

@property (readonly, copy) NSURL *appStoreReceiptURL;
@property (getter=wf_applicationGroups, nonatomic, readonly) NSArray *applicationGroups;
@property (getter=wf_apsEnvironment, nonatomic, readonly) NSString *apsEnvironment;
@property (readonly, copy) NSString *builtInPlugInsPath;
@property (readonly, copy) NSURL *builtInPlugInsURL;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSURL *bundleURL;
@property (nonatomic, readonly) struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; } ccui_prototypeModuleSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *developmentLocalization;
@property (getter=wf_entitlements, nonatomic, readonly) NSDictionary *entitlements;
@property (readonly, copy) NSArray *executableArchitectures;
@property (readonly, copy) NSString *executablePath;
@property (readonly, copy) NSURL *executableURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ic_canEditNotes;
@property (nonatomic, readonly) bool ic_isAppExtension;
@property (nonatomic, readonly) UIImage *icon;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (getter=wf_keychainAccessGroups, nonatomic, readonly) NSArray *keychainAccessGroups;
@property (nonatomic, readonly) NSURL *ln_safeBundleURL;
@property (getter=isLoaded, readonly) bool loaded;
@property (readonly, copy) NSArray *localizations;
@property (readonly, copy) NSDictionary *localizedInfoDictionary;
@property (readonly, copy) NSArray *normalizedLocalizations;
@property (nonatomic, readonly) NSString *pdu_aboutPrivacyBundleID;
@property (nonatomic, readonly) NSLocale *preferredLocale;
@property (readonly, copy) NSArray *preferredLocalizations;
@property (readonly) Class principalClass;
@property (readonly, copy) NSString *privateFrameworksPath;
@property (readonly, copy) NSURL *privateFrameworksURL;
@property (nonatomic, readonly) NSString *prs_defaultRole;
@property (nonatomic, readonly) NSSet *prs_supportedRoles;
@property (readonly, copy) NSString *resourcePath;
@property (readonly, copy) NSURL *resourceURL;
@property (nonatomic, readonly) NSString *safari_displayName;
@property (nonatomic, readonly) bool safari_isSafariFamilyApplicationBundle;
@property (nonatomic, readonly) bool safari_isSafariWidgetExtensionBundle;
@property (nonatomic, readonly) NSString *safari_localizedDisplayName;
@property (nonatomic, readonly) NSString *safari_localizedShortVersion;
@property (nonatomic, readonly, copy) NSString *safari_normalizedVersion;
@property (nonatomic, readonly) bool safari_primaryLocalizationIsEnglish;
@property (nonatomic, readonly) NSString *safari_shortVersion;
@property (readonly, copy) NSString *sharedFrameworksPath;
@property (readonly, copy) NSURL *sharedFrameworksURL;
@property (readonly, copy) NSString *sharedSupportPath;
@property (readonly, copy) NSURL *sharedSupportURL;
@property (readonly) Class superclass;
@property (getter=wf_teamIdentifier, nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, readonly, copy) NSObject<OS_tcc_identity> *tu_assumedIdentity;
@property (nonatomic, readonly) bool wf_isFocusConfigurationExtensionBundle;
@property (nonatomic, readonly) bool wf_isWidgetConfigurationExtensionBundle;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)_bundleWithIdentifier:(id)arg1 andLibraryName:(id)arg2;
+ (id)_localizedStringsForKeys:(id)arg1 forAllLocalizationsOfTable:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)allBundles;
+ (id)allFrameworks;
+ (id)bundleForClass:(Class)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)bundleWithURL:(id)arg1;
+ (id)debugDescription;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(id /* block */)arg3;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7;
+ (id)loadedBundles;
+ (id)mainBundle;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;
+ (void)setSystemLanguages:(id)arg1;

- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (void)__static;
- (struct __CFBundle { }*)_cfBundle;
- (struct __CFBundle { }*)_cfBundleIfPresent;
- (id)_initUniqueWithPath:(id)arg1;
- (id)_initUniqueWithURL:(id)arg1;
- (id)_localizedStringNoCacheNoMarkdownParsingForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localizations:(id)arg4 actualTableURL:(id*)arg5 formatSpecifierConfiguration:(id*)arg6;
- (id)_localizedStringsForKeys:(id)arg1 forAllLocalizationsOfTable:(id)arg2;
- (id)_objectForUnlocalizedInfoDictionaryKey:(id)arg1;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)_regionsArray;
- (bool)_searchForLocalizedString:(id)arg1 foundKey:(id*)arg2 foundTable:(id*)arg3;
- (id)_wrappedBundleURL;
- (id)_wrapperContainerURL;
- (id)appStoreReceiptURL;
- (id)builtInPlugInsPath;
- (id)builtInPlugInsURL;
- (id)bundleIdentifier;
- (id)bundleLanguages;
- (id)bundlePath;
- (id)bundleURL;
- (Class)classNamed:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)developmentLocalization;
- (id)executableArchitectures;
- (id)executablePath;
- (id)executableURL;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(id /* block */)arg2;
- (id)infoDictionary;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidateResourceCache;
- (bool)isLoaded;
- (bool)load;
- (bool)loadAndReturnError:(id*)arg1;
- (id)localizations;
- (id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localizations:(id)arg4;
- (id)localizedStringsForTable:(id)arg1 localization:(id)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)preferredLocalizations;
- (bool)preflightAndReturnError:(id*)arg1;
- (double)preservationPriorityForTag:(id)arg1;
- (Class)principalClass;
- (id)privateFrameworksPath;
- (id)privateFrameworksURL;
- (id)resourcePath;
- (id)resourceURL;
- (void)setPreservationPriority:(double)arg1 forTag:(id)arg2;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;
- (id)sharedFrameworksPath;
- (id)sharedFrameworksURL;
- (id)sharedSupportPath;
- (id)sharedSupportURL;
- (bool)unload;
- (unsigned long long)versionNumber;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (id)URLForMovieResource:(id)arg1;
- (id)imageForResource:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

+ (id)as_authenticationServicesBundle;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_findContainedBundleWithIdentifier:(id)arg1 directoryURL:(id)arg2;

- (id)hk_displayName;
- (id)hk_extensionPointIdentifier;
- (id)hk_findContainedBundleWithIdentifier:(id)arg1;
- (id)hk_localizedClinicalReadAuthorizationUsageDescription;
- (id)hk_localizedReadAuthorizationUsageDescription;
- (id)hk_localizedResearchStudyUsageDescription;
- (id)hk_localizedWriteAuthorizationUsageDescription;
- (id)hk_name;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkitBundle;

- (id)_mapkit_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)mediaPlayerBundle;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (bool)ph_isFirstPartyBundle;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (bool)mainBundleRequiresStatusBarHidden;
+ (bool)mainBundleSupportsBackgroundAudio;
+ (bool)mainBundleSupportsPrintCommand;

- (id)ql_applicationName;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_rpFrameworkBundle;
+ (id)_rpLocalizedAppNameFromBundleID:(id)arg1;
+ (id)_rpLocalizedStringFromFrameworkBundleWithKey:(id)arg1;
+ (id)baseIdentifier:(id)arg1;
+ (id)bundleWithPID:(int)arg1;
+ (id)executablePathWithPID:(int)arg1;
+ (id)fallbackLanguage;
+ (id)preferredLanguage;

- (id)_rpLocalizedAppName;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (bool)_sf_isSafariViewServiceBundle;
+ (bool)_sf_isWebSheetApplicationBundle;
+ (id)_sf_safariServicesBundle;

// Image: /System/Library/Frameworks/SensorKit.framework/SensorKit

+ (bool)_sr_validateRequiredFieldsForBundleIdentifier:(id)arg1 sensors:(id)arg2 error:(id*)arg3;
+ (id)sk_bundleWithIdentifier:(id)arg1;

- (bool)_sr_validateRequiredFieldsForSensors:(id)arg1 error:(id*)arg2;
- (id)sk_appName;
- (id)sk_perCategoryDetailDescription;
- (id)sk_privacyURL;
- (id)sk_requiredCategories;
- (id)sk_studyName;
- (id)sk_usageDescription;
- (long long)sr_bundleType;
- (id)sr_normalizedBundleIdentifier;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)un_safeBundleWithURL:(id)arg1;
+ (id)userNotificationsBundleWithIdentifier:(id)arg1;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)vs_bundleForClassWithName:(id)arg1;
+ (id)vs_bundleForProcessIdentifier:(int)arg1;
+ (id)vs_frameworkBundle;

// Image: /System/Library/Frameworks/WidgetKit.framework/WidgetKit

+ (id)wk_uniqueWithURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

+ (bool)isNewsOrStocks;
+ (long long)product;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

- (id)ar_pathForPrivateResource:(id)arg1 ofType:(id)arg2;
- (id)ar_pathForPrivateResourceBundlePath;

// Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

+ (id)asc_frameworkBundle;
+ (id)asc_localizedStringKeyPlatformSuffix;
+ (id)asc_realMainBundle;

- (id)__asc_localizedStringForKey:(id)arg1 inTable:(id)arg2 withLanguage:(id)arg3;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)ams_AppleMediaServicesBundle;
+ (id)ams_MusicBundle;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (id)ams_imageForResource:(id)arg1;
- (id)icon;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

+ (id)afui_assistantUIFrameworkBundle;

- (id)_assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_assistantUIStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localizationLanguageCode:(id)arg4;
- (id)_assistantUIlocalizationArrayForLanguageCode:(id)arg1;
- (bool)assistantLanguageIsRTL;
- (id)assistantUILocale;
- (id)assistantUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)assistantUILocalizedStringFromSiriLanguageForKey:(id)arg1 table:(id)arg2;
- (id)assistantUILocalizedStringFromSystemLanguageForKey:(id)arg1 table:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AutoFillUI.framework/AutoFillUI

+ (id)_processLocalizedString:(id)arg1;

- (id)_preferredEnglishLocalizationBundle;

// Image: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI

- (id)bsui_imageForIconInfo:(struct BCUIIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation

+ (id)brl_brailleTableBundleWithIdentifier:(id)arg1;

- (id)brl_brailleTablesDictionary;
- (id)brl_languageAgnosticTables;
- (id)brl_supportedLocales;
- (id)brl_supportedLocalesForTableWithIdentifier:(id)arg1;
- (id)brl_supportedTablesForLocale:(id)arg1;
- (bool)brl_tableIsLanguageAgnosticWithIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation

- (id)SSUAssetPathForLocale:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

+ (id)jfxBundle;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

- (id)cat_localizedStringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ChronoKit.framework/ChronoKit

+ (id)chk_uniqueWithURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (id)cps_clipUIServicesBundle;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)wf_applicationGroups;
- (id)wf_apsEnvironment;
- (id)wf_entitlements;
- (id)wf_keychainAccessGroups;
- (id)wf_teamIdentifier;

// Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI

- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })ccui_prototypeModuleSize;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

+ (id)ccui_bundleForModuleInstance:(id)arg1;

- (void)ccui_associateWithModuleInstance:(id)arg1;
- (id)ccui_displayName;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

+ (id)conversationKit;

// Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

+ (void)_setCoreMaterialOverrideRecipeBundleURL:(id)arg1;
+ (id)coreMaterialOverrideRecipeBundle;
+ (id)coreMaterialOverrideRecipeBundleURL;
+ (id)coreMaterialRecipeBundle;

- (id)URLForMaterialRecipe:(id)arg1;
- (id)URLForMaterialRecipeDescendant:(id)arg1;
- (id)URLForVisualStyleSet:(id)arg1;
- (id)URLForVisualStyleSetDescendant:(id)arg1;
- (id)URLsForMaterialRecipeDescendants;
- (id)URLsForMaterialRecipes;
- (id)URLsForVisualStyleSets;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

+ (id)_coreroutineBundle;
+ (id)_coreroutine_LocalizedStringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

- (id)cfBundleVersionString;
- (id)topLevelKeyValueForPlistName:(id)arg1 key:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

+ (id)dssd_bundleForSourceDescriptor;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (id)dnd_doNotDisturbLocalizationBundle;
+ (id)dnd_locationBundle;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit

+ (id)dndk_localizationBundle;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

+ (id)FeedbackCore;
+ (id)feedbackCoreFramework;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (bool)_gkBundleIdentifierIsRelatedToContactsUI:(id)arg1;
+ (bool)_gkMainBundleIsGameCenterSystemProcess;
+ (id)_gkPreferredSystemLanguage;
+ (id)_gkPreferredUserLanguage;

- (id)_gkBundleShortVersion;
- (id)_gkBundleVersion;
- (id)_gkFrameworkVersionDescription;
- (bool)_gkIsContacts;
- (bool)_gkIsDaemon;
- (bool)_gkIsEligibleForOnboardingUI;
- (bool)_gkIsFirstParty;
- (bool)_gkIsGameCenter;
- (bool)_gkIsGameCenterExtension;
- (bool)_gkIsPreferences;
- (bool)_gkIsPurpleBuddy;
- (id)_gkLocalizedName;
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;
- (id)_gkPathForChallengeSound;
- (id)_gkPathForImageWithName:(id)arg1;
- (id)_gkPathForInviteSound;
- (id)_gkPathForMessageImage;
- (id)_gkPathForSoundWithName:(id)arg1;
- (id)_gkSystemLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (id)GameControllerFoundationBundle;
+ (id)GameControllerFrameworkBundle;
+ (id)gc_bundleForExecutableAtPath:(id)arg1;
+ (id)gc_bundleForExecutableAtURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)__geoBundle;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesUI.framework/HealthMenstrualCyclesUI

+ (id)hkmcui_bundle;

// Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit

+ (id)HLPBundle;
+ (void)removeHLPBundle;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)_cachedMainBundleResourcePath;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)__IS__frameworkBundle;
+ (id)__IS__frameworkLocalizedString:(id)arg1;
+ (id)__IS__iconsetResourceAssetsCatalogURL;
+ (id)__IS__iconsetResourceBundle;

// Image: /System/Library/PrivateFrameworks/IntelligentRouting.framework/IntelligentRouting

+ (id)IRFrameworkBundle;

// Image: /System/Library/PrivateFrameworks/InternationalSupport.framework/InternationalSupport

- (id)localizedStringInDeviceLanguageForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences

- (id)normalizedLocalizations;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

- (id)executablePathWithError:(id*)arg1;
- (id)ln_safeBundleURL;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

+ (id)mui_MailUIBundle;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (id)_mapsuiBundle;

- (id)_mapsui_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)vcp_mediaAnalysisBundle;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

+ (id)mediaControlsBundle;
+ (id)mediaRemoteUIBundle;
+ (id)mru_FaceTimeBundleIdentifier;
+ (id)mru_TVRemoteIdentifier;
+ (bool)mru_isFaceTimeBundleIdentifier:(id)arg1;
+ (bool)mru_isHome;
+ (bool)mru_isHomeBundleIdentifier:(id)arg1;
+ (bool)mru_isMediaRemoteDaemonBundleIdentifier:(id)arg1;
+ (bool)mru_isMediaRemoteUI;
+ (bool)mru_isMediaRemoteUIBundleIdentifier:(id)arg1;
+ (bool)mru_isMusicBundleIdentifier:(id)arg1;
+ (bool)mru_isPodcastsBundleIdentifier:(id)arg1;
+ (bool)mru_isProximityControl;
+ (bool)mru_isProximityControlBundleIdentifier:(id)arg1;
+ (bool)mru_isSiri;
+ (bool)mru_isSiriBundleIdentifier:(id)arg1;
+ (bool)mru_isSoundScapesIdentifier:(id)arg1;
+ (bool)mru_isSpringBoard;
+ (bool)mru_isSpringBoardBundleIdentifier:(id)arg1;

- (id)mediaControls_localizedStringForKey:(id)arg1 inTable:(id)arg2 expectedFormat:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mediaPlaybackCoreBundle;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

+ (id)mediaPlayerUIBundle;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)sf_mobileSafariFrameworkBundle;

// Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI

+ (id)nanoMediaBridgeUIBundle;

// Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote

+ (id)nanoMediaRemoteBundle;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

+ (id)nanoMusicSyncBundle;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

- (id)ntk_localizedMarkdownStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)preferredLocale;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigationBundle;
+ (bool)_navigation_implementsSiriMethod;
+ (bool)_navigation_isRunningInSiri;

- (id)_navigation_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_feldsparCoreInternalExtrasBundle;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (bool)ic_canEditNotes;
- (bool)ic_isAppExtension;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (id)localizedDocumentStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 locale:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)PKSanitizedBundleIdentifier;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

+ (id)pr_personaUIBundle;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_bundle;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)pu_PhotosUIFrameworkBundle;

// Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices

+ (id)prs_uniqueBundleWithURL:(id)arg1;

- (id)prs_defaultRole;
- (id)prs_roleManifest;
- (id)prs_supportedRoles;

// Image: /System/Library/PrivateFrameworks/PrivacyDisclosureUI.framework/PrivacyDisclosureUI

- (id)pdu_aboutPrivacyBundleID;

// Image: /System/Library/PrivateFrameworks/SAML.framework/SAML

+ (id)saml_frameworkBundle;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_currentTemplateAppName;
+ (bool)safari_isICloudAppWithBundleIdentifier:(id)arg1;
+ (bool)safari_isSafariFamilyBundleIdentifier:(id)arg1;
+ (id)safari_safariApplicationPlatformBundleIdentifier;
+ (id)safari_safariCoreBundle;
+ (id)safari_safariInjectedBundleURL;

- (id)safari_displayName;
- (bool)safari_isSafariFamilyApplicationBundle;
- (bool)safari_isSafariWidgetExtensionBundle;
- (id)safari_localizedDisplayName;
- (id)safari_localizedShortVersion;
- (id)safari_normalizedVersion;
- (bool)safari_primaryLocalizationIsEnglish;
- (id)safari_shortVersion;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_safariSharedBundle;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (id)coreFrameworkBundle;
+ (id)localeForString:(id)arg1;
+ (id)localizedCoreStringForKey:(id)arg1;
+ (id)localizedScreenReaderStringForKey:(id)arg1 table:(id)arg2;
+ (id)preferredLocalizationsForLocale:(id)arg1;
+ (id)screenReaderFrameworkBundle;

- (id)bundleLocale;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 locale:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

+ (id)_brailleTableBundles;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundles;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (bool)doesBrailleTableSupportContractions:(id)arg1;
+ (bool)doesBrailleTableSupportEightDot:(id)arg1;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;

- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices

+ (id)_screenshotServicesServiceBundle;

// Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI

+ (id)skui_bundle;
+ (id)skui_bundleForAuthorizationService:(id)arg1;

- (id)srui_localizedAuthorizationConfirmationDetail;
- (id)srui_localizedPrivacyPolicyLinkTitle;
- (id)srui_localizedResearchPurpose;
- (id)srui_localizedStudyDataAlertTitleWithAuthGroupName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI

+ (id)sfui_bundle;

// Image: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI

+ (id)sh_UIBundle;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)siriUILocalizedStringForKey:(id)arg1;
- (id)siriUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)siriUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore

- (id)suic_localizedStringForKey:(id)arg1;
- (id)suic_localizedStringForKey:(id)arg1 table:(id)arg2;
- (id)suic_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_imageNamed:(id)arg1;
- (id)tv_launchImage;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)tu_assumedIdentityForBundleIdentifier:(id)arg1;

- (id)tu_assumedIdentity;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

+ (id)_accessibilityBundleWithBundlePath:(id)arg1;
+ (id)accessibilityBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityInternalBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityLocalBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityMacCalystBundleWithLastPathComponent:(id)arg1;

- (void)_loadAXBundleForBundleOffMainThread;
- (id)accessibilityBundlePath;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)currentNibLoadingBundle;
+ (id)currentNibPath;
+ (void)popNibLoadingBundle;
+ (void)popNibPath;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (void)pushNibPath:(id)arg1;

- (id)_preferredEnglishLocalizationBundle;
- (id)dataForResourceName:(id)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (id)__vkBundle;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)vui_videosUIBundle;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (bool)wf_isFocusConfigurationExtensionBundle;
- (bool)wf_isWidgetConfigurationExtensionBundle;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

+ (id)pathForITunesStoreResource:(id)arg1 ofType:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)pathForITunesResource:(id)arg1 ofType:(id)arg2;

- (id)newDataURLForResource:(id)arg1 ofType:(id)arg2 withMIMEType:(id)arg3;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication

+ (id)tsa_templatesMetadataBundle;
+ (id)tsa_templatesMetadataURL;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_resourcesBundle;

- (id)localizedDocumentStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 locale:(id)arg4;

@end
