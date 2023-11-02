
@interface IDSDataChannelsDirectConnections : NSObject {
    NSObject<OS_nw_connection> * _qpodConnection;
    NSObject<OS_nw_connection> * _udpConnection;
}

@property (retain) NSObject<OS_nw_connection> *qpodConnection;
@property (retain) NSObject<OS_nw_connection> *udpConnection;

- (void).cxx_destruct;
- (id)qpodConnection;
- (void)setQpodConnection:(id)arg1;
- (void)setUdpConnection:(id)arg1;
- (id)udpConnection;

@end
