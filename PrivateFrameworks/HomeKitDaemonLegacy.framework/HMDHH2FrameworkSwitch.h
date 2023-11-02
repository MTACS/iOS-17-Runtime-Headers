
@interface HMDHH2FrameworkSwitch : HMFObject <HMBCloudDatabaseDelegate, HMBCloudZoneDelegate, HMFLogging> {
    bool  _autoFrameworkSwitch;
    id /* block */  _blockToBeCalledBeforeSwitchingFramework;
    HMBCloudDatabase * _cloudDatabaseToDetectHH2Zone;
    <HMDHH2FrameworkSwitchDataSource> * _dataSource;
    NAFuture * _fetchSentinelZoneDidFinishFuture;
    HMDHomeManager * _homeManager;
    bool  _isTapToSetupOngoing;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool autoFrameworkSwitch;
@property (nonatomic, copy) id /* block */ blockToBeCalledBeforeSwitchingFramework;
@property (nonatomic, retain) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone;
@property (nonatomic, retain) <HMDHH2FrameworkSwitchDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NAFuture *fetchSentinelZoneDidFinishFuture;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) bool isTapToSetupOngoing;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)errorFromHMDCKAccountStatus:(long long)arg1;
+ (id)logCategory;
+ (void)relaunchHomedAfterSettingEnvironmentTo:(bool)arg1 blockToExecuteBeforeReLaunch:(id /* block */)arg2;
+ (void)setHH2EnablementPreferenceKey:(bool)arg1;
+ (void)setHH2SettingsMigrationKey:(bool)arg1;
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;
+ (void)switchBackToHH1AndRelaunch;
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
+ (void)switchToHH2AndRelaunchHomed;

- (void).cxx_destruct;
- (bool)_areWeRunningInRightEnvironment:(bool)arg1;
- (void)_clearSetupModeIfNeeded;
- (void)_makeSureWeAreRunningInRightEnvironment:(bool)arg1;
- (long long)areCloudKitServersReachableWithError:(id*)arg1;
- (bool)autoFrameworkSwitch;
- (id /* block */)blockToBeCalledBeforeSwitchingFramework;
- (bool)checkExistenceOfHH2SentinelZone;
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;
- (id)cloudDatabaseToDetectHH2Zone;
- (void)createHH2CloudDatabaseAndStartSyncing;
- (void)createHH2SentinelZoneWithCompletionHandler:(id /* block */)arg1;
- (id)dataSource;
- (id)fetchSentinelZoneDidFinishFuture;
- (void)forceFetchSentinelZone;
- (void)handleTapToSetupFinished:(id)arg1;
- (id)homeManager;
- (id)initWithAutoSwitch:(bool)arg1 callBeforeFrameworkSwitch:(id /* block */)arg2 homeManager:(id)arg3 dataSource:(id)arg4;
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1;
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1 dataSource:(id)arg2;
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 callBeforeFrameworkSwitchCompletionHandler:(id /* block */)arg2;
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 dataSource:(id)arg2 callBeforeFrameworkSwitchCompletionHandler:(id /* block */)arg3;
- (bool)isTapToSetupOngoing;
- (void)makeSureWeAreRunningInRightEnvironment:(bool)arg1;
- (void)performInitialSync:(id /* block */)arg1;
- (void)performInitialSyncAndSwitchFrameworkIfRequired;
- (void)removeHH2SentinelZoneWithCompletion:(id /* block */)arg1;
- (void)setAutoFrameworkSwitch:(bool)arg1;
- (void)setBlockToBeCalledBeforeSwitchingFramework:(id /* block */)arg1;
- (void)setCloudDatabaseToDetectHH2Zone:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setIsTapToSetupOngoing:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)switchToHH2AfterPerformingHH2PreRebootTask;
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;
- (bool)switchToSetupMode:(unsigned long long)arg1;
- (void)waitForCloudKitAccountToBeAvailable;
- (bool)waitForHH2SentinelZoneToBeCreated:(double)arg1;
- (bool)waitForHH2SentinelZoneToBeFetchedFromCloud;
- (void)waitForHH2SentinelZoneToBeRemoved;
- (id)workQueue;

@end
