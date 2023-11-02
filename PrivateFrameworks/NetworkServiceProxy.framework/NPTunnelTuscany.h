
@interface NPTunnelTuscany : NPTunnel {
    NSObject<OS_nw_connection> * _UDPSession;
    void * _clientRef;
    void * _connectionTimer;
    bool  _ignoreWaldoTimestamp;
    bool  _isFirstTunnel;
    unsigned long long  _nextFlowID;
    NPTuscanyOnRamp * _onRamp;
    id /* block */  _pendingPingCompletionHandler;
    void * _pingTimer;
    bool  _shouldReportUsage;
    void * _usageReportTimer;
    unsigned int  _waldoTimestamp;
}

@property (nonatomic) void*clientRef;
@property (nonatomic, readonly) long long currentMTU;
@property (nonatomic, readonly) NSDate *dayPassCreationDate;
@property (nonatomic, readonly) unsigned int dayPassSessionCounter;
@property (nonatomic) bool ignoreWaldoTimestamp;
@property (nonatomic) bool isFirstTunnel;
@property (nonatomic, readonly) unsigned long long maxFrameSize;
@property (nonatomic, copy) id /* block */ pendingPingCompletionHandler;

- (void).cxx_destruct;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (unsigned long long)allocateFlowID;
- (bool)canHandleMoreData;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void*)clientRef;
- (void)closeFlow:(id)arg1;
- (id)createConnectionInfo;
- (void)createTuscanyClient;
- (long long)currentMTU;
- (id)dayPassCreationDate;
- (unsigned int)dayPassSessionCounter;
- (void)dealloc;
- (void)destroyConnection;
- (bool)flowIsFirstFlow:(id)arg1;
- (void)handleConnected;
- (void)handleConnectionError;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)handleDisconnected;
- (void)handleEOF;
- (void)handleFallbackForFlow:(id)arg1;
- (void)handleFlowUsedTunnel;
- (void)handleHelloAck:(unsigned int)arg1;
- (void)handleInputAvailable;
- (void)handlePingResponseRTT:(unsigned long long)arg1 geohash:(id)arg2;
- (void)handleReadData:(struct nw_frame_array_s { struct nw_frame {} *x1; struct nw_frame {} **x2; }*)arg1;
- (bool)ignoreWaldoTimestamp;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6;
- (unsigned long long)initialWindowSize;
- (bool)isFirstTunnel;
- (bool)isTFOProbeSucceeded;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (unsigned long long)maxFrameSize;
- (id /* block */)pendingPingCompletionHandler;
- (void)pingWithCompletionHandler:(id /* block */)arg1;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)sendDataOnUDPSession:(id)arg1;
- (void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3;
- (void)setClientRef:(void*)arg1;
- (void)setIgnoreWaldoTimestamp:(bool)arg1;
- (void)setIsFirstTunnel:(bool)arg1;
- (void)setPendingPingCompletionHandler:(id /* block */)arg1;
- (bool)start;
- (void)startConnectionTimer;
- (void)writeInitialData;

@end
