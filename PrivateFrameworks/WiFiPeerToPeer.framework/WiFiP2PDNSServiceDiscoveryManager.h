
@interface WiFiP2PDNSServiceDiscoveryManager : NSObject <WiFiP2PDNSServiceDiscoveryXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    NSMutableArray * _registeredServices;
    id /* block */  _serviceCallback;
    bool  _useWiFiAware;
    WiFiP2PXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)exportedObject;
- (void)handleConnectionEstablishedWithProxy:(id)arg1;
- (void)handleEventType:(unsigned long long)arg1 keyData:(id)arg2 valueData:(id)arg3;
- (id)initUsingWiFiAware:(bool)arg1 serviceCallback:(id /* block */)arg2;
- (id)remoteObjectInterface;
- (void)startConnectionUsingProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startServiceDiscoveryWithConfiguration:(id)arg1;
- (void)startServiceDiscoveryWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopServiceDiscoveryWithConfiguration:(id)arg1;

@end
