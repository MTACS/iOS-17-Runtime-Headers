
@interface CloudMediaServicesInterfaceXPCListener : NSObject <CloudMediaServicesInterfaceProtocol, NSXPCListenerDelegate> {
    NSMutableArray * _clients;
    <CloudMediaServicesInterfaceProtocol> * _playbackCommandDelegate;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) NSMutableArray *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CloudMediaServicesInterfaceProtocol> *playbackCommandDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clients;
- (void)getCloudExtensionConfigurationFor:(id)arg1 homeUserID:(id)arg2 endpointID:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)handleClientDisconnection:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pauseSample;
- (void)playSample:(id)arg1;
- (id)playbackCommandDelegate;
- (void)sendPlaybackQueueToRemoteDestination:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendPlaybackQueueWithUserActivityDictionary:(id)arg1 forIntentID:(id)arg2 toDestination:(id)arg3 withIntentData:(id)arg4 prepareQueue:(bool)arg5 withCompletion:(id /* block */)arg6;
- (void)setClients:(id)arg1;
- (void)setOverrideURL:(id)arg1;
- (void)setPlaybackCommandDelegate:(id)arg1;
- (void)setServerEnvironment:(id)arg1;
- (void)stopAnalyticsWithIdentifier:(id)arg1;
- (void)submitAnalyticsForType:(id)arg1 andIdentifier:(id)arg2 eventType:(id)arg3 atTime:(id)arg4 withMetadata:(id)arg5;

@end
