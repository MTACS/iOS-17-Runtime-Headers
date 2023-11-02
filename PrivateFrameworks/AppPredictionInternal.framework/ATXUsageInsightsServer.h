
@interface ATXUsageInsightsServer : NSObject <ATXUsageInsightsInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)fetchAllContinuousUsageSessionsWithCompletion:(id /* block */)arg1;
- (void)fetchAllDeliveredNotificationsWithCompletion:(id /* block */)arg1;
- (void)fetchAllInterruptingAppSessionsWithCompletion:(id /* block */)arg1;
- (void)fetchAllMindlessCyclingSessionsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPhubbingSessionsWithCompletion:(id /* block */)arg1;
- (void)fetchSuggestedBundleIDsForAllowListForAllModesWithCompletion:(id /* block */)arg1;
- (void)fetchSuggestedBundleIDsForDenyListForAllModesWithCompletion:(id /* block */)arg1;
- (void)fetchUsageInsightsInferredATXModeEventsWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
