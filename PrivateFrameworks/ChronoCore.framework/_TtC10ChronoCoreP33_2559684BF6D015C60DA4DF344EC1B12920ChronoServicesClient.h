
@interface _TtC10ChronoCoreP33_2559684BF6D015C60DA4DF344EC1B12920ChronoServicesClient : NSObject <CHSChronoWidgetServiceServerInterface> {
    void _server;
    void connection;
    void descriptorService;
    void deviceService;
    void duetService;
    void enablementProvider;
    void extensionService;
    void hostService;
    void keepAliveAssertionProvider;
    void keybagStateProvider;
    void powerlogSuggestionService;
    void queue;
    void serviceAssertionIDs;
    void serviceAssertions;
    void subscriptions;
    void taskService;
    void tasks;
    void timelineService;
    void wantsIntents;
    void widgetFetchSubscriptions;
    void widgetHostIdentities;
    void widgetTimelineLoadActionResponders;
    void widgetTimelineLoadSubscriptions;
}

- (void).cxx_destruct;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2;
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)arg1 reason:(id)arg2 error:(id*)arg3;
- (id)allPairedDevices;
- (void)allWidgetConfigurationsByHostWithCompletion:(id /* block */)arg1;
- (void)fetchDescriptorsForContainerBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)flushPowerlog;
- (void)getAppIntentsXPCListenerEndpointForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)loadSuggestedWidget:(id)arg1 metrics:(id)arg2 stackIdentifier:(id)arg3 reason:(id)arg4 completion:(id /* block */)arg5;
- (void)pairDeviceWith:(id)arg1 completion:(id /* block */)arg2;
- (void)performDescriptorDiscoveryForHost:(id)arg1;
- (void)reloadDescriptorsForContainerBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)reloadRemoteWidgetsWithError:(id*)arg1;
- (void)reloadTimeline:(id)arg1 error:(id*)arg2;
- (bool)remoteWidgetsEnabled;
- (void)removeWidgetHostWithIdentifier:(id)arg1;
- (void)setActivationState:(id)arg1 forWidgetHostWithIdentifier:(id)arg2;
- (void)setWidgetConfiguration:(id)arg1 activationState:(id)arg2 forWidgetHostWithIdentifier:(id)arg3;
- (void)subscribeToExtensionsIncludingIntents:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeToRelevanceEntries:(id /* block */)arg1;
- (void)subscribeToRemoteDevices:(id /* block */)arg1;
- (void)suggestionBudgetsForStackIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (bool)toggleRemoteWidgetsEnabled:(id)arg1 error:(id*)arg2;
- (bool)unpairDeviceWith:(id)arg1 error:(id*)arg2;
- (id)widgetEnvironmentDataForBundleIdentifier:(id)arg1;

@end
