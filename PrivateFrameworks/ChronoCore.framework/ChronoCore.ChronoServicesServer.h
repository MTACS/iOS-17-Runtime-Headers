
@interface ChronoCore.ChronoServicesServer : NSObject <BSServiceConnectionListenerDelegate> {
    void _clientsSetLock;
    void _clientsSetLock_clients;
    void connectionListener;
    void descriptorService;
    void deviceService;
    void duetService;
    void extensionService;
    void hostService;
    void iconStore;
    void initialExtensionDiscoveryCompleteSubscription;
    void keepAliveAssertionProvider;
    void keybagStateProvider;
    void powerlogSuggestionService;
    void queue;
    void subscriptions;
    void taskService;
    void timelineService;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
