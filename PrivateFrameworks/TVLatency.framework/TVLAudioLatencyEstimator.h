
@interface TVLAudioLatencyEstimator : NSObject {
    TVLNetworkInterface * _awdlInterface;
    id /* block */  _completion;
    id /* block */  _internalProgressEventHandler;
    TVLListenEngine * _listenEngine;
    TVLNetworkMonitor * _networkMonitor;
    id /* block */  _progressEventHandler;
    unsigned long long  _role;
    CUMessageSession * _session;
    TVLTimeSync * _timeSync;
    float  _version;
    TVLNetworkInterface * _wifiInterface;
}

@property (nonatomic, retain) TVLNetworkInterface *awdlInterface;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) id /* block */ internalProgressEventHandler;
@property (nonatomic, retain) TVLListenEngine *listenEngine;
@property (nonatomic, retain) TVLNetworkMonitor *networkMonitor;
@property (nonatomic, copy) id /* block */ progressEventHandler;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, retain) CUMessageSession *session;
@property (nonatomic, retain) TVLTimeSync *timeSync;
@property (nonatomic) float version;
@property (nonatomic, retain) TVLNetworkInterface *wifiInterface;

- (void).cxx_destruct;
- (void)_estimateAudioLatencyWithOptions:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_initWithMessageSession:(id)arg1;
- (void)_invalidateWithError:(id)arg1;
- (void)_postInternalProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)_postProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)_respondAndInvalidateWithError:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_sendMessage:(id)arg1 withResponse:(id /* block */)arg2;
- (void)_synchronizeClocksWithOptions:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_tearDown;
- (void)activate;
- (id)awdlInterface;
- (id /* block */)completion;
- (void)estimate;
- (void)estimateAudioLatencyWithToneIdentifier:(id)arg1;
- (id)initWithMessageSession:(id)arg1;
- (id /* block */)internalProgressEventHandler;
- (void)invalidate;
- (id)listenEngine;
- (id)networkInterfaceOfType:(unsigned long long)arg1 fromInterfaces:(id)arg2;
- (id)networkMonitor;
- (void)networkMonitorInterfacesDidUpdate:(id)arg1;
- (id /* block */)progressEventHandler;
- (unsigned long long)role;
- (id)session;
- (void)setAudioLatencyEstimationCompletionHandler:(id /* block */)arg1;
- (void)setAwdlInterface:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setInternalProgressEventHandler:(id /* block */)arg1;
- (void)setListenEngine:(id)arg1;
- (void)setNetworkMonitor:(id)arg1;
- (void)setProgressEventHandler:(id /* block */)arg1;
- (void)setSession:(id)arg1;
- (void)setTimeSync:(id)arg1;
- (void)setVersion:(float)arg1;
- (void)setWifiInterface:(id)arg1;
- (void)startNetworkMonitoring;
- (id)timeSync;
- (float)version;
- (id)wifiInterface;

@end
