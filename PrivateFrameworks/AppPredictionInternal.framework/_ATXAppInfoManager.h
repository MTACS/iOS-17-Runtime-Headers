
@interface _ATXAppInfoManager : NSObject <ATXBundleIdRemovableProtocol> {
    _ATXDataStore * _dataStore;
    NSMutableArray * _installDeltaLog;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
}

+ (id)sharedInstance;
+ (id)sortArrayAndComputeMedian:(id)arg1;

- (void).cxx_destruct;
- (id)_appInfoNoLockForBundleId:(id)arg1;
- (void)addAverageSecondsBetweenAppActionsForActionKey:(id)arg1 average:(id)arg2;
- (void)addAverageSecondsBetweenLaunchesForBundleId:(id)arg1 average:(id)arg2;
- (void)addExtensionLaunchForBundleId:(id)arg1 date:(id)arg2;
- (void)addInstallForBundleId:(id)arg1 date:(id)arg2;
- (void)addInstallForBundleInfoMap:(id)arg1;
- (void)addLaunchForAppAction:(id)arg1 date:(id)arg2;
- (void)addLaunchForBundleId:(id)arg1 date:(id)arg2;
- (void)addMedianSecondsBetweenAppActionsForActionKey:(id)arg1 median:(id)arg2;
- (void)addMedianSecondsBetweenLaunchesForBundleId:(id)arg1 median:(id)arg2;
- (void)addScreenLockAtDate:(id)arg1;
- (void)addSpotlightLaunchForBundleId:(id)arg1 date:(id)arg2;
- (id)allActionKeys;
- (id)allApps;
- (id)allAppsLaunchedOrInstalledWithin30Days;
- (id)allAppsWithInstallDate;
- (id)app2VecClusterForBundleId:(id)arg1;
- (id)appInfoForBundleId:(id)arg1;
- (id)averageSecondsBetweenAppActionsForActionKey:(id)arg1;
- (id)averageSecondsBetweenLaunchesForBundleId:(id)arg1;
- (void)clearAppInstallInfo;
- (void)clearAppLaunchInfo;
- (void)computeAverageAndMedianSecondsBetweenAppActions;
- (void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)arg1;
- (void)computeAverageAndMedianSecondsBetweenAppLaunches;
- (void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)arg1;
- (void)dealloc;
- (id)genreIdForBundleId:(id)arg1;
- (id)genreIdsForBundleId:(id)arg1;
- (void)handleAppInstallWithInstallDict:(id)arg1;
- (void)handleAppUninstallWithUninstalledAppSet:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)initWithInMemoryStore;
- (id)lastAppActionLaunch;
- (id)lastAppActionLaunchDate;
- (id)lastAppActionLaunchDateForActionKey:(id)arg1;
- (id)lastAppLaunch;
- (id)lastAppLaunchDate;
- (id)lastLaunchDateForBundleId:(id)arg1;
- (id)lastUnlockDate;
- (long long)launchedAppCount;
- (id)medianSecondsBetweenAppActionsForActionKey:(id)arg1;
- (id)medianSecondsBetweenLaunchesForBundleId:(id)arg1;
- (void)removeActionDataForBundleId:(id)arg1;
- (void)removeAppInfoForBundleId:(id)arg1;
- (void)removeAppInfoForBundleIds:(id)arg1;
- (void)removeAppLaunchesForBundleId:(id)arg1;
- (void)removeBundleIds:(id)arg1;
- (void)removeUninstalledApps;
- (id)secondMostRecentAppLaunch;
- (void)startInstallDeltaRecording;
- (id)stopInstallDeltaRecording;
- (id)subGenreIdsForBundleId:(id)arg1;
- (id)totalSlotsInDatastore;
- (void)train;
- (void)updateApp2VecClusterForBundleId:(id)arg1 app2VecCluster:(id)arg2;
- (void)updateApp2VecClustersForAllApps;
- (void)updateGenreIdsForAllApps;
- (void)updateGenreIdsForBundleId:(id)arg1 genreId:(id)arg2 subGenreIds:(id)arg3;

@end
