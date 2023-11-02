
@interface ATXUsageInsightsClient : NSObject <ATXUsageInsightsInterface> {
    NSXPCConnection * _xpcConnection;
}

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

@end
