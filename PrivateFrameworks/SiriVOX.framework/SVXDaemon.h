
@interface SVXDaemon : NSObject <AFSiriActivationListenerDelegate, NSXPCListenerDelegate, SVXClientServiceServerConnectionDelegate> {
    NSXPCListener * _clientServiceListener;
    SVXQueuePerformer * _clientServiceQueuePerformer;
    SVXVirtualDevice * _hostVirtualDevice;
    bool  _isRunning;
    NSArray * _platformDependencies;
    AFSiriActivationListener * _siriActivationListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_enumerateVirtualDevicesUsingBlock:(id /* block */)arg1;
- (void)_getVirtualDeviceForActivationContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_getVirtualDeviceForInstanceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)clientServiceServerConnectionDidInvalidate:(id)arg1;
- (bool)handleClientServiceXPCConnection:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 context:(id)arg4 completion:(id /* block */)arg5;
- (void)siriActivationListener:(id)arg1 myriadEventWithRequestInfo:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)startWithPlatformDependencies:(id)arg1;
- (void)stop;

@end
