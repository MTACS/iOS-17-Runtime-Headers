
@interface CSEndpointerXPCClient : CSEndpointerProxy <CSEndpointerXPCServiceDelegate> {
    <CSEndpointAnalyzerImpl> * _activeEndpointer;
    CSEndpointerMetrics * _cachedMetrics;
    NSXPCConnection * _endpointerConnection;
    <CSEndpointAnalyzerDelegate> * _endpointerDelegate;
    <CSEndpointAnalyzerImplDelegate> * _endpointerImplDelegate;
    id  _remoteObjectProxy;
    NSString * _requestId;
    NSObject<OS_dispatch_queue> * _xpcClientQueue;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
    NSObject<OS_dispatch_queue> * _xpcDelegateQueue;
}

@property (nonatomic, retain) CSEndpointerMetrics *cachedMetrics;
@property (nonatomic, retain) NSXPCConnection *endpointerConnection;
@property (nonatomic, retain) id remoteObjectProxy;
@property (nonatomic, retain) NSString *requestId;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcClientQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcDelegateQueue;

- (void).cxx_destruct;
- (void)_createClientConnection;
- (void)_deliverHardEndpointDetectedAtTime:(double)arg1 withMetrics:(id)arg2;
- (id)_getRemoteServiceProxyObject;
- (id)_getSerialQueueWithName:(id)arg1 targetQueue:(id)arg2;
- (id)activeEndpointer;
- (id)cachedEndpointerMetrics;
- (id)cachedMetrics;
- (void)dealloc;
- (void)didDetectHardEndpointAtTime:(double)arg1 withMetrics:(id)arg2;
- (void)didDetectStartpointAtTime:(double)arg1;
- (void)didDetectTwoShotAtTime:(double)arg1;
- (unsigned long long)endPointAnalyzerType;
- (id)endpointerConnection;
- (id)endpointerDelegate;
- (id)endpointerImplDelegate;
- (id)endpointerModelVersion;
- (void)getFirstAudioSampleSensorHostTimeWithReply:(id /* block */)arg1;
- (id)init;
- (double)postVoiceTriggerSilence;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (void)processServerEndpointFeatures:(id)arg1;
- (void)recordingStoppedForReason:(long long)arg1;
- (id)remoteObjectProxy;
- (id)requestId;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordOption:(id)arg3 voiceTriggerInfo:(id)arg4;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setActiveEndpointer:(id)arg1;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
- (void)setCachedMetrics:(id)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointerConnection:(id)arg1;
- (void)setEndpointerDelegate:(id)arg1;
- (void)setEndpointerImplDelegate:(id)arg1;
- (void)setEndpointerOperationMode:(long long)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setStartWaitTime:(double)arg1;
- (void)setXpcClientQueue:(id)arg1;
- (void)setXpcConnectionQueue:(id)arg1;
- (void)setXpcDelegateQueue:(id)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(id /* block */)arg2;
- (void)updateEndpointerDelayedTrigger:(bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (id)xpcClientQueue;
- (id)xpcConnectionQueue;
- (id)xpcDelegateQueue;

@end
