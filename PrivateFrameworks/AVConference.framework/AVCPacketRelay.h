
@interface AVCPacketRelay : NSObject {
    NSArray * _connections;
    <AVCPacketRelayDelegate> * _delegate;
    struct _AVCPacketRelayHealthStats { 
        struct _AVCPacketRelayDemuxPacketHealthStats { 
            unsigned int rtpAndRTCPPacketCount; 
            unsigned int rtpPacketCount; 
            unsigned int rtcpPacketCount; 
            unsigned int droppedPacketCount; 
        } demuxPacketStats; 
        unsigned int sendPacketCount; 
        unsigned int sendByteCount; 
        unsigned int receivePacketCount; 
        unsigned int receiveByteCount; 
        double lastSendTimePrint; 
        double lastReceiveTimePrint; 
    }  _healthStats;
    <AVCPacketRelayConnectionProtocol> * _multiplexedConnection;
    AVCPacketRelayDriver * _packetDriver;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSArray *connections;
@property (nonatomic) <AVCPacketRelayDelegate> *delegate;
@property (retain) <AVCPacketRelayConnectionProtocol> *multiplexedConnection;

- (id)connections;
- (void)dealloc;
- (id)delegate;
- (id)findConnectionToForwardData:(const void*)arg1 size:(int)arg2;
- (void)healthPrint:(unsigned long long)arg1 isSend:(bool)arg2;
- (id)initWithConnection:(id)arg1 connection:(id)arg2 error:(id*)arg3;
- (id)initWithConnections:(id)arg1 multiplexedConnection:(id)arg2 error:(id*)arg3;
- (bool)isAllConnectionTypeValid:(id)arg1;
- (id)multiplexedConnection;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMultiplexedConnection:(id)arg1;
- (void)start;
- (int)startAllConnections;
- (void)stop;
- (bool)stopAllConnections;
- (void)updateDemuxPacketStatsWithPacketFilterPacketType:(unsigned char)arg1;

@end
