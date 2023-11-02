
@interface C2MultipeerNetworkConnection : C2MultipeerConnection {
    NSObject<OS_nw_connection> * _connection;
    int  _connectionState;
    NSMutableData * _receiveLengthBuffer;
    NSMutableData * _receiveMessageBuffer;
}

@property (nonatomic, retain) NSObject<OS_nw_connection> *connection;
@property (nonatomic) int connectionState;
@property (nonatomic, retain) NSMutableData *receiveLengthBuffer;
@property (nonatomic, retain) NSMutableData *receiveMessageBuffer;

- (void).cxx_destruct;
- (id)connection;
- (int)connectionState;
- (id)initWithParent:(id)arg1 queue:(id)arg2 connection:(id)arg3 peerID:(id)arg4;
- (id)receiveLengthBuffer;
- (id)receiveMessageBuffer;
- (void)receiveNextMessage;
- (void)sendMessageWithData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setConnectionState:(int)arg1;
- (void)setReceiveLengthBuffer:(id)arg1;
- (void)setReceiveMessageBuffer:(id)arg1;
- (void)startConnection;
- (void)stopConnection;

@end
