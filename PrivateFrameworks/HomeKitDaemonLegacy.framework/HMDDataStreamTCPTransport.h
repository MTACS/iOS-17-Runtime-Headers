
@interface HMDDataStreamTCPTransport : NSObject <HMDDataStreamTransport, HMFLogging> {
    HMDDataStreamFrameReader * _byteReader;
    bool  _connected;
    id /* block */  _connectionFactory;
    NSString * _logIdentifier;
    HMFNetAddress * _remoteAddress;
    long long  _remotePort;
    int  _schedulingMode;
    <HMDNetworkConnection> * _tcpConnection;
    NSObject<OS_dispatch_queue> * _workQueue;
    <HMDDataStreamTransportDelegate> * delegate;
}

@property (nonatomic, readonly) HMDDataStreamFrameReader *byteReader;
@property (nonatomic, copy) id /* block */ connectionFactory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDDataStreamTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic, readonly) HMFNetAddress *remoteAddress;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HMDNetworkConnection> *tcpConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_consumeReceivedData:(id)arg1;
- (id)_createTcpConnection;
- (void)_doReceive;
- (void)_handleReadClose;
- (void)_registerForConnectionEvents;
- (void)_start;
- (void)_stopWithError:(id)arg1;
- (id)byteReader;
- (void)close;
- (void)connect;
- (id /* block */)connectionFactory;
- (void)dealloc;
- (id)delegate;
- (id)initWithAddress:(id)arg1 port:(long long)arg2 targetQueue:(id)arg3 logIdentifier:(id)arg4;
- (id)initWithAddress:(id)arg1 port:(long long)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4;
- (id)logIdentifier;
- (id)remoteAddress;
- (void)sendRawFrame:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnectionFactory:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTcpConnection:(id)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (id)tcpConnection;
- (id)workQueue;

@end
