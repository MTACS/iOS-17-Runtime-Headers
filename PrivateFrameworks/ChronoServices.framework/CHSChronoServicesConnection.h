
@interface CHSChronoServicesConnection : NSObject <CHSChronoWidgetServiceClientInterface> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    bool  _includeIntents;
    NSString * _machServiceName;
    CHSServerSubscription * _notQueue_extensionsSubscription;
    CHSServerSubscription * _notQueue_relevanceSubscription;
    CHSServerSubscription * _notQueue_remoteDevicesSubscription;
    NSSet * _notQueue_subscriptions;
    NSObject<OS_dispatch_queue> * _queue;
    BSServiceConnection * _queue_connection;
    bool  _queue_connectionIsActive;
    NSHashTable * _queue_observers;
    NSMutableDictionary * _queue_widgetHostsByHostIdentifier;
    int  _serverStartupToken;
}

@property (nonatomic, readonly) NSSet *cachedExtensions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_debugRestartServer;
+ (id)ncBridgeConnection;
+ (id)sharedInstance;
+ (id)sharedInstanceNotIncludingIntents;

- (void).cxx_destruct;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2;
- (id)_initWithMachServiceName:(id)arg1 listenForReconnect:(bool)arg2 includeIntents:(bool)arg3;
- (void)_queue_addClient:(id)arg1;
- (void)_queue_createConnection;
- (void)_queue_invalidateConnection;
- (void)_queue_notifyDevicesDidChange:(id)arg1;
- (void)_queue_notifyExtensionsDidChange:(id)arg1;
- (void)_queue_notifyRelevanceEntriesDidChange:(id)arg1;
- (id)_queue_remoteTargetCreatingConnectionIfNecessary:(bool)arg1;
- (void)_queue_removeClient:(id)arg1;
- (id)_subscribeToExtensions;
- (id)_subscribeToRelevanceEntries;
- (id)_subscribeToRemoteDevices;
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)arg1 reason:(id)arg2 error:(out id*)arg3;
- (void)addClient:(id)arg1;
- (id)allPairedDevices;
- (oneway void)allWidgetConfigurationsByHostWithCompletion:(id /* block */)arg1;
- (id)cachedExtensions;
- (void)dealloc;
- (oneway void)fetchDescriptorsForContainerBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)flushPowerlog;
- (oneway void)getAppIntentsXPCListenerEndpointForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)includesIntents;
- (id)init;
- (oneway void)loadSuggestedWidget:(id)arg1 metrics:(id)arg2 stackIdentifier:(id)arg3 reason:(id)arg4 completion:(id /* block */)arg5;
- (oneway void)nearbyDevicesDidChange:(id)arg1;
- (void)pairDevice:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)performDescriptorDiscoveryForHost:(id)arg1;
- (oneway void)reloadDescriptorsForContainerBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)reloadRemoteWidgetsWithError:(id*)arg1;
- (bool)reloadTimeline:(id)arg1 error:(id*)arg2;
- (bool)remoteWidgetsEnabled;
- (void)removeClient:(id)arg1;
- (oneway void)removeWidgetHost:(id)arg1;
- (void)setIncludeIntents:(bool)arg1;
- (id)subscribeToExtensions:(id*)arg1 outExtensions:(id*)arg2;
- (id)subscribeToRelevanceEntries:(id*)arg1 outRelevanceEntries:(id*)arg2;
- (id)subscribeToRemoteDevices:(id*)arg1 outRemoteDevices:(id*)arg2;
- (oneway void)suggestionBudgetsForStackIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (bool)toggleRemoteWidgetsEnabled:(bool)arg1 error:(id*)arg2;
- (bool)unpairDevice:(id)arg1 error:(id*)arg2;
- (oneway void)updateWidgetHostActivationState:(id)arg1;
- (oneway void)updateWidgetHostConfigurations:(id)arg1;
- (id)widgetEnvironmentDataForBundleIdentifier:(id)arg1;
- (oneway void)widgetExtensionsDidChange:(id)arg1;
- (oneway void)widgetRelevanceEntriesDidChange:(id)arg1;

@end
