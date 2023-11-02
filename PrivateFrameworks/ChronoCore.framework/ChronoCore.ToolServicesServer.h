
@interface ChronoCore.ToolServicesServer : NSObject <BSServiceConnectionListenerDelegate, CHSToolServiceServerInterface> {
    void activityService;
    void clientConnections;
    void connectionListener;
    void descriptorService;
    void extensionService;
    void hostService;
    void keybagStateProvider;
    void placeholderCacheManager;
    void queue;
    void snapshotCacheManager;
    void stateCaptureService;
    void subscriptions;
    void taskService;
    void timelineCacheManager;
    void timelineService;
}

- (void).cxx_destruct;
- (void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)contentURLForActivityID:(id)arg1 completion:(id /* block */)arg2;
- (void)expireLocationGracePeriods;
- (void)extensionInfoForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)extensionInfoWithCompletion:(id /* block */)arg1;
- (void)fetchStateForItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)reloadTimelinesOfKind:(id)arg1 containedIn:(id)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)resetCaches:(id)arg1 completion:(id /* block */)arg2;
- (void)runReaper;
- (void)timelineForWidgetKey:(id)arg1 completion:(id /* block */)arg2;
- (void)widgetsWithTimelines:(id /* block */)arg1;

@end
