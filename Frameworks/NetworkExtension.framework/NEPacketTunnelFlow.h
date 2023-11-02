
@interface NEPacketTunnelFlow : NSObject {
    unsigned long long  _buffersSize;
    bool  _handlerSetup;
    struct NEVirtualInterface_s { } * _interface;
    long long  _interfaceType;
    char ** _packetDataArray;
    id /* block */  _packetHandler;
    unsigned long long * _packetLengths;
    id /* block */  _packetObjectHandler;
    unsigned int * _packetProtocols;
    NSObject<OS_dispatch_queue> * _queue;
    NSFileHandle * _socket;
    NSDictionary * _uuidMap;
}

@property (retain) NSFileHandle *socket;

- (void).cxx_destruct;
- (void)dealloc;
- (void)readPacketObjectsWithCompletionHandler:(id /* block */)arg1;
- (void)readPacketsWithCompletionHandler:(id /* block */)arg1;
- (void)setSocket:(id)arg1;
- (id)socket;
- (bool)writePacketObjects:(id)arg1;
- (bool)writePackets:(id)arg1 withProtocols:(id)arg2;

@end
