
@interface MAPushNotificationController : NSObject <MAServiceClientProtocol> {
    NSXPCConnection * _serviceConnection;
    NSLock * _serviceConnectionLock;
}

@property (retain) NSXPCConnection *serviceConnection;
@property (nonatomic, retain) NSLock *serviceConnectionLock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_serviceConnection;
- (void)addSyntheticJobWithType:(id)arg1 assetSpecifier:(id)arg2 matchingAssetVersion:(id)arg3 triggerInterval:(long long)arg4;
- (id)asyncProxy;
- (void)asyncSubscribeToChannelWithIdentifier:(id)arg1;
- (void)asyncUnsubscribeToChannelWithIdentifier:(id)arg1;
- (void)didReceivePushNotificationWithInfo:(id)arg1;
- (id)init;
- (id)pushJobDescriptions;
- (id)serviceConnection;
- (id)serviceConnectionLock;
- (void)setServiceConnection:(id)arg1;
- (void)setServiceConnectionLock:(id)arg1;
- (void)subscribeToChannelWithIdentifier:(id)arg1;
- (id)subscribedChannelIDs;
- (void)subscribedChannelIDsWithCompletion:(id /* block */)arg1;
- (id)synchronousProxy;
- (void)triggerNotificationWithPayload:(id)arg1;
- (void)unsubscribeFromAllChannels;
- (void)unsubscribeToChannelWithIdentifier:(id)arg1;

@end
