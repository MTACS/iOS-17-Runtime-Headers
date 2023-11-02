
@interface NEIKEv2Transport : NSObject <NEIKEv2PacketReceiver> {
    bool  _cancelled;
    NSMutableArray * _clients;
    bool  _connected;
    NSMutableArray * _connectedBlocks;
    NSObject<OS_nw_connection> * _connection;
    NWInterface * _interface;
    NWAddressEndpoint * _local;
    <NEIKEv2PacketDelegate> * _packetDelegate;
    NSObject<OS_dispatch_queue> * _receiveQueue;
    NWAddressEndpoint * _remote;
    unsigned long long  _transportType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)receivePacketData:(id)arg1;

@end
