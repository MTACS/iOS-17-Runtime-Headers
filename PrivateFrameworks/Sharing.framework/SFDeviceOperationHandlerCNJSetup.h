
@interface SFDeviceOperationHandlerCNJSetup : NSObject {
    SKSetupCaptiveNetworkJoinServer * _cnjServer;
    int  _cnsNotifyToken;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _reachabilityDone;
    CUReachabilityMonitor * _reachabilityMonitor;
    id /* block */  _responseHandler;
    SFSession * _sfSession;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFSession *sfSession;

- (void).cxx_destruct;
- (void)_handleCaptiveJoinRequestWithResponseHandler:(id /* block */)arg1;
- (void)_runReachability:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_updateCaptiveState;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;
- (void)setSfSession:(id)arg1;
- (id)sfSession;

@end
