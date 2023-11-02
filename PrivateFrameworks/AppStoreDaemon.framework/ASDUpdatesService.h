
@interface ASDUpdatesService : NSObject <ASDServiceProvider> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    bool  _hasUpdatesEntitlement;
    ASDServiceBroker * _serviceBroker;
    int  _storeChangedNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)areAllAppsAuthorizedForAutomaticUpdates;
+ (id)defaultService;
+ (id)interface;
+ (bool)isAutomaticUpdateAuthorizationEnabled;
+ (bool)isAutomaticUpdateAuthorizationRequiredWhenEnabledForAppWithRecord:(id)arg1;
+ (id)registerBadgeCountNotificationBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)autoUpdateEnabled;
- (bool)confirmAgentRequestedUpdateAll;
- (void)dealloc;
- (void)getManagedUpdatesWithCompletionBlock:(id /* block */)arg1;
- (void)getMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)getUpdateMetricsEventsWithCompletionBlock:(id /* block */)arg1;
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)getUpdatesWithCompletionBlock:(id /* block */)arg1;
- (bool)hasEntitlement;
- (void)hideApplicationBadgeForPendingUpdates;
- (id)init;
- (void)refreshUpdateCountWithCompletionBlock:(id /* block */)arg1;
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)reloadForSettingsFromServerWithCompletionBlock:(id /* block */)arg1;
- (id)reloadFromServer;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(id /* block */)arg1;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)arg1;
- (void)reloadManagedUpdatesWithCompletionBlock:(id /* block */)arg1;
- (void)requestAutomaticUpdateAuthorizationIfNecessaryForProcessHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)setAutoUpdateEnabled:(bool)arg1;
- (void)shouldUseModernUpdatesWithCompletionBlock:(id /* block */)arg1;
- (void)showApplicationBadgeForPendingUpdates;
- (void)updateAllWithCompletionBlock:(id /* block */)arg1;
- (void)updateAllWithJobResultsCompletionBlock:(id /* block */)arg1;
- (void)updateAllWithOrder:(id)arg1 completionBlock:(id /* block */)arg2;

@end
