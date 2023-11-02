
@interface SFDeviceSetupWHAService : NSObject {
    bool  _activateCalled;
    SFDeviceOperationHandlerCDPSetup * _cdpSetupHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _needsCDPRepair;
    bool  _prefCDPEnabled;
    id /* block */  _progressHandler;
    SFService * _sfService;
    SFSession * _sfSession;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool needsCDPRepair;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_handleInfoExchange:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleRequest:(id)arg1 flags:(unsigned int)arg2 session:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (bool)needsCDPRepair;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setNeedsCDPRepair:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
