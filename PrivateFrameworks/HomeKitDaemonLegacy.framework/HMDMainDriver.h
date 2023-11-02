
@interface HMDMainDriver : NSObject <HMDRelaunchHandling, HMFLogging> {
    HMDAccessoryBrowser * _accessoryBrowser;
    HMDCloudManager * _cloudDataSyncManager;
    HMDCoreData * _coreData;
    HMDHomeManager * _homeManager;
    NSObject<OS_os_log> * _logger;
    HMDMetricsManager * _metricsManager;
    HMDRetailDemoModeRequestHandler * _retailDemoModeRequestHandler;
    HMDUpdater * _updater;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMDAccessoryBrowser *accessoryBrowser;
@property (nonatomic, retain) HMDCloudManager *cloudDataSyncManager;
@property (nonatomic, readonly) HMDCoreData *coreData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDHomeManager *homeManager;
@property (nonatomic, retain) HMDMetricsManager *metricsManager;
@property (nonatomic, retain) HMDRetailDemoModeRequestHandler *retailDemoModeRequestHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDUpdater *updater;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)driver;
+ (id)getLocalStoreFrom:(id)arg1;
+ (id)loadHomeDataFromDemoModeStore:(id*)arg1;
+ (id)loadHomeDataFromLocalStore:(id*)arg1 decryptionFailed:(bool*)arg2;
+ (id)loadHomeDataFromLocalStore:(id*)arg1 fromLocation:(id)arg2 decryptionFailed:(bool*)arg3 forHH2Migration:(bool)arg4;
+ (id)loadSQLArchiveWithDecryptionFail:(bool*)arg1 fromLocation:(id)arg2 forHH2Migration:(bool)arg3 error:(id*)arg4;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryBrowser;
- (id)cloudDataSyncManager;
- (id)coreData;
- (id)homeManager;
- (id)init;
- (void)localeChanged;
- (id)metricsManager;
- (void)relaunch;
- (void)relaunchAfterDelay:(double)arg1;
- (void)relaunchHomed;
- (id)retailDemoModeRequestHandler;
- (void)setAccessoryBrowser:(id)arg1;
- (void)setCloudDataSyncManager:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setMetricsManager:(id)arg1;
- (void)setRetailDemoModeRequestHandler:(id)arg1;
- (void)setUpdater:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)start;
- (id)updater;
- (id)workQueue;

@end
