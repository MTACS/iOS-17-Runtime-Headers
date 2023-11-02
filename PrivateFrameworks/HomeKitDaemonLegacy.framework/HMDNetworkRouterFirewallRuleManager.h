
@interface HMDNetworkRouterFirewallRuleManager : HMFObject <HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerDebug, HMDNetworkRouterFirewallRuleManagerInternal, HMFLogging> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableArray * _clients;
    <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> * _coordinator;
    <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> * _coordinatorFactory;
    HMBLocalDatabase * _localDatabase;
    NSNotificationCenter * _notificationCenter;
    unsigned long long  _operationsInProgressCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _propertyLock;
    long long  _state;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSArray *activeClients;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSMutableArray *clients;
@property (nonatomic, retain) <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> *coordinator;
@property (nonatomic, readonly) <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> *coordinatorFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMBLocalDatabase *localDatabase;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic) unsigned long long operationsInProgressCount;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (double)defaultCloudFetchInterval;
+ (double)defaultCloudFetchRetryInterval;
+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_fetchCloudChangesIgnoringLastFetchedAccessories:(bool)arg1 forceChangeNotifications:(bool)arg2 completion:(id /* block */)arg3;
- (id)activeClients;
- (void)addOverrides:(id)arg1 completion:(id /* block */)arg2;
- (id)callbackQueue;
- (id)clients;
- (id)coordinator;
- (id)coordinatorFactory;
- (void)dealloc;
- (void)didCompleteScheduledCloudFetch;
- (void)dumpAllLocalRulesIgnoringOverrides:(bool)arg1 rawOutput:(bool)arg2 completion:(id /* block */)arg3;
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(bool)arg3 verifySignatures:(bool)arg4 completion:(id /* block */)arg5;
- (void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(bool)arg2 rawOutput:(bool)arg3 completion:(id /* block */)arg4;
- (void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 completion:(id /* block */)arg6;
- (void)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 completion:(id /* block */)arg6;
- (void)fetchCloudChangesWithCompletion:(id /* block */)arg1;
- (void)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRulesForAccessories:(id)arg1 completion:(id /* block */)arg2;
- (void)forceFetchCloudChangesAndForceChangeNotifications:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithLocalDatabase:(id)arg1;
- (id)initWithLocalDatabase:(id)arg1 coordinatorFactory:(id)arg2;
- (id)initWithLocalDatabase:(id)arg1 notificationCenter:(id)arg2 workQueue:(id)arg3 coordinatorFactory:(id)arg4;
- (void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(bool)arg2 completion:(id /* block */)arg3;
- (id)localDatabase;
- (id)notificationCenter;
- (unsigned long long)operationsInProgressCount;
- (void)removeAllLocalRulesWithCompletion:(id /* block */)arg1;
- (void)removeAllOverridesWithCompletion:(id /* block */)arg1;
- (void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)setCoordinator:(id)arg1;
- (void)setOperationsInProgressCount:(unsigned long long)arg1;
- (void)setOverrides:(id)arg1 completion:(id /* block */)arg2;
- (void)setState:(long long)arg1;
- (void)shutdownForClient:(id)arg1;
- (void)startupForClient:(id)arg1 completion:(id /* block */)arg2;
- (long long)state;
- (id)workQueue;

@end
