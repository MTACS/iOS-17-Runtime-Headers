
@interface SFDeviceSetupTVLatencyService : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _eventFinalDelivered;
    bool  _finished;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _progressHandler;
    SFService * _sfService;
    SFSession * _sfSession;
    TVLAudioLatencyEstimator * _tvLatencyEstimator;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleTVLatencyProgressEvent:(unsigned long long)arg1 info:(id)arg2;
- (void)_handleTVLatencyRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_invalidate;
- (void)_reportProgress:(unsigned int)arg1 info:(id)arg2;
- (void)_sfServiceStart;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)progressHandler;
- (void)sendSetupAction:(unsigned int)arg1 info:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
