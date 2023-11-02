
@interface _HKBehavior : NSObject {
    NSString * _additionalEntitlementForConnection;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _canPerformOwnershipTakeover;
    bool  _collectsCalorimetry;
    bool  _collectsData;
    NSString * _currentDeviceClass;
    NSString * _currentDeviceName;
    NSString * _currentOSBuild;
    NSString * _currentOSName;
    NSString * _currentOSVersion;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _currentOSVersionStruct;
    struct _HKLazyLoader<_HKFeatureFlags *> { 
        _HKFeatureFlags *_value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _featureFlags;
    NSDictionary * _featureRequirementOverrides;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _futureMigrationsEnabled;
    bool  _hasTelephonyCapability;
    bool  _healthAppHidden;
    bool  _healthAppNotInstalled;
    bool  _invalidatesNotificationInstructionsOnLaunch;
    bool  _isAppleInternalInstall;
    bool  _isAppleWatch;
    bool  _isCompanionCapable;
    bool  _isDeviceSupported;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _isRealityDevice;
    bool  _isRunningSeedBuild;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _isRunningStoreDemoMode;
    bool  _isStandalonePhoneFitnessMode;
    bool  _isTestingDevice;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _isiPad;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _ontologyDatabaseFutureMigrationsEnabled;
    bool  _ontologyIndexingEnabled;
    bool  _ontologyIndexingRequiresAccounts;
    NSString * _overriddenCurrentDeviceDisplayName;
    NSNumber * _overriddenEnableManateeForHSA2Accounts;
    NSNumber * _overriddenFitnessMode;
    NSNumber * _overriddenSupportsActiveQueryDaemonTransactions;
    NSNumber * _overriddenSupportsCachedSleepDaySummaryQueries;
    NSNumber * _overriddenSupportsCachedStatisticsCollectionQueries;
    NSNumber * _overriddenSupportsSwimmingWorkoutSessions;
    NSNumber * _overriddenSupportsWorkoutSmoothing;
    bool  _performsAutomaticConceptIndexing;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _performsAutomaticUserDomainConceptProcessing;
    bool  _performsWorkoutCondensation;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _runningInStoreDemoModeF201;
    bool  _schedulesXPCAlarms;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _shouldReceiveECGSamples;
    bool  _shouldRegisterPeriodicActivities;
    bool  _showSensitiveLogItems;
    bool  _supportsAWDMetricSubmission;
    bool  _supportsActivitySharing;
    bool  _supportsAppSubscriptions;
    bool  _supportsBackgroundSyncRequests;
    bool  _supportsBluetoothDiscovery;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _supportsCloudSync;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _supportsCloudSyncSharding;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _supportsCloudSyncStagingShard;
    bool  _supportsComputedUserCharacteristicCaching;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _supportsCoordinatedCloudSync;
    bool  _supportsHeartRateDataCollection;
    bool  _supportsNanoSync;
    bool  _supportsOntology;
    bool  _supportsOntologyDatabaseUpdates;
    bool  _supportsOntologyFeatureEvaluation;
    bool  _supportsPeriodicCountryMonitoring;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _supportsPeriodicFastCloudSync;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _supportsPeriodicFullCloudSync;
    bool  _supportsSampleExpiration;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _supportsSharedSummarySync;
    bool  _supportsWorkoutRouteSmoothing;
    bool  _supportsWorkouts;
    bool  _tinkerModeEnabled;
    NSString * _unitTest_deviceRegionCode;
}

@property (nonatomic, copy) NSString *additionalEntitlementForConnection;
@property (nonatomic) bool canPerformOwnershipTakeover;
@property (nonatomic) bool collectsCalorimetry;
@property (nonatomic) bool collectsData;
@property (nonatomic, copy) NSString *currentDeviceClass;
@property (nonatomic, copy) NSString *currentDeviceDisplayName;
@property (nonatomic, readonly, copy) NSString *currentDeviceHWModelString;
@property (nonatomic, readonly, copy) NSString *currentDeviceManufacturer;
@property (nonatomic, copy) NSString *currentDeviceName;
@property (nonatomic, readonly, copy) NSString *currentDeviceProductType;
@property (nonatomic, readonly, copy) NSString *currentDeviceRegionCode;
@property (nonatomic, readonly, copy) NSString *currentDeviceRegionInfo;
@property (nonatomic, readonly) unsigned long long currentDiskSpaceAvailable;
@property (nonatomic, readonly) NSDictionary *currentDiskUsage;
@property (nonatomic, readonly, copy) NSString *currentInternalDeviceModel;
@property (nonatomic, copy) NSString *currentOSBuild;
@property (nonatomic, copy) NSString *currentOSName;
@property (nonatomic, copy) NSString *currentOSVersion;
@property (nonatomic) struct { long long x1; long long x2; long long x3; } currentOSVersionStruct;
@property (nonatomic, retain) NSDictionary *featureRequirementOverrides;
@property (nonatomic, readonly) _HKFeatureFlags *features;
@property (nonatomic) unsigned long long fitnessMode;
@property (nonatomic) bool futureMigrationsEnabled;
@property (nonatomic) bool hasTelephonyCapability;
@property (nonatomic) bool healthAppHidden;
@property (nonatomic, readonly) bool healthAppHiddenOrNotInstalled;
@property (nonatomic) bool healthAppNotInstalled;
@property (nonatomic) bool hksp_isRunningUnitTests;
@property (nonatomic) bool invalidatesNotificationInstructionsOnLaunch;
@property (nonatomic) bool isAppleInternalInstall;
@property (nonatomic) bool isAppleWatch;
@property (nonatomic) bool isCompanionCapable;
@property (nonatomic) bool isDeviceSupported;
@property (nonatomic) bool isRealityDevice;
@property (nonatomic) bool isRunningSeedBuild;
@property (nonatomic) bool isRunningStoreDemoMode;
@property (nonatomic) bool isStandalonePhoneFitnessMode;
@property (nonatomic) bool isTestingDevice;
@property (nonatomic) bool isiPad;
@property (nonatomic, readonly, copy) NSTimeZone *localTimeZone;
@property (nonatomic) bool ontologyIndexingEnabled;
@property (nonatomic) bool ontologyIndexingRequiresAccounts;
@property (nonatomic) bool performsAutomaticConceptIndexing;
@property (nonatomic) bool performsAutomaticUserDomainConceptProcessing;
@property (nonatomic) bool performsWorkoutCondensation;
@property (nonatomic) bool runningInStoreDemoModeF201;
@property (nonatomic) bool schedulesXPCAlarms;
@property (nonatomic) bool shouldReceiveECGSamples;
@property (nonatomic) bool shouldRegisterPeriodicActivities;
@property (nonatomic) bool showSensitiveLogItems;
@property (nonatomic) bool supportsAWDMetricSubmission;
@property (nonatomic, readonly) bool supportsActiveQueryDaemonTransactions;
@property (nonatomic) bool supportsActivitySharing;
@property (nonatomic) bool supportsAppSubscriptions;
@property (nonatomic) bool supportsBackgroundSyncRequests;
@property (nonatomic) bool supportsBluetoothDiscovery;
@property (nonatomic, readonly) bool supportsCachedSleepDaySummaryQueries;
@property (nonatomic, readonly) bool supportsCachedStatisticsCollectionQueries;
@property (nonatomic) bool supportsCloudSync;
@property (nonatomic) bool supportsCloudSyncSharding;
@property (nonatomic) bool supportsCloudSyncStagingShard;
@property (nonatomic) bool supportsComputedUserCharacteristicCaching;
@property (nonatomic) bool supportsCoordinatedCloudSync;
@property (nonatomic, readonly) bool supportsEED;
@property (nonatomic) bool supportsHeartRateDataCollection;
@property (nonatomic) bool supportsNanoSync;
@property (nonatomic) bool supportsOntology;
@property (nonatomic) bool supportsOntologyDatabaseFutureMigrations;
@property (nonatomic) bool supportsOntologyDatabaseUpdates;
@property (nonatomic) bool supportsOntologyFeatureEvaluation;
@property (nonatomic) bool supportsPeriodicCountryMonitoring;
@property (nonatomic) bool supportsPeriodicFastCloudSync;
@property (nonatomic) bool supportsPeriodicFullCloudSync;
@property (nonatomic) bool supportsSampleExpiration;
@property (nonatomic, readonly) bool supportsSecondaryProfiles;
@property (nonatomic) bool supportsSharedSummarySync;
@property (nonatomic) bool supportsSwimmingWorkoutSessions;
@property (nonatomic) bool supportsWorkoutRouteSmoothing;
@property (nonatomic) bool supportsWorkouts;
@property (nonatomic) bool tinkerModeEnabled;
@property (nonatomic, readonly) unsigned long long totalDiskCapacity;
@property (nonatomic, copy) NSString *unitTest_deviceRegionCode;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_condensesHeartRateSamples;
+ (id)_currentDeviceName;
+ (id)_currentOSBuild;
+ (id)_currentOSVersion;
+ (struct { long long x1; long long x2; long long x3; })_currentOSVersionStruct;
+ (unsigned long long)_fitnessMode;
+ (bool)_futureMigrationsEnabled;
+ (id)_getActivePairedDevice;
+ (bool)_hasCompletedBuddyWithKey:(id)arg1 version:(long long)arg2;
+ (bool)_hasCompletedBuddyWithVersion:(long long)arg1;
+ (bool)_hasTelephonyCapability;
+ (bool)_healthAppHidden;
+ (bool)_healthAppNotInstalled;
+ (bool)_isAppleInternalInstall;
+ (bool)_isAutomaticProcessingEnabled;
+ (bool)_isBuddyDisabled;
+ (bool)_isCollectBLETypesFromLocalSourceEnabled;
+ (bool)_isDataCollectionForwarderDisabled;
+ (bool)_isDeviceSupported;
+ (bool)_isForceBuddyEnabled;
+ (bool)_isStandalonePhoneFitnessMode;
+ (bool)_isiPad;
+ (bool)_ontologyDatabaseFutureMigrationsEnabled;
+ (void)_resetBuddy;
+ (void)_setHasCompletedBuddyWithKey:(id)arg1 version:(long long)arg2;
+ (void)_setHasCompletedBuddyWithVersion:(long long)arg1;
+ (bool)_shouldShowBuddy;
+ (bool)_showSensitiveLogItems;
+ (bool)_tinkerModeEnabled;
+ (bool)activePairedWatchHasSmartFitnessCoaching;
+ (bool)activePairedWatchSupportsBradycardiaDetection;
+ (bool)activePairedWatchSupportsHeartRateMotionContexts;
+ (bool)allPairedWatchesSupportBradycardiaDetection;
+ (bool)allPairedWatchesSupportHeartRateMotionContexts;
+ (bool)anyPairedWatchHasFlightsClimbedCapability;
+ (id)currentDeviceClass;
+ (id)currentDeviceDisplayName;
+ (id)currentDeviceHWModelString;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceName;
+ (id)currentDeviceProductType;
+ (id)currentDeviceRegionCode;
+ (id)currentDeviceRegionInfo;
+ (id)currentDeviceReleaseType;
+ (id)currentOSBuild;
+ (id)currentOSName;
+ (id)currentOSVersion;
+ (struct { long long x1; long long x2; long long x3; })currentOSVersionStruct;
+ (bool)hasCompletedBuddyWithVersion:(long long)arg1;
+ (bool)hasPairedWatch;
+ (bool)hasTelephonyCapability;
+ (bool)isAppleInternalInstall;
+ (bool)isBuddyDisabled;
+ (bool)isCollectBLETypesFromLocalSourceEnabled;
+ (bool)isDataCollectionForwarderDisabled;
+ (bool)isDeviceSupported;
+ (bool)isRunningStoreDemoMode;
+ (bool)isTestingDevice;
+ (bool)isiPod;
+ (int)nanoSyncProtocolVersionForCompanionSystemBuildVersion:(id)arg1;
+ (int)nanoSyncProtocolVersionForWatchSystemBuildVersion:(id)arg1;
+ (void)resetBuddy;
+ (void)resetSharedBehavior;
+ (bool)runningInStoreDemoModeF201;
+ (void)setForceBuddy:(bool)arg1;
+ (void)setHasCompletedBuddyWithVersion:(long long)arg1;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;
+ (bool)shouldShowBuddy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_hasProductTypePrefix:(id)arg1;
- (id)additionalEntitlementForConnection;
- (bool)canPerformOwnershipTakeover;
- (bool)collectsCalorimetry;
- (bool)collectsData;
- (id)currentDeviceClass;
- (id)currentDeviceDisplayName;
- (id)currentDeviceHWModelString;
- (id)currentDeviceManufacturer;
- (id)currentDeviceName;
- (id)currentDeviceProductType;
- (id)currentDeviceRegionCode;
- (id)currentDeviceRegionInfo;
- (id)currentDeviceReleaseType;
- (unsigned long long)currentDiskSpaceAvailable;
- (id)currentDiskUsage;
- (id)currentInternalDeviceModel;
- (id)currentOSBuild;
- (id)currentOSName;
- (id)currentOSVersion;
- (struct { long long x1; long long x2; long long x3; })currentOSVersionStruct;
- (id)featureRequirementOverrides;
- (id)features;
- (unsigned long long)fitnessMode;
- (bool)futureMigrationsEnabled;
- (bool)hasTelephonyCapability;
- (bool)healthAppHidden;
- (bool)healthAppHiddenOrNotInstalled;
- (bool)healthAppNotInstalled;
- (id)init;
- (bool)invalidatesNotificationInstructionsOnLaunch;
- (bool)isAppleInternalInstall;
- (bool)isAppleWatch;
- (bool)isCompanionCapable;
- (bool)isDeviceSupported;
- (bool)isRealityDevice;
- (bool)isRunningSeedBuild;
- (bool)isRunningStoreDemoMode;
- (bool)isStandalonePhoneFitnessMode;
- (bool)isTestingDevice;
- (bool)isiPad;
- (id)localTimeZone;
- (bool)ontologyIndexingEnabled;
- (bool)ontologyIndexingRequiresAccounts;
- (bool)performsAutomaticConceptIndexing;
- (bool)performsAutomaticUserDomainConceptProcessing;
- (bool)performsWorkoutCondensation;
- (void)resetSupportsCloudSync;
- (bool)runningInStoreDemoModeF201;
- (bool)schedulesXPCAlarms;
- (void)setAdditionalEntitlementForConnection:(id)arg1;
- (void)setCanPerformOwnershipTakeover:(bool)arg1;
- (void)setCollectsCalorimetry:(bool)arg1;
- (void)setCollectsData:(bool)arg1;
- (void)setCurrentDeviceClass:(id)arg1;
- (void)setCurrentDeviceDisplayName:(id)arg1;
- (void)setCurrentDeviceName:(id)arg1;
- (void)setCurrentOSBuild:(id)arg1;
- (void)setCurrentOSName:(id)arg1;
- (void)setCurrentOSVersion:(id)arg1;
- (void)setCurrentOSVersionStruct:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setFeatureRequirementOverrides:(id)arg1;
- (void)setFitnessMode:(unsigned long long)arg1;
- (void)setFutureMigrationsEnabled:(bool)arg1;
- (void)setHasTelephonyCapability:(bool)arg1;
- (void)setHealthAppHidden:(bool)arg1;
- (void)setHealthAppNotInstalled:(bool)arg1;
- (void)setInvalidatesNotificationInstructionsOnLaunch:(bool)arg1;
- (void)setIsAppleInternalInstall:(bool)arg1;
- (void)setIsAppleWatch:(bool)arg1;
- (void)setIsCompanionCapable:(bool)arg1;
- (void)setIsDeviceSupported:(bool)arg1;
- (void)setIsRealityDevice:(bool)arg1;
- (void)setIsRunningSeedBuild:(bool)arg1;
- (void)setIsRunningStoreDemoMode:(bool)arg1;
- (void)setIsStandalonePhoneFitnessMode:(bool)arg1;
- (void)setIsTestingDevice:(bool)arg1;
- (void)setIsiPad:(bool)arg1;
- (void)setOntologyIndexingEnabled:(bool)arg1;
- (void)setOntologyIndexingRequiresAccounts:(bool)arg1;
- (void)setPerformsAutomaticConceptIndexing:(bool)arg1;
- (void)setPerformsAutomaticUserDomainConceptProcessing:(bool)arg1;
- (void)setPerformsWorkoutCondensation:(bool)arg1;
- (void)setRunningInStoreDemoModeF201:(bool)arg1;
- (void)setSchedulesXPCAlarms:(bool)arg1;
- (void)setShouldReceiveECGSamples:(bool)arg1;
- (void)setShouldRegisterPeriodicActivities:(bool)arg1;
- (void)setShowSensitiveLogItems:(bool)arg1;
- (void)setSupportsAWDMetricSubmission:(bool)arg1;
- (void)setSupportsActiveQueryDaemonTransactions:(bool)arg1;
- (void)setSupportsActivitySharing:(bool)arg1;
- (void)setSupportsAppSubscriptions:(bool)arg1;
- (void)setSupportsBackgroundSyncRequests:(bool)arg1;
- (void)setSupportsBluetoothDiscovery:(bool)arg1;
- (void)setSupportsCachedSleepDaySummaryQueries:(bool)arg1;
- (void)setSupportsCachedStatisticsCollectionQueries:(bool)arg1;
- (void)setSupportsCloudSync:(bool)arg1;
- (void)setSupportsCloudSyncSharding:(bool)arg1;
- (void)setSupportsCloudSyncStagingShard:(bool)arg1;
- (void)setSupportsComputedUserCharacteristicCaching:(bool)arg1;
- (void)setSupportsCoordinatedCloudSync:(bool)arg1;
- (void)setSupportsHeartRateDataCollection:(bool)arg1;
- (void)setSupportsNanoSync:(bool)arg1;
- (void)setSupportsOntology:(bool)arg1;
- (void)setSupportsOntologyDatabaseFutureMigrations:(bool)arg1;
- (void)setSupportsOntologyDatabaseUpdates:(bool)arg1;
- (void)setSupportsOntologyFeatureEvaluation:(bool)arg1;
- (void)setSupportsPeriodicCountryMonitoring:(bool)arg1;
- (void)setSupportsPeriodicFastCloudSync:(bool)arg1;
- (void)setSupportsPeriodicFullCloudSync:(bool)arg1;
- (void)setSupportsSampleExpiration:(bool)arg1;
- (void)setSupportsSharedSummarySync:(bool)arg1;
- (void)setSupportsSwimmingWorkoutSessions:(bool)arg1;
- (void)setSupportsWorkoutRouteSmoothing:(bool)arg1;
- (void)setSupportsWorkoutRouteSmoothingOverride:(bool)arg1;
- (void)setSupportsWorkouts:(bool)arg1;
- (void)setTinkerModeEnabled:(bool)arg1;
- (void)setUnitTest_deviceRegionCode:(id)arg1;
- (bool)shouldReceiveECGSamples;
- (bool)shouldRegisterPeriodicActivities;
- (bool)showSensitiveLogItems;
- (bool)supportsAWDMetricSubmission;
- (bool)supportsActiveQueryDaemonTransactions;
- (bool)supportsActivitySharing;
- (bool)supportsAppSubscriptions;
- (bool)supportsBackgroundSyncRequests;
- (bool)supportsBluetoothDiscovery;
- (bool)supportsCachedSleepDaySummaryQueries;
- (bool)supportsCachedStatisticsCollectionQueries;
- (bool)supportsCloudSync;
- (bool)supportsCloudSyncSharding;
- (bool)supportsCloudSyncStagingShard;
- (bool)supportsComputedUserCharacteristicCaching;
- (bool)supportsCoordinatedCloudSync;
- (bool)supportsEED;
- (bool)supportsHeartRateDataCollection;
- (bool)supportsNanoSync;
- (bool)supportsOntology;
- (bool)supportsOntologyDatabaseFutureMigrations;
- (bool)supportsOntologyDatabaseUpdates;
- (bool)supportsOntologyFeatureEvaluation;
- (bool)supportsPeriodicCountryMonitoring;
- (bool)supportsPeriodicFastCloudSync;
- (bool)supportsPeriodicFullCloudSync;
- (bool)supportsSampleExpiration;
- (bool)supportsSecondaryProfiles;
- (bool)supportsSharedSummarySync;
- (bool)supportsSwimmingWorkoutSessions;
- (bool)supportsWorkoutRouteSmoothing;
- (bool)supportsWorkouts;
- (bool)tinkerModeEnabled;
- (unsigned long long)totalDiskCapacity;
- (id)unitTest_deviceRegionCode;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

- (bool)hkmd_supportsMedicationsWidget;
- (bool)hkmd_supportsTimeZone;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

- (bool)_hksp_activePairedDeviceSupportsCapability:(id)arg1;
- (bool)_hksp_supportsSleep_checkTinker:(bool)arg1;
- (bool)hksp_activePairedDeviceHasHomeButton;
- (void)hksp_activePairedDeviceHasSleepAppInstalledWithCompletion:(id /* block */)arg1;
- (id)hksp_activePairedDeviceProductType;
- (bool)hksp_activePairedDeviceSupportsFocusMode;
- (bool)hksp_activePairedDeviceSupportsSleep;
- (bool)hksp_activePairedDeviceSupportsSleepLauncherComplication;
- (bool)hksp_activePairedDeviceSupportsSleepStages;
- (bool)hksp_demoMode;
- (unsigned long long)hksp_device;
- (bool)hksp_hasActivePairedDevice;
- (bool)hksp_isDeviceUnlocked;
- (bool)hksp_isRunningUnitTests;
- (bool)hksp_supportsCFUserNotifications;
- (bool)hksp_supportsChargingReminders;
- (bool)hksp_supportsDailyAnalytics;
- (bool)hksp_supportsGoodMorningAlerts;
- (bool)hksp_supportsHealthData;
- (bool)hksp_supportsLegacySleepAlarms;
- (bool)hksp_supportsSleep;
- (bool)hksp_supportsSleepAlarms;
- (bool)hksp_supportsSleepDaemon;
- (bool)hksp_supportsSleepLockScreen;
- (bool)hksp_supportsSleepTracking;
- (bool)hksp_supportsSleepWidget;
- (bool)hksp_supportsUserNotificationCenter;
- (bool)hksp_supportsWakeDetection;
- (bool)hksp_supportsWakeUpResults;
- (bool)hksp_useDemoSleepData;
- (void)setHksp_isRunningUnitTests:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI

- (id)hksp_systemImageNameForActivePairedDevice;
- (id)hksp_systemImageNameForCurrentDevice;

@end
