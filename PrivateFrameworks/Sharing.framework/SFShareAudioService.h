
@interface SFShareAudioService : NSObject <SFProxCardXPCClientInterface> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _guestDeviceAddress;
    NSString * _headphonesAddress;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    SFBluetoothPairingSession * _pairingSession;
    SFProxCardSessionClient * _proxCardSessionClient;
    id /* block */  _responseHandler;
    CUBluetoothClient * _searchBTClient;
    NSObject<OS_dispatch_source> * _searchTimer;
    SFService * _sfService;
    SFSession * _sfSession;
    SDStatusMonitor * _statusMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SDStatusMonitor *statusMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleSessionEnded:(id)arg1 error:(id)arg2;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleShareAudioFoundDevice:(id)arg1;
- (void)_handleShareAudioPairingCompleted:(id)arg1 error:(id)arg2;
- (void)_handleShareAudioRequest2:(id)arg1 contact:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleShareAudioRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleShareAudioResponse:(int)arg1 error:(id)arg2;
- (void)_handleShareAudioSearchTimeout;
- (void)_invalidate;
- (void)_sfServiceStart;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;
- (void)setStatusMonitor:(id)arg1;
- (id)statusMonitor;
- (void)xpcPerformAction:(int)arg1 completion:(id /* block */)arg2;

@end
