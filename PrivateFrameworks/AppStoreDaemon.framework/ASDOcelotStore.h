
@interface ASDOcelotStore : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;

- (void).cxx_destruct;
- (void)flushMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)getAppPayoutEventsWithCompletionBlock:(id /* block */)arg1;
- (void)getAppSummaryEventsWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)recordLaunchesWithCompletionBlock:(id /* block */)arg1;
- (void)recordMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resetPayoutWithCompletionBlock:(id /* block */)arg1;
- (void)resetSummaryWithCompletionBlock:(id /* block */)arg1;
- (void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sbsyncWithCompletionBlock:(id /* block */)arg1;
- (void)sbsyncWithDuration:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sendPayoutWithCompletionBlock:(id /* block */)arg1;
- (void)sendSummaryWithCompletionBlock:(id /* block */)arg1;
- (void)showUpsellForItemID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)subscriptionDetailsWithCompletionBlock:(id /* block */)arg1;
- (void)subscriptionStateWithCompletionBlock:(id /* block */)arg1;
- (void)topAppsForAccount:(id)arg1 completionBlock:(id /* block */)arg2;

@end
