
@interface AFDeviceContextConnection : NSObject <AFInvalidating> {
    <AFDeviceContextConnectionDelegate> * _delegate;
    AFInstanceContext * _instanceContext;
    bool  _isInvalid;
    bool  _isUpdatingLocalDeviceContext;
    AFDeviceContext * _localDeviceContext;
    NSObject<OS_dispatch_queue> * _queue;
    _AFDeviceContextServiceDelegateProxy * _serviceDelegateProxy;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginUpdateLocalDeviceContext;
- (void)_clearXPCConnection;
- (void)_endUpdateLocalDeviceContext;
- (void)_fetchLocalDeviceContextWithCompletion:(id /* block */)arg1;
- (void)_handleXPCConnectionInterruption;
- (void)_handleXPCConnectionInvalidation;
- (void)_invalidate;
- (id)_remoteServiceWithErrorHandler:(id /* block */)arg1;
- (void)_updateLocalDeviceContext:(id)arg1;
- (id)_xpcConnection;
- (void)beginUpdateLocalDeviceContext;
- (void)dealloc;
- (id)description;
- (void)donateSerializedContextMapByPrivacyClass:(id)arg1 withMetadataMap:(id)arg2 forType:(id)arg3 pushToRemote:(bool)arg4 completion:(id /* block */)arg5;
- (void)endUpdateLocalDeviceContext;
- (void)getLocalDeviceContextWithCompletion:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 instanceContext:(id)arg2 delegate:(id)arg3;
- (void)invalidate;

@end
