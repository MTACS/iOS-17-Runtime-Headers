
@interface NPTunnelTuscanyLoopback : NPTunnelTuscany {
    NPTunnelFlow * _flow;
    void * _window;
}

@property (retain) NPTunnelFlow *flow;
@property void*window;

- (void).cxx_destruct;
- (bool)addNewFlow:(id)arg1;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void)createTuscanyClient;
- (long long)currentMTU;
- (unsigned int)dayPassSessionCounter;
- (void)dealloc;
- (id)flow;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6;
- (unsigned long long)initialWindowSize;
- (unsigned long long)maxFrameSize;
- (void)pingWithCompletionHandler:(id /* block */)arg1;
- (void)removeFlow:(unsigned long long)arg1;
- (bool)selectBestEdge;
- (void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3;
- (void)setFlow:(id)arg1;
- (void)setWindow:(void*)arg1;
- (void)startConnectionTimer;
- (void*)window;
- (void)write:(id)arg1;

@end
