
@interface SBMultitaskingApplicationShortcutService : NSObject <BSServiceConnectionListenerDelegate, SBSMultitaskingApplicationShortcutServiceClientToServerInterface> {
    BSServiceConnectionListener * _connectionListener;
    FBServiceClientAuthenticator * _serviceClientAuthenticator;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    BSServiceConnection<BSServiceConnectionHost> * _spotlightConnection;
    NSMutableSet * _spotlightInterestedBundleIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDisconnectForServiceConnection:(id)arg1;
- (long long)_switcherShortcutActionForRequestedAction:(long long)arg1;
- (oneway void)fetchSupportedShortcutActionsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)performShortcutAction:(id)arg1 forBundleIdentifier:(id)arg2;
- (oneway void)stopObservingUpdatesForBundleIdentifier:(id)arg1;
- (void)updateSupportedShortcutsForInterestedClients;

@end
