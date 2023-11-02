
@interface SGDManagerForCTS : NSObject {
    SGServiceContext * _context;
    struct SGDSuggestManagerCTSCriteriaState { 
        bool hasItemsHighPriority; 
        bool hasItemsLowPriority; 
    }  _ctsCriteriaState;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _geocodeLock;
    id /* block */  _harvestStoreGetter;
    double  _lastFrontfillFinishTime;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _verificationLock;
    <SGXPCActivityManagerProtocol> * _xpcActivityManager;
}

+ (void)_logCallInteractions:(id)arg1;
+ (id)defaultInstance;
+ (id)sharedSingletonInstance;

- (void).cxx_destruct;
- (void)_performCollectWeeklyStats:(id)arg1;
- (void)_performHarvestedURLMetricUploadAcitivity:(id)arg1;
- (void)_performIdentityAnalysisActivity:(id)arg1;
- (void)_performMailIntelligenceTasksActivity:(id)arg1;
- (void)_performMobileAssetMetadataDownloadActivity:(id)arg1;
- (void)_performProcessPendingGeocodesActivity:(id)arg1;
- (void)_performProcessPendingVerificationActivity:(id)arg1 overrideVerificationStatus:(id)arg2;
- (void)_performSendRTCActivity:(id)arg1;
- (void)_performTrimActivity:(id)arg1;
- (void)_performVacuumActivity;
- (bool)_processMessage:(id)arg1 pipeline:(id)arg2 context:(id)arg3 harvestMetrics:(id)arg4;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_registerForCTSSendRTCActivity;
- (void)_registerForCTSTrimActivity;
- (void)_registerForCTSVacuumActivity;
- (void)_registerForCollectWeeklyStats;
- (void)_registerForContactDetailCacheRebuildActivity;
- (void)_registerHarvestedURLMetricUploadActivity;
- (void)_registerMailIntelligenceTasksActivity;
- (void)_registerMobileAssetMetadataDownloadActivity;
- (void)_registerProcessPendingGeocodesActivity;
- (void)_registerProcessPendingVerificationActivity;
- (bool)_shouldDissectContentWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 bundleIdentifier:(id)arg3 headers:(id)arg4 accountIdentifier:(id)arg5;
- (void)dealloc;
- (bool)hasAlreadyHarvestedSearchableItem:(id)arg1;
- (id)initWithHarvestStoreGetter:(id /* block */)arg1 xpcActivityManager:(id)arg2;
- (void)performContactDetailCacheRebuildActivity:(id)arg1;
- (bool)processMailMessage:(id)arg1 headers:(id)arg2 pipeline:(id)arg3 context:(id)arg4 harvestMetrics:(id)arg5;
- (bool)processSearchableItem:(id)arg1 pipeline:(id)arg2 context:(id)arg3;
- (bool)processSearchableItem:(id)arg1 pipeline:(id)arg2 context:(id)arg3 harvestMetrics:(id)arg4;
- (bool)processSearchableItemForTesting:(id)arg1;
- (bool)processTextMessage:(id)arg1 pipeline:(id)arg2 context:(id)arg3 harvestMetrics:(id)arg4;
- (void)registerForCTS;
- (id)serviceContext;
- (void)waitForXpcActivityQueue;

@end
