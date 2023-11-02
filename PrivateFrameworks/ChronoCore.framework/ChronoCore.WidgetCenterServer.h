
@interface ChronoCore.WidgetCenterServer : NSObject <NSXPCListenerDelegate, WidgetKit.WidgetCenterConnection_Host> {
    void descriptorService;
    void extensionManager;
    void listener;
    void timelineService;
}

- (void).cxx_destruct;
- (void)_loadCurrentConfigurations:(id /* block */)arg1;
- (void)_reloadAllTimelines:(id /* block */)arg1;
- (void)_reloadTimelinesOfKind:(id)arg1 completion:(id /* block */)arg2;
- (void)_reloadTimelinesOfKind:(id)arg1 inBundle:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)invalidateConfigurationRecommendationsInBundle:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidateConfigurationRecommendationsWithCompletion:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
