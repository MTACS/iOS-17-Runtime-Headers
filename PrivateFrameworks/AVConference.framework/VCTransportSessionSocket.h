
@interface VCTransportSessionSocket : VCTransportSession {
    bool  _isIPv6;
    bool  _isRTCPUsable;
    bool  _isRTPUsable;
    bool  _isSharedSocket;
    BOOL  _networkInterfaceName;
    int  _networkInterfaceType;
    unsigned int  _networkMTU;
    VCNetworkAddress * _remoteAddress;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _rtcpIPPort;
    unsigned int  _rtcpIPPortLength;
    int  _rtcpVFD;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _rtpIPPort;
    unsigned int  _rtpIPPortLength;
    int  _rtpVFD;
}

- (int)configureParamatersForStreamType:(unsigned int)arg1 socket:(int*)arg2 packetType:(int*)arg3 remoteIP:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg4 remoteIPLength:(unsigned int*)arg5;
- (int)connectSocket:(int)arg1 remoteAddress:(id)arg2 storage:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg3;
- (int)createAndConfigureVFDForSocket:(int)arg1 packetType:(int)arg2 remoteIP:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg3 remoteIPLength:(unsigned int)arg4 vfd:(int*)arg5;
- (struct tagVCNWConnectionMonitor { }*)createNWMonitor;
- (int)createVFD:(int*)arg1 forStreamType:(unsigned int)arg2;
- (int)createVFD:(int*)arg1 realSocket:(int)arg2 sockAddr:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg3 length:(unsigned int*)arg4 isUsable:(bool*)arg5;
- (void)dealloc;
- (id)initWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2;
- (id)initWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2 notificationHandler:(int (*)arg3 eventHandler:(int (*)arg4 handlerQueue:(id)arg5 context:(void*)arg6;
- (id)initWithSharedSocket:(int)arg1;
- (id)initWithSocketDictionary:(id)arg1 notificationHandler:(int (*)arg2 eventHandler:(int (*)arg3 handlerQueue:(id)arg4 context:(void*)arg5;
- (void)initializeInterfaceTypeWithSocket:(int)arg1;
- (int)initializeNetworkInfoWithSocket:(int)arg1;
- (bool)isIPv6;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (int)setAudioRTCPStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg3 remoteIPLength:(unsigned int*)arg4;
- (int)setAudioRTPStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg3 remoteIPLength:(unsigned int*)arg4;
- (int)setBasebandNotificationStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg3 remoteIPLength:(unsigned int*)arg4;
- (int)setRemoteAddress:(id)arg1 remoteRTCPPort:(int)arg2;
- (int)setVideoRTCPStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg3 remoteIPLength:(unsigned int*)arg4;
- (int)setVideoRTPStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg3 remoteIPLength:(unsigned int*)arg4;
- (void)start;
- (void)stop;
- (id)streams;
- (int)updateTransportStream:(struct OpaqueVCTransportStream { }*)arg1;

@end
