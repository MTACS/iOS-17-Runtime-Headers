
@interface CPConversationManagerHost : NSObject <CPConversationManagerDataSourceObserver, NSXPCListenerDelegate, TUNeighborhoodActivityConduitDelegate> {
    void $__lazy_storage_$_protectedStorage;
    void clientShouldConnectNotification;
    void connections;
    void dataSource;
    void featureFlags;
    void listener;
    void listenerDeprecated;
    void queue;
    void serverBag;
    void subscriptions;
}

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 activityAuthorizationChangedForBundleIdentifier:(id)arg2;
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;
- (void)conversationManager:(id)arg1 requestedEndpointWithIdentifier:(id)arg2 activitySession:(id)arg3 completion:(id /* block */)arg4;
- (void)conversationManager:(id)arg1 sharePlayAllowedChanged:(bool)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 splitSessionEnded:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 splitSessionStarted:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 tvDeviceAppeared:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 tvDeviceDisappeared:(id)arg2;

@end
