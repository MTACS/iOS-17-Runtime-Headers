
@interface CloudMediaServicesPlayerInterface : NSObject {
    <CloudMediaServicesInterfaceProtocol> * _AgoraInterfaceProxy;
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)getCloudExtensionConfigurationFor:(id)arg1 homeUserID:(id)arg2 endpointID:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)init;
- (void)pauseSample;
- (void)playSample:(id)arg1;
- (void)sendPlaybackQueueToRemoteDestination:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendPlaybackQueueWithUserActivityDictionary:(id)arg1 forIntentID:(id)arg2 toDestination:(id)arg3 withIntentData:(id)arg4 prepareQueue:(bool)arg5 withCompletion:(id /* block */)arg6;
- (void)setOverrideURL:(id)arg1;
- (void)setServerEnvironment:(id)arg1;
- (void)stopAnalyticsWithIdentifier:(id)arg1;
- (void)submitAnalyticsForType:(id)arg1 andIdentifier:(id)arg2 eventType:(id)arg3 atTime:(id)arg4 withMetadata:(id)arg5;

@end
