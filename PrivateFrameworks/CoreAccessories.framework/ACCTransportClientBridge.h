
@interface ACCTransportClientBridge : NSObject <ACCTransportClientDelegate> {
    id /* block */  _connectionAuthStatusChangedHandler;
    id /* block */  _connectionPropertiesChangedHandler;
    id /* block */  _endpointPropertiesChangedHandler;
    id /* block */  _serverDisconnectedHandler;
    ACCTransportClient * _transportClient;
}

@property (nonatomic, copy) id /* block */ connectionAuthStatusChangedHandler;
@property (nonatomic, copy) id /* block */ connectionPropertiesChangedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ endpointPropertiesChangedHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ serverDisconnectedHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) ACCTransportClient *transportClient;

+ (id)sharedBridge;

- (void).cxx_destruct;
- (id /* block */)connectionAuthStatusChangedHandler;
- (id /* block */)connectionPropertiesChangedHandler;
- (id /* block */)endpointPropertiesChangedHandler;
- (id)init;
- (id /* block */)serverDisconnectedHandler;
- (void)setConnectionAuthStatusChangedHandler:(id /* block */)arg1;
- (void)setConnectionPropertiesChangedHandler:(id /* block */)arg1;
- (void)setEndpointPropertiesChangedHandler:(id /* block */)arg1;
- (void)setServerDisconnectedHandler:(id /* block */)arg1;
- (void)setTransportClient:(id)arg1;
- (id)transportClient;
- (void)transportClient:(id)arg1 authStatusDidChange:(bool)arg2 forConnectionWithUUID:(id)arg3;
- (void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forConnectionWithUUID:(id)arg3 previousProperties:(id)arg4;
- (void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forEndpointWithUUID:(id)arg3 previousProperties:(id)arg4 connectionUUID:(id)arg5;
- (void)transportClientServerDisconnected:(id)arg1;

@end
