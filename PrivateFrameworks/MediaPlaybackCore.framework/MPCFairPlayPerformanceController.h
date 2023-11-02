
@interface MPCFairPlayPerformanceController : NSObject <MPCPlaybackAccountManagerObserver, MPServerObjectDatabaseObserver> {
    NSMutableSet * _SAPSignPrewarmedAccounts;
    NSMutableSet * _SAPSignPrewarmingAccounts;
    NSHashTable * _leaseManagers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _miniQueue;
    NSMutableDictionary * _miniSINFAccounts;
    NSMutableSet * _miniSINFEndpointLoadingAccounts;
    bool  _scheduledMiniSINFs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_fetchMiniSINFsWithCompletion:(id /* block */)arg1;
- (id)_init;
- (void)_optimisticallyFetchLeaseForAccounts:(id)arg1;
- (void)_optimisticallyFetchLeaseWithLeaseManager:(id)arg1 accountEnumerator:(id)arg2;
- (void)_prewarmMiniSINFEndpointForAccount:(id)arg1;
- (void)_prewarmSAPSigningForAccount:(id)arg1;
- (void)accountManager:(id)arg1 didChangeAccounts:(id)arg2;
- (void)database:(id)arg1 didFinishImportRequest:(id)arg2;
- (void)dealloc;
- (void)registerLeaseManager:(id)arg1;
- (void)scheduleMiniSINFFetch;
- (void)unregisterLeaseManager:(id)arg1;

@end
