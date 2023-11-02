
@interface NSUserDefaults : NSObject <GCUserDefaults, HKSPUserDefaults, PDCSettings, PDSKVStore, PFOperationScheduleStorage, WBSStartPageSectionManagerStorage> {
    struct __CFString { } * _container_;
    struct __CFString { } * _identifier_;
    id  _kvo_;
    NSArray * _volatileDomainNames;
}

@property (nonatomic) bool conversationListFocusFilterActionEnabled;
@property (nonatomic) bool cps_didShowFirstTimeLocationConsent;
@property (nonatomic, readonly) bool cps_forceReportProblemErrorFetchProblemTypes;
@property (nonatomic, readonly) bool cps_forceReportProblemErrorNoDeveloperSupportURL;
@property (nonatomic, readonly) bool cps_forceReportProblemErrorUnableToSubmitResponse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *episodeListSortTypeDictionary;
@property (nonatomic) long long fairPlayMigrationRetryCount;
@property (nonatomic, copy) NSArray *favoritePhrases;
@property (nonatomic, retain) NSArray *fc_lastKnownFeedIDs;
@property (nonatomic) long long fmpfArrowDotCount;
@property (nonatomic) bool fmpfBTDebugMode;
@property (nonatomic, readonly) float fmpfBlackBackdropAlpha;
@property (nonatomic, readonly) float fmpfBlackBackdropSigma;
@property (nonatomic) bool fmpfDebugMode;
@property (nonatomic) bool fmpfDebugModeWithoutBearing;
@property (nonatomic) bool fmpfEcoMode;
@property (nonatomic, readonly) float fmpfGreenBackdropAlpha;
@property (nonatomic, readonly) float fmpfGreenBackdropHue;
@property (nonatomic, readonly) float fmpfGreenBackdropSaturation;
@property (nonatomic, readonly) float fmpfGreenBackdropSigma;
@property (nonatomic, readonly) float fmpfGreenBackdropValue;
@property (nonatomic) bool guideSnapPointsEnabled;
@property (readonly) unsigned long long hash;
@property (setter=hk_setDemoResultKeys:, nonatomic, retain) NSArray *hk_demoResultKeys;
@property (getter=hk_electrocardiogramFirstRecordingCompleted, setter=hk_setElectrocardiogramFirstRecordingCompleted:, nonatomic) bool hk_electrocardiogramFirstRecordingCompleted;
@property (getter=hk_electrocardiogramWatchAppInstallHasBeenAllowed, setter=hk_setElectrocardiogramWatchAppInstallIsAllowed:, nonatomic) bool hk_electrocardiogramWatchAppInstallIsAllowed;
@property (nonatomic, readonly) bool hk_hfeModeEnabled;
@property (nonatomic, readonly) bool hkmc_analyticsDebugModeEnabled;
@property (nonatomic, readonly) bool hkmc_calendarLogAdjacentDaysDisabled;
@property (nonatomic, readonly) bool hkmc_timelineLogAdjacentDaysEnabled;
@property (nonatomic, readonly) bool hkmc_timelineTapToLogDisabled;
@property (nonatomic) bool isLabelOcclusionEnabled;
@property (nonatomic) bool isLineOcclusionAlphaBlendingEnabled;
@property (nonatomic) bool isLineOcclusionEnabled;
@property (nonatomic) bool isPointOcclusionEnabled;
@property (nonatomic) bool kADDemoEnabled;
@property (nonatomic) bool kADEdgeDetectionEnabled;
@property (nonatomic) bool kADGuidedFilterEnabled;
@property (nonatomic) bool kADShowDepth;
@property (nonatomic) bool kADShowPerson;
@property (nonatomic) bool kCoachingCalloutEnabledV1;
@property (nonatomic) bool kDisableAllCoaching;
@property (nonatomic) bool kDivisionsEnabled;
@property (nonatomic) bool kDrawDebugPlanes;
@property (nonatomic) bool kEdgeDetectionDebugReticleEnabled;
@property (nonatomic) bool kEdgeDetectionEnabled;
@property (nonatomic) bool kEdgeDetectionUniqueContours;
@property (nonatomic) bool kEnableRectangleDetection;
@property (nonatomic) bool kEnableRectangleTracking;
@property (nonatomic) bool kHideRectangleSuggestions;
@property (nonatomic) bool kHideTapToRadar;
@property (nonatomic) bool kLPShowPlane;
@property (nonatomic) bool kLPShowPoints;
@property (nonatomic) bool kMLShowNormalsBackground;
@property (nonatomic) bool kMLShowSampledPoints;
@property (nonatomic) bool kMLShowSegmentedBackground;
@property (nonatomic) bool kMLShowUnprojectedTrail;
@property (nonatomic) bool kPEShowAccuracy;
@property (nonatomic) bool kPEShowHitPoints;
@property (nonatomic) bool kPEShowHitRay;
@property (nonatomic) bool kPEShowStats;
@property (nonatomic) bool kPersonHeightCoachingEnabled;
@property (nonatomic) bool kPersonHeightDebugViewEnabled;
@property (nonatomic) bool kPersonHeightEnabled;
@property (nonatomic) bool kPersonSegmentationAlwaysOn;
@property (nonatomic) float kRayCastAngleThreshold;
@property (nonatomic) float kRayCastDistThreshold;
@property (nonatomic) bool kResetDefaultOnStart;
@property (nonatomic) float kReticleADSlerpFactor;
@property (nonatomic) bool kShouldReportMeasurements;
@property (nonatomic) bool kShowFeaturePoints;
@property (nonatomic) bool kShowLightIntensityDebugInfo;
@property (nonatomic) bool kShowOppositeUnits;
@property (nonatomic) bool kShowOverallState;
@property (nonatomic) bool kShowPreciseMeasurement;
@property (nonatomic) bool kShowRectangleDebugInfo;
@property (nonatomic) bool kShowStatistics;
@property (nonatomic) bool kShowWorldAnchorDebugInfo;
@property (nonatomic) bool kSnapReticleToEdges;
@property (nonatomic) bool labelFadesInAtSpot;
@property (nonatomic, copy) NSDate *lastAppUseDate;
@property (nonatomic) bool logARSession;
@property (nonatomic) bool logARSessionRecording;
@property (nonatomic) bool logARSessionReplay;
@property (nonatomic) bool logApplicationState;
@property (nonatomic) bool logArbitration;
@property (nonatomic) bool logCoaching;
@property (nonatomic) bool logComputerVision;
@property (nonatomic) bool logCoreVideo;
@property (nonatomic) bool logEdgeDetection;
@property (nonatomic) bool logEdgeSnapping;
@property (nonatomic) bool logHapticFeedback;
@property (nonatomic) bool logLabel;
@property (nonatomic) bool logLightEstimation;
@property (nonatomic) bool logMeasureObject;
@property (nonatomic) bool logMisc;
@property (nonatomic) bool logMotionUpdates;
@property (nonatomic) bool logObjectMeasurements;
@property (nonatomic) bool logPerf;
@property (nonatomic) bool logPersonHeight;
@property (nonatomic) bool logPlaneSelection;
@property (nonatomic) bool logShaders;
@property (nonatomic) bool logUIAction;
@property (nonatomic) bool logUIContext;
@property (nonatomic) bool logWorldAnchor;
@property (nonatomic) bool logWorldRectangle;
@property (readonly) bool mf_blockRemoteContent;
@property (nonatomic) bool shouldArchiveSpatialMappingData;
@property (nonatomic) bool shouldEnableObjectMeasurements;
@property (nonatomic, readonly) bool shouldPresentRemoteContentAlert;
@property (nonatomic, readonly) bool shouldPresentRemoteContentOptionsSheet;
@property (nonatomic) bool shouldRenderOpaqueSurfaces;
@property (nonatomic) bool shouldShowObjectDebugViews;
@property (nonatomic) bool shouldTuriRefinePredictedBoundingBoxes;
@property (nonatomic) bool shouldUseNormalsForBoxOrientation;
@property (nonatomic) bool shouldVERefinePredictedBoundingBoxes;
@property (nonatomic) bool showEDLines;
@property (nonatomic) bool showFilteredRefinementPlanes;
@property (nonatomic) bool showFinalPlanes;
@property (nonatomic) bool showGuideSnapPoints;
@property (nonatomic) bool showListShowsAllShows;
@property (nonatomic) bool showRefinementPlanes;
@property (nonatomic) bool showSnappableEdges;
@property (nonatomic) bool showsOnlyYukonEModes;
@property (nonatomic, copy) NSArray *startPageSectionDescriptors;
@property (readonly) Class superclass;
@property (nonatomic) bool throttleEdges;
@property (readonly, copy) NSArray *volatileDomainNames;
@property (setter=wk_setIgnoreLogicalScreenClassForWallpaperBundle:, nonatomic) bool wk_ignoreLogicalScreenClassForWallpaperBundle;
@property (setter=wk_setIgnoreProductTypesForWallpaperBundle:, nonatomic) bool wk_ignoreProductTypesForWallpaperBundle;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

- (struct __CFString { }*)_container;
- (struct __CFString { }*)_identifier;
- (id)_kvo;
- (bool)_observingCFPreferences;
- (void)_setContainer:(struct __CFURL { }*)arg1;
- (void)_setIdentifier:(struct __CFString { }*)arg1;
- (void)_setKVO:(id)arg1;
- (id)volatileDomainNames;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_copyStandardUserDefaultsIfPresent;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;
+ (void)resetStandardUserDefaults;
+ (void)setStandardUserDefaults:(id)arg1;
+ (id)standardUserDefaults;

- (id)URLForKey:(id)arg1;
- (void)_didEndKeyValueObserving;
- (id)_initWithSuiteName:(id)arg1 container:(id)arg2;
- (void)_willBeginKeyValueObserving;
- (void)addSuiteNamed:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1;
- (void)finalize;
- (float)floatForKey:(id)arg1;
- (id)init;
- (id)initWithSuiteName:(id)arg1;
- (id)initWithUser:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (bool)objectIsForcedForKey:(id)arg1;
- (bool)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;
- (id)persistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)registerDefaults:(id)arg1;
- (oneway void)release;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (void)removePersistentDomainForName:(id)arg1;
- (void)removeSuiteNamed:(id)arg1;
- (void)removeVolatileDomainForName:(id)arg1;
- (id)searchList;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (void)setSearchList:(id)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (id)valueForKey:(id)arg1;
- (id)volatileDomainForName:(id)arg1;
- (id)volatileDomainNames;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (void)hk_deleteDomainsNamed:(id)arg1;
+ (id)hk_featureAvailabilityRequirementEvaluationOverridesUserDefaults;
+ (id)hk_heartRhythmDefaults;
+ (id)hk_localCountrySetOverrideUserDefaults;
+ (id)hk_remoteFeatureAvailabilityUserDefaults;

- (bool)hk_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)hk_countrySetForKey:(id)arg1;
- (id)hk_dateForKey:(id)arg1;
- (id)hk_demoResultKeys;
- (bool)hk_electrocardiogramFirstRecordingCompleted;
- (bool)hk_electrocardiogramWatchAppInstallHasBeenAllowed;
- (bool)hk_hasCompletedThirdPartyAuthSyncWithBooleanValue;
- (bool)hk_hfeModeEnabled;
- (bool)hk_keyExists:(id)arg1;
- (void)hk_removeObjectsForKeysWithPrefix:(id)arg1;
- (void)hk_setCountrySet:(id)arg1 forKey:(id)arg2;
- (void)hk_setDemoResultKeys:(id)arg1;
- (void)hk_setElectrocardiogramFirstRecordingCompleted:(bool)arg1;
- (void)hk_setElectrocardiogramWatchAppInstallIsAllowed:(bool)arg1;
- (void)hk_setHasCompletedThirdPartyAuthSyncWithBooleanValue:(bool)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_copyCompositionServicesPreferenceValueForKey:(id)arg1;
+ (void)mf_setCompositionServicesPreferenceValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_safariDefaults;
+ (id)_sf_safariSharedDefaults;
+ (id)_sf_sfAppDefaults;

- (id)_sf_dateForKey:(id)arg1;
- (bool)_sf_javaScriptCanOpenWindowsAutomatically;
- (bool)_sf_javaScriptEnabled;
- (bool)_sf_passwordManagerIsInDemoMode;
- (void)_sf_registerSafariDefaults;
- (void)_sf_setShouldAutomaticallyDownloadReadingListItems:(bool)arg1;
- (bool)_sf_shouldAutomaticallyDownloadReadingListItems;
- (id)_sf_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (bool)_sf_warnAboutFraudulentWebsites;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (id)appleGlobalDomain;
+ (id)appleGlobalDomainARKitDefaults;
+ (id)appleGlobalDomainARKitKeys;

// Image: /System/Library/PrivateFrameworks/AUDeveloperSettings.framework/AUDeveloperSettings

+ (id)AUDeveloperSettingsObjectWithKey:(id)arg1;
+ (void)AUDeveloperSettingsSetObject:(id)arg1 withKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AUSettings.framework/AUSettings

+ (id)AUDeveloperSettingsObjectWithKey:(id)arg1;
+ (void)AUDeveloperSettingsSetObject:(id)arg1 withKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)akDataForColor:(id)arg1;
+ (id)akDataForFont:(id)arg1;
+ (id)akDataForTextAttributes:(id)arg1;

- (id)akColorForKey:(id)arg1;
- (id)akFontForKey:(id)arg1;
- (void)akSetColor:(id)arg1 forKey:(id)arg2;
- (void)akSetFont:(id)arg1 forKey:(id)arg2;
- (void)akSetTextAttributes:(id)arg1 forKey:(id)arg2;
- (id)akTextAttributesForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

+ (id)bcs_barcodeSupportDefaults;

- (bool)bcs_boolForKey:(id)arg1 defaultValue:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)bs_defaultExists:(id)arg1;
- (void)bs_setDomain:(id)arg1;

// Image: /System/Library/PrivateFrameworks/C2.framework/C2

+ (id)c2DefaultsDomain;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (bool)jfxBoolForKey:(id)arg1 defaultValue:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices

+ (id)cps_clipServicesDefaults;

- (bool)cps_didShowFirstTimeLocationConsent;
- (bool)cps_forceReportProblemErrorFetchProblemTypes;
- (bool)cps_forceReportProblemErrorNoDeveloperSupportURL;
- (bool)cps_forceReportProblemErrorUnableToSubmitResponse;
- (void)setCps_didShowFirstTimeLocationConsent:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

+ (id)CNFObjectForKey:(id)arg1;
+ (unsigned long long)CNFRegEmailValidationTimeout;
+ (id)CNFRegSavedAccountName;
+ (id)CNFRegServerURLOverride;
+ (void)setCNFObject:(id)arg1 forKey:(id)arg2;
+ (void)setCNFRegEmailValidationTimeout:(unsigned long long)arg1;
+ (void)setCNFRegSavedAccountName:(id)arg1;
+ (void)setCNFRegServerURLOverride:(id)arg1;
+ (void)setShouldShowCNFRegistrationServerLogs:(bool)arg1;
+ (void)setShouldShowCNFRegistrationSettingsUI:(bool)arg1;
+ (bool)shouldShowCNFRegistrationServerLogs;
+ (bool)shouldShowCNFRegistrationSettingsUI;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

- (bool)boolValueSafeForKey:(id)arg1;
- (bool)boolValueSafeForKey:(id)arg1 status:(int*)arg2;
- (double)doubleValueSafeForKey:(id)arg1;
- (double)doubleValueSafeForKey:(id)arg1 status:(int*)arg2;
- (long long)int64ValueSafeForKey:(id)arg1;
- (long long)int64ValueSafeForKey:(id)arg1 status:(int*)arg2;
- (id)stringValueSafeForKey:(id)arg1;
- (id)stringValueSafeForKey:(id)arg1 status:(int*)arg2;
- (const char *)utf8ValueSafeForKey:(id)arg1;
- (const char *)utf8ValueSafeForKey:(id)arg1 status:(int*)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

- (id)doc_roleSpecificKeyForKey:(id)arg1 configuration:(id)arg2;
- (void)doc_setObject:(id)arg1 forRoleKey:(id)arg2 configuation:(id)arg3;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

- (id)doc_roleSpecificKeyForKey:(id)arg1 configuration:(id)arg2;
- (void)doc_setObject:(id)arg1 forRoleKey:(id)arg2 configuation:(id)arg3;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

+ (long long)_em_linesOfPreviewShouldReset:(bool)arg1;
+ (bool)em_defaultExistsForKey:(id)arg1;
+ (long long)em_linesOfPreview;
+ (bool)em_lockdownModeEnabled;
+ (void)em_migrateDefault:(id)arg1;
+ (void)em_resetLinesOfPreview;
+ (id)em_userDefaults;

- (void)enableMailTrackingProtection:(bool)arg1;
- (bool)shouldPresentRemoteContentAlert;
- (bool)shouldPresentRemoteContentOptionsSheet;

// Image: /System/Library/PrivateFrameworks/FMFindingUI.framework/FMFindingUI

- (long long)fmpfArrowDotCount;
- (bool)fmpfBTDebugMode;
- (float)fmpfBlackBackdropAlpha;
- (float)fmpfBlackBackdropSigma;
- (bool)fmpfDebugMode;
- (bool)fmpfDebugModeWithoutBearing;
- (bool)fmpfEcoMode;
- (float)fmpfGreenBackdropAlpha;
- (float)fmpfGreenBackdropHue;
- (float)fmpfGreenBackdropSaturation;
- (float)fmpfGreenBackdropSigma;
- (float)fmpfGreenBackdropValue;
- (void)setFmpfArrowDotCount:(long long)arg1;
- (void)setFmpfBTDebugMode:(bool)arg1;
- (void)setFmpfDebugMode:(bool)arg1;
- (void)setFmpfDebugModeWithoutBearing:(bool)arg1;
- (void)setFmpfEcoMode:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (void)fu_backupAndSetBool:(bool)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetDouble:(double)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetFloat:(float)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetInteger:(long long)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetObject:(id)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetURL:(id)arg1 forKey:(id)arg2;
+ (void)fu_backupStandardUserDefaultsKey:(id)arg1;
+ (void)fu_backupStandardUserDefaultsKey:(id)arg1 useContainer:(bool)arg2;
+ (id)fu_npsManager;
+ (void)fu_synchronizeStandardUserDefaultsKey:(id)arg1;
+ (void)fu_synchronizeStandardUserDefaultsKey:(id)arg1 useContainer:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_menstrualCyclesDefaults;

- (bool)hkmc_analyticsDebugModeEnabled;
- (bool)hkmc_calendarLogAdjacentDaysDisabled;
- (long long)hkmc_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (bool)hkmc_timelineLogAdjacentDaysEnabled;
- (bool)hkmc_timelineTapToLogDisabled;

// Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon

- (void)hdcardiofitness_safeRemoveObserver:(id)arg1 forKeyPath:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (bool)delayedSynchronize;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)_IMAgentObjectForKey:(id)arg1;
+ (id)_IMAppObjectForKey:(id)arg1;
+ (id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2;
+ (void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)messagesAppDomain;
+ (id)messagesDomain;

- (bool)conversationListFocusFilterActionEnabled;
- (void)setConversationListFocusFilterActionEnabled:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MeasureFoundation.framework/MeasureFoundation

- (bool)guideSnapPointsEnabled;
- (bool)isLabelOcclusionEnabled;
- (bool)isLineOcclusionAlphaBlendingEnabled;
- (bool)isLineOcclusionEnabled;
- (bool)isPointOcclusionEnabled;
- (bool)kADDemoEnabled;
- (bool)kADEdgeDetectionEnabled;
- (bool)kADGuidedFilterEnabled;
- (bool)kADShowDepth;
- (bool)kADShowPerson;
- (bool)kCoachingCalloutEnabledV1;
- (bool)kDisableAllCoaching;
- (bool)kDivisionsEnabled;
- (bool)kDrawDebugPlanes;
- (bool)kEdgeDetectionDebugReticleEnabled;
- (bool)kEdgeDetectionEnabled;
- (bool)kEdgeDetectionUniqueContours;
- (bool)kEnableRectangleDetection;
- (bool)kEnableRectangleTracking;
- (bool)kHideRectangleSuggestions;
- (bool)kHideTapToRadar;
- (bool)kLPShowPlane;
- (bool)kLPShowPoints;
- (bool)kMLShowNormalsBackground;
- (bool)kMLShowSampledPoints;
- (bool)kMLShowSegmentedBackground;
- (bool)kMLShowUnprojectedTrail;
- (bool)kPEShowAccuracy;
- (bool)kPEShowHitPoints;
- (bool)kPEShowHitRay;
- (bool)kPEShowStats;
- (bool)kPersonHeightCoachingEnabled;
- (bool)kPersonHeightDebugViewEnabled;
- (bool)kPersonHeightEnabled;
- (bool)kPersonSegmentationAlwaysOn;
- (float)kRayCastAngleThreshold;
- (float)kRayCastDistThreshold;
- (bool)kResetDefaultOnStart;
- (float)kReticleADSlerpFactor;
- (bool)kShouldReportMeasurements;
- (bool)kShowFeaturePoints;
- (bool)kShowLightIntensityDebugInfo;
- (bool)kShowOppositeUnits;
- (bool)kShowOverallState;
- (bool)kShowPreciseMeasurement;
- (bool)kShowRectangleDebugInfo;
- (bool)kShowStatistics;
- (bool)kShowWorldAnchorDebugInfo;
- (bool)kSnapReticleToEdges;
- (bool)labelFadesInAtSpot;
- (bool)logARSession;
- (bool)logARSessionRecording;
- (bool)logARSessionReplay;
- (bool)logApplicationState;
- (bool)logArbitration;
- (bool)logCoaching;
- (bool)logComputerVision;
- (bool)logCoreVideo;
- (bool)logEdgeDetection;
- (bool)logEdgeSnapping;
- (bool)logHapticFeedback;
- (bool)logLabel;
- (bool)logLightEstimation;
- (bool)logMeasureObject;
- (bool)logMisc;
- (bool)logMotionUpdates;
- (bool)logObjectMeasurements;
- (bool)logPerf;
- (bool)logPersonHeight;
- (bool)logPlaneSelection;
- (bool)logShaders;
- (bool)logUIAction;
- (bool)logUIContext;
- (bool)logWorldAnchor;
- (bool)logWorldRectangle;
- (void)setGuideSnapPointsEnabled:(bool)arg1;
- (void)setIsLabelOcclusionEnabled:(bool)arg1;
- (void)setIsLineOcclusionAlphaBlendingEnabled:(bool)arg1;
- (void)setIsLineOcclusionEnabled:(bool)arg1;
- (void)setIsPointOcclusionEnabled:(bool)arg1;
- (void)setKADDemoEnabled:(bool)arg1;
- (void)setKADEdgeDetectionEnabled:(bool)arg1;
- (void)setKADGuidedFilterEnabled:(bool)arg1;
- (void)setKADShowDepth:(bool)arg1;
- (void)setKADShowPerson:(bool)arg1;
- (void)setKCoachingCalloutEnabledV1:(bool)arg1;
- (void)setKDisableAllCoaching:(bool)arg1;
- (void)setKDivisionsEnabled:(bool)arg1;
- (void)setKDrawDebugPlanes:(bool)arg1;
- (void)setKEdgeDetectionDebugReticleEnabled:(bool)arg1;
- (void)setKEdgeDetectionEnabled:(bool)arg1;
- (void)setKEdgeDetectionUniqueContours:(bool)arg1;
- (void)setKEnableRectangleDetection:(bool)arg1;
- (void)setKEnableRectangleTracking:(bool)arg1;
- (void)setKHideRectangleSuggestions:(bool)arg1;
- (void)setKHideTapToRadar:(bool)arg1;
- (void)setKLPShowPlane:(bool)arg1;
- (void)setKLPShowPoints:(bool)arg1;
- (void)setKMLShowNormalsBackground:(bool)arg1;
- (void)setKMLShowSampledPoints:(bool)arg1;
- (void)setKMLShowSegmentedBackground:(bool)arg1;
- (void)setKMLShowUnprojectedTrail:(bool)arg1;
- (void)setKPEShowAccuracy:(bool)arg1;
- (void)setKPEShowHitPoints:(bool)arg1;
- (void)setKPEShowHitRay:(bool)arg1;
- (void)setKPEShowStats:(bool)arg1;
- (void)setKPersonHeightCoachingEnabled:(bool)arg1;
- (void)setKPersonHeightDebugViewEnabled:(bool)arg1;
- (void)setKPersonHeightEnabled:(bool)arg1;
- (void)setKPersonSegmentationAlwaysOn:(bool)arg1;
- (void)setKRayCastAngleThreshold:(float)arg1;
- (void)setKRayCastDistThreshold:(float)arg1;
- (void)setKResetDefaultOnStart:(bool)arg1;
- (void)setKReticleADSlerpFactor:(float)arg1;
- (void)setKShouldReportMeasurements:(bool)arg1;
- (void)setKShowFeaturePoints:(bool)arg1;
- (void)setKShowLightIntensityDebugInfo:(bool)arg1;
- (void)setKShowOppositeUnits:(bool)arg1;
- (void)setKShowOverallState:(bool)arg1;
- (void)setKShowPreciseMeasurement:(bool)arg1;
- (void)setKShowRectangleDebugInfo:(bool)arg1;
- (void)setKShowStatistics:(bool)arg1;
- (void)setKShowWorldAnchorDebugInfo:(bool)arg1;
- (void)setKSnapReticleToEdges:(bool)arg1;
- (void)setLabelFadesInAtSpot:(bool)arg1;
- (void)setLogARSession:(bool)arg1;
- (void)setLogARSessionRecording:(bool)arg1;
- (void)setLogARSessionReplay:(bool)arg1;
- (void)setLogApplicationState:(bool)arg1;
- (void)setLogArbitration:(bool)arg1;
- (void)setLogCoaching:(bool)arg1;
- (void)setLogComputerVision:(bool)arg1;
- (void)setLogCoreVideo:(bool)arg1;
- (void)setLogEdgeDetection:(bool)arg1;
- (void)setLogEdgeSnapping:(bool)arg1;
- (void)setLogHapticFeedback:(bool)arg1;
- (void)setLogLabel:(bool)arg1;
- (void)setLogLightEstimation:(bool)arg1;
- (void)setLogMeasureObject:(bool)arg1;
- (void)setLogMisc:(bool)arg1;
- (void)setLogMotionUpdates:(bool)arg1;
- (void)setLogObjectMeasurements:(bool)arg1;
- (void)setLogPerf:(bool)arg1;
- (void)setLogPersonHeight:(bool)arg1;
- (void)setLogPlaneSelection:(bool)arg1;
- (void)setLogShaders:(bool)arg1;
- (void)setLogUIAction:(bool)arg1;
- (void)setLogUIContext:(bool)arg1;
- (void)setLogWorldAnchor:(bool)arg1;
- (void)setLogWorldRectangle:(bool)arg1;
- (void)setShouldArchiveSpatialMappingData:(bool)arg1;
- (void)setShouldEnableObjectMeasurements:(bool)arg1;
- (void)setShouldRenderOpaqueSurfaces:(bool)arg1;
- (void)setShouldShowObjectDebugViews:(bool)arg1;
- (void)setShouldTuriRefinePredictedBoundingBoxes:(bool)arg1;
- (void)setShouldUseNormalsForBoxOrientation:(bool)arg1;
- (void)setShouldVERefinePredictedBoundingBoxes:(bool)arg1;
- (void)setShowEDLines:(bool)arg1;
- (void)setShowFilteredRefinementPlanes:(bool)arg1;
- (void)setShowFinalPlanes:(bool)arg1;
- (void)setShowGuideSnapPoints:(bool)arg1;
- (void)setShowRefinementPlanes:(bool)arg1;
- (void)setShowSnappableEdges:(bool)arg1;
- (void)setShowsOnlyYukonEModes:(bool)arg1;
- (void)setThrottleEdges:(bool)arg1;
- (bool)shouldArchiveSpatialMappingData;
- (bool)shouldEnableObjectMeasurements;
- (bool)shouldRenderOpaqueSurfaces;
- (bool)shouldShowObjectDebugViews;
- (bool)shouldTuriRefinePredictedBoundingBoxes;
- (bool)shouldUseNormalsForBoxOrientation;
- (bool)shouldVERefinePredictedBoundingBoxes;
- (bool)showEDLines;
- (bool)showFilteredRefinementPlanes;
- (bool)showFinalPlanes;
- (bool)showGuideSnapPoints;
- (bool)showRefinementPlanes;
- (bool)showSnappableEdges;
- (bool)showsOnlyYukonEModes;
- (bool)throttleEdges;

// Image: /System/Library/PrivateFrameworks/MentalHealth.framework/MentalHealth

+ (id)hkmh_mentalHealthDefaults;

// Image: /System/Library/PrivateFrameworks/MessageSupport.framework/MessageSupport

- (bool)mf_blockRemoteContent;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)fc_lastKnownFeedIDs;
- (void)setFc_lastKnownFeedIDs:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation

- (void)nf_migrateObjectForKey:(id)arg1 toKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (void)tsu_registerDefaults;

// Image: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent

- (id)allStoredValues;
- (id)numberForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

+ (id)_applePodcastsFoundationSettingsUserDefaults;
+ (id)_applePodcastsFoundationSharedUserDefaults;
+ (id)appUserDefaultsForUnitTesting;
+ (id)groupUserDefaultsForUnitTesting;
+ (void)setAppUserDefaultsForUnitTesting:(id)arg1;
+ (void)setGroupUserDefaultsForUnitTesting:(id)arg1;
+ (bool)settingsAppWritesDirectlyToSharedUserDefaults;
+ (bool)shouldReadSettingsFromSharedUserDefaults;
+ (id)showListShowsAllShowsKey;
+ (id)syncKeysBookmarksDRMSyncIsDirty;
+ (id)syncKeysBookmarksSyncIsDirty;
+ (id)syncKeysNonFollowedShowsLastSyncTimestamp;
+ (id)syncKeysNonFollowedShowsSynVersion;
+ (id)syncKeysNonFollowedShowsSyncIsDirty;
+ (id)syncKeysPlaylistSyncIsDirty;
+ (id)syncKeysPodcastsDomainVersionKey;
+ (id)syncKeysSubscriptionSyncIsDirty;
+ (id)syncKeysSubscriptionV3SyncIsDirty;

- (long long)episodeLimitForKey:(id)arg1;
- (id)episodeListSortTypeDictionary;
- (long long)fairPlayMigrationRetryCount;
- (id)lastAppUseDate;
- (id)lastExecutionOf:(id)arg1;
- (void)recordExecutionOf:(id)arg1 at:(id)arg2;
- (void)setEpisodeListSortTypeDictionary:(id)arg1;
- (void)setFairPlayMigrationRetryCount:(long long)arg1;
- (void)setLastAppUseDate:(id)arg1;
- (void)setShowListShowsAllShows:(bool)arg1;
- (bool)showListShowsAllShows;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_activeChargerIdentifier;
+ (bool)pbf_hasHadFileProtectionsReset;
+ (bool)pbf_keynoteModeEnabled;
+ (bool)pbf_needsFileProtectionsReset;
+ (void)pbf_setActiveChargerIdentifier:(id)arg1;
+ (void)pbf_setKeynoteModeEnabled:(bool)arg1;
+ (void)pbf_setNeedsFileProtectionsReset:(bool)arg1;
+ (void)pbf_setSnapshotsBuildVersion:(id)arg1;
+ (void)pbf_setSnapshotsLocaleDidChange:(bool)arg1;
+ (void)pbf_setSnapshotsLocaleIdentifier:(id)arg1;
+ (id)pbf_snapshotsBuildVersion;
+ (bool)pbf_snapshotsLocaleDidChange;
+ (id)pbf_snapshotsLocaleIdentifier;
+ (id)pbf_unprotectedUserDefaults;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

- (id)objectIDForKey:(id)arg1;
- (void)setObjectID:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth

+ (id)hkrp_respiratoryDefaults;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)_safari_browserDefaults;
+ (id)safari_browserDefaults;
+ (id)safari_cloudBookmarksDefaults;
+ (id)safari_notificationNameForUserDefaultsKey:(id)arg1;
+ (id)safari_standardUserDefaultsWithOptimizedKeyValueObserving;
+ (id)sf_safariSharedDefaults;

- (void)safari_addStringValue:(id)arg1 toArrayWithKey:(id)arg2;
- (bool)safari_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)safari_dateForKey:(id)arg1;
- (double)safari_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (bool)safari_enableAdvancedPrivacyProtections:(bool)arg1;
- (void)safari_incrementNumberForKey:(id)arg1;
- (void)safari_modifyDictionaryForKey:(id)arg1 block:(id /* block */)arg2;
- (id)safari_numberForKey:(id)arg1;
- (id)safari_observeValueForKey:(id)arg1 onQueue:(id)arg2 notifyForInitialValue:(bool)arg3 handler:(id /* block */)arg4;
- (void)safari_removeStringValue:(id)arg1 fromArrayWithKey:(id)arg2;
- (void)safari_setBool:(bool)arg1 andNotifyForKey:(id)arg2;
- (void)safari_setBool:(bool)arg1 forKey:(id)arg2 andNotifyWithUserInfo:(id)arg3;
- (void)safari_setDate:(id)arg1 forKey:(id)arg2;
- (void)safari_setInteger:(long long)arg1 andNotifyForKey:(id)arg2;
- (void)safari_setObject:(id)arg1 andNotifyForKey:(id)arg2;
- (bool)safari_toggleBoolAndNotifyForKey:(id)arg1;
- (bool)safari_toggleBoolForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (void)setStartPageSectionDescriptors:(id)arg1;
- (id)startPageSectionDescriptors;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_keyForWebKitExperimentalFeature:(id)arg1;
+ (id)safari_keyForWebKitFeature:(id)arg1;
+ (bool)safari_shouldObserveWebKitFeature:(id)arg1;

- (bool)safari_resetWebKitExperimentalFeaturesIfNeeded;

// Image: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore

- (long long)sts_legalNoticeCount;
- (void)sts_setLegalNoticeCount:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

+ (id)hksp_analyticsUserDefaults;
+ (id)hksp_internalUserDefaults;
+ (id)hksp_sleepdUserDefaults;
+ (id)hksp_springBoardUserDefaults;

- (bool)hksp_boolForKey:(id)arg1;
- (id)hksp_dataForKey:(id)arg1;
- (float)hksp_debugSleepModeAlpha:(bool*)arg1;
- (bool)hksp_debugSleepModeEnabled;
- (id)hksp_dictionaryRepresentation;
- (id)hksp_dictionaryRepresentationForKeys:(id)arg1;
- (float)hksp_floatForKey:(id)arg1;
- (long long)hksp_integerForKey:(id)arg1;
- (bool)hksp_lockScreenDebugMode;
- (bool)hksp_lockScreenDemoMode;
- (id)hksp_objectForKey:(id)arg1;
- (void)hksp_removeObjectForKey:(id)arg1;
- (void)hksp_removeObjectsForKeys:(id)arg1;
- (void)hksp_reset;
- (void)hksp_saveDictionary:(id)arg1;
- (void)hksp_setBool:(bool)arg1 forKey:(id)arg2;
- (void)hksp_setDebugSleepModeAlpha:(float)arg1;
- (void)hksp_setDebugSleepModeEnabled:(bool)arg1;
- (void)hksp_setFloat:(float)arg1 forKey:(id)arg2;
- (void)hksp_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)hksp_setLockScreenDebugMode:(bool)arg1;
- (void)hksp_setLockScreenDemoMode:(bool)arg1;
- (void)hksp_setObject:(id)arg1 forKey:(id)arg2;
- (void)hksp_setUseDemoSleepData:(bool)arg1;
- (void)hksp_synchronize;
- (void)hksp_synchronizeKeys:(id)arg1;
- (bool)hksp_useDemoSleepData;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (bool)boolForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (long long)integerForSettingKey:(id)arg1 withDefaultValue:(long long)arg2;
- (id)stringForSettingKey:(id)arg1 withDefaultValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/StocksCore.framework/StocksCore

+ (id)sc_userDefaultsWithSuiteName:(id)arg1 backupDisabled:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)arrayForKey:(id)arg1 inRole:(id)arg2;
- (id)arrayForKeyInCurrentRole:(id)arg1;
- (bool)boolForKey:(id)arg1 inRole:(id)arg2;
- (bool)boolForKeyInCurrentRole:(id)arg1;
- (id)dataForKey:(id)arg1 inRole:(id)arg2;
- (id)dataForKeyInCurrentRole:(id)arg1;
- (id)dictionaryForKey:(id)arg1 inRole:(id)arg2;
- (id)dictionaryForKeyInCurrentRole:(id)arg1;
- (double)doubleForKey:(id)arg1 inRole:(id)arg2;
- (double)doubleForKeyInCurrentRole:(id)arg1;
- (float)floatForKey:(id)arg1 inRole:(id)arg2;
- (float)floatForKeyInCurrentRole:(id)arg1;
- (long long)integerForKey:(id)arg1 inRole:(id)arg2;
- (long long)integerForKeyInCurrentRole:(id)arg1;
- (id)keyForRole:(id)arg1;
- (id)objectForKey:(id)arg1 inRole:(id)arg2;
- (id)objectForKeyInCurrentRole:(id)arg1;
- (id)p_currentRole;
- (void)removeObjectForKey:(id)arg1 inRole:(id)arg2;
- (void)removeObjectForKeyInCurrentRole:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setBool:(bool)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setDouble:(double)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setFloat:(float)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setInteger:(long long)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setObject:(id)arg1 forKeyInCurrentRole:(id)arg2;
- (id)stringForKey:(id)arg1 inRole:(id)arg2;
- (id)stringForKeyInCurrentRole:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)sb_defaults;
+ (id)tu_defaults;

- (bool)boolForKey:(id)arg1 withDefault:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/TextToSpeechVoiceBankingSupport.framework/TextToSpeechVoiceBankingSupport

- (id)favoritePhrases;
- (void)setFavoritePhrases:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ThirdPartyApplicationSettings.framework/ThirdPartyApplicationSettings

+ (id)userDefaultsWithSuiteName:(id)arg1 container:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared

- (void)_tcsEnsureProtectionClass;
- (void)_tcsHandleDeviceFirstUnlock;
- (void)_tcsSetPrefsDaemonCacheEnabled:(unsigned char)arg1;
- (void)_tcsSetPrefsObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)lt_appGroupDefaults;

- (bool)lt_hasAcceptedFirstUseConsent;
- (bool)lt_isOnDeviceOnly;

// Image: /System/Library/PrivateFrameworks/TranslationUI.framework/TranslationUI

+ (id)translationAppGroupDefaults;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)voiceMemosUserDefaults;

- (bool)_deletionMatchesWindow:(long long)arg1;
- (long long)rc_audioQuality;
- (bool)rc_deletionIsImmediate;
- (bool)rc_deletionIsNever;
- (long long)rc_recentlyDeletedWindow;
- (bool)rc_useLocationBasedNaming;

// Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit

+ (id)wk_wallpaperKitUserDefaults;

- (bool)wk_ignoreLogicalScreenClassForWallpaperBundle;
- (bool)wk_ignoreProductTypesForWallpaperBundle;
- (void)wk_setIgnoreLogicalScreenClassForWallpaperBundle:(bool)arg1;
- (void)wk_setIgnoreProductTypesForWallpaperBundle:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (id)wlk_userDefaults;

// Image: /System/Library/PrivateFrameworks/WeatherCore.framework/WeatherCore

+ (id)wc_userDefaultsWithSuiteName:(id)arg1 backupDisabled:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_webkit_preferredLanguageCode;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

+ (id)webui_defaults;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)allowActionsFromAllBundles;
+ (bool)bannerWorkaroundsDisabled;
+ (bool)bannersEnabled;
+ (bool)dawnFluidityEnabled;
+ (bool)drawerPerformanceEnabled;
+ (bool)initialBiomeStreamWrites;
+ (bool)maritimeEnabled;
+ (bool)remoteWidgetConfigurationEnabled;
+ (void)setSimulatedStateForTesting:(bool)arg1 forFeatureFlag:(id)arg2;
+ (id)simulatedFeatureFlagState:(id)arg1;
+ (id)siriAssistantUserDefaults;
+ (bool)springBoardActionButton;
+ (bool)syncV2Enabled;
+ (id)systemShortcutsUserDefaults;
+ (bool)universalPreviewsEnabled;
+ (bool)useLinkActionDenyList;
+ (bool)walletTransactionTriggerEnabled;
+ (bool)watchAutomationEnabled;
+ (id)workflowUserDefaults;

- (void)setWorkflowIdentifier:(id)arg1 forToken:(id)arg2;
- (id)workflowIdentifierConsumingSingleUseToken:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit

- (id)tsk_arrayForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_arrayForKeyInCurrentRole:(id)arg1;
- (bool)tsk_boolForKey:(id)arg1 inRole:(id)arg2;
- (bool)tsk_boolForKey:(id)arg1 withDefault:(bool)arg2;
- (bool)tsk_boolForKeyInCurrentRole:(id)arg1;
- (id)tsk_dataForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_dataForKeyInCurrentRole:(id)arg1;
- (id)tsk_dictionaryForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_dictionaryForKeyInCurrentRole:(id)arg1;
- (double)tsk_doubleForKey:(id)arg1 inRole:(id)arg2;
- (double)tsk_doubleForKeyInCurrentRole:(id)arg1;
- (float)tsk_floatForKey:(id)arg1 inRole:(id)arg2;
- (float)tsk_floatForKeyInCurrentRole:(id)arg1;
- (long long)tsk_integerForKey:(id)arg1 inRole:(id)arg2;
- (unsigned long long)tsk_integerForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (long long)tsk_integerForKeyInCurrentRole:(id)arg1;
- (id)tsk_keyForRole:(id)arg1;
- (id)tsk_objectForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_objectForKeyInCurrentRole:(id)arg1;
- (void)tsk_removeObjectForKey:(id)arg1 inRole:(id)arg2;
- (void)tsk_removeObjectForKeyInCurrentRole:(id)arg1;
- (void)tsk_setBool:(bool)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setBool:(bool)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setDouble:(double)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setDouble:(double)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setFloat:(float)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setFloat:(float)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setInteger:(long long)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setInteger:(long long)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setObject:(id)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setObject:(id)arg1 forKeyInCurrentRole:(id)arg2;
- (id)tsk_stringForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_stringForKey:(id)arg1 withDefault:(id)arg2;
- (id)tsk_stringForKeyInCurrentRole:(id)arg1;
- (id)tskp_currentRole;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (void)tsu_registerDefaults;

@end
