
@interface ATXSuggestedPagesClient : NSObject <ATXSuggestedPagesInterface> {
    NSObject<OS_dispatch_queue> * _queue;
    ATXInstalledSuggestedPagesTracker * _tracker;
    NSXPCConnection * _xpcConnection;
}

+ (bool)shouldShowInternalFeedbackUI;
+ (id)tapToRadarURLForModeName:(id)arg1;

- (void).cxx_destruct;
- (void)_createInstalledPagesTrackerIfNeeded;
- (bool)allowsSuggestionsForModeUUID:(id)arg1;
- (struct CGImage { }*)cachedSnapshotForSuggestedPageWithIdentifier:(id)arg1;
- (void)didAddAppsWithBundleIds:(id)arg1 suggestedPage:(id)arg2;
- (void)didInstallSuggestedPage:(id)arg1;
- (void)didRemoveAppsWithBundleIds:(id)arg1 suggestedPage:(id)arg2;
- (id)init;
- (void)sendModificationMetricsToCoreAnalyticsWithBundleIds:(id)arg1 suggestedPage:(id)arg2 isAdded:(bool)arg3;
- (void)suggestedPagesWithFilter:(id)arg1 layoutOptions:(id)arg2 completionHandler:(id /* block */)arg3;

@end
