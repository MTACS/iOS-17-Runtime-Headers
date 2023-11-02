
@interface VCTransportSessionNW : VCTransportSession {
    NSObject<OS_dispatch_semaphore> * _cancelWaitSemaphore;
    bool  _didScheduleReceive;
    bool  _isIPv6;
    bool  _isSharedConnection;
    int  _networkInterfaceType;
    unsigned int  _networkMTU;
    VCNWConnectionInfo * _rtcpConnectionInfo;
    VCNWConnectionInfo * _rtpConnectionInfo;
    NSObject<OS_dispatch_semaphore> * _startWaitSemaphore;
}

@property (nonatomic, retain) VCNWConnectionInfo *rtcpConnectionInfo;
@property (nonatomic, retain) VCNWConnectionInfo *rtpConnectionInfo;

- (int)cancelConnections;
- (int)createAndSetupConnection:(id)arg1;
- (int)createConnections;
- (int)createNWConnection:(id)arg1;
- (struct tagVCNWConnectionMonitor { }*)createNWMonitor;
- (int)createVFD:(int*)arg1 forStreamType:(unsigned int)arg2;
- (void)dealloc;
- (int)destroyNWConnection:(id*)arg1;
- (int)dupRTCPNWConnectionBackingSocket;
- (int)dupRTPNWConnectionBackingSocket;
- (int)dupRTPNWConnectionBackingSocketForNWConnection:(id)arg1;
- (void)handleStateChanges:(int)arg1 error:(id)arg2 operationResult:(bool*)arg3;
- (id)initWithRTPNWConnectionID:(id)arg1 RTCPNWConnectionID:(id)arg2 handlerQueue:(id)arg3 context:(void*)arg4 notificationHandler:(int (*)arg5 eventHandler:(int (*)arg6;
- (void)initializeInterfaceType;
- (bool)initializeIsIPv6;
- (bool)initializeNetworkMTU;
- (bool)isIPv6;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (id)rtcpConnectionInfo;
- (id)rtpConnectionInfo;
- (int)setRemoteAddress:(id)arg1 remoteRTCPPort:(int)arg2;
- (void)setRtcpConnectionInfo:(id)arg1;
- (void)setRtpConnectionInfo:(id)arg1;
- (int)setStateChangeHandlerForConnection:(id)arg1 result:(bool*)arg2;
- (int)setupNWConnection:(id)arg1;
- (void)start;
- (void)stop;

@end
