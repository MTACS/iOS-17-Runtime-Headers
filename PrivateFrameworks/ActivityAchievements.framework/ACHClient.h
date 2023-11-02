
@interface ACHClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    id /* block */  _injectedErrorHandler;
    HKPluginProxyProvider * _pluginProxyProvider;
    <ACHServerInterface> * _serverProxy;
    NSObject<OS_dispatch_queue> * _serverQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ injectedErrorHandler;
@property (nonatomic, retain) HKPluginProxyProvider *pluginProxyProvider;
@property (nonatomic, retain) <ACHServerInterface> *serverProxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPluginProxyErrorHandler:(id /* block */)arg1;
- (id /* block */)_clientQueueCompletion:(id /* block */)arg1;
- (void)_injectProxyProvider:(id)arg1;
- (void)_remoteProxy:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)addEarnedInstance:(id)arg1 completion:(id /* block */)arg2;
- (void)addTemplate:(id)arg1 completion:(id /* block */)arg2;
- (void)availableMobileAssetsWithCompletion:(id /* block */)arg1;
- (id)clientQueue;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchActivityChallengeAssetsServerURLWithCompletion:(id /* block */)arg1;
- (void)fetchAllAchievementsWithCompletion:(id /* block */)arg1;
- (void)fetchAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)fetchAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)forceAwardingSchedulerWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id /* block */)injectedErrorHandler;
- (void)monthlyChallengeForDate:(id)arg1 completion:(id /* block */)arg2;
- (id)pluginProxyProvider;
- (id)remoteInterface;
- (void)removeAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)removeAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)removeEarnedInstance:(id)arg1 completion:(id /* block */)arg2;
- (void)removeTemplate:(id)arg1 completion:(id /* block */)arg2;
- (void)runMonthlyChallengesWithCompletion:(id /* block */)arg1;
- (id)serverProxy;
- (id)serverQueue;
- (void)setActivityChallengeAssetsServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setClientQueue:(id)arg1;
- (void)setInjectedErrorHandler:(id /* block */)arg1;
- (void)setPluginProxyProvider:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (void)setServerQueue:(id)arg1;
- (void)templateForMonthlyChallengeType:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
