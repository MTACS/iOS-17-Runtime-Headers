
@interface MTSXPCServer : NSObject <HMFLogging, MTSXPCClientProxyDelegate, MTSXPCListenerDelegate> {
    <MTSAuthorizationServerInterface> * _authorizationServer;
    NSMutableSet * _clientProxies;
    id /* block */  _clientProxyFactory;
    <MTSDevicePairingServerInterface> * _devicePairingServer;
    <MTSXPCDeviceSetupClientProxyDelegate> * _deviceSetupServer;
    <MTSXPCListener> * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <MTSSystemCommissionerPairingServerInterface> * _systemCommissionerPairingServer;
}

@property <MTSAuthorizationServerInterface> *authorizationServer;
@property (readonly) NSMutableSet *clientProxies;
@property (readonly) id /* block */ clientProxyFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <MTSDevicePairingServerInterface> *devicePairingServer;
@property <MTSXPCDeviceSetupClientProxyDelegate> *deviceSetupServer;
@property (readonly) unsigned long long hash;
@property (readonly) <MTSXPCListener> *listener;
@property (readonly) Class superclass;
@property <MTSSystemCommissionerPairingServerInterface> *systemCommissionerPairingServer;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)authorizationServer;
- (id)clientProxies;
- (void)clientProxy:(id)arg1 checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(id /* block */)arg2;
- (void)clientProxy:(id)arg1 fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clientProxy:(id)arg1 fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)arg2;
- (void)clientProxy:(id)arg1 openCommissioningWindowForSystemCommissionerPairingUUID:(id)arg2 duration:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)clientProxy:(id)arg1 performDeviceSetupUsingRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clientProxy:(id)arg1 readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clientProxy:(id)arg1 removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clientProxy:(id)arg1 removeDevicePairingWithUUID:(id)arg2 forSystemCommissionerPairingUUID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)clientProxy:(id)arg1 removeSystemCommissionerPairingWithUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)clientProxyFactory;
- (id)devicePairingServer;
- (id)deviceSetupServer;
- (id)init;
- (id)initWithListener:(id)arg1 clientProxyFactory:(id /* block */)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setAuthorizationServer:(id)arg1;
- (void)setDevicePairingServer:(id)arg1;
- (void)setDeviceSetupServer:(id)arg1;
- (void)setSystemCommissionerPairingServer:(id)arg1;
- (void)showRestrictedCharacteristicsAccessWarningAlertWithClientProxy:(id)arg1;
- (void)start;
- (id)systemCommissionerPairingServer;

@end
