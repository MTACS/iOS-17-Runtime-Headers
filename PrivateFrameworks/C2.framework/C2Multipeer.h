
@interface C2Multipeer : NSObject {
    <C2MultipeerChunkDelegate> * _chunkDelegate;
    NSMutableDictionary * _clientContextByRequestUUID;
    NSMutableDictionary * _connectionByPeer;
    C2MultipeerDiscovery * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <C2MultipeerChunkDelegate> *chunkDelegate;
@property (nonatomic, retain) NSMutableDictionary *clientContextByRequestUUID;
@property (nonatomic, retain) NSMutableDictionary *connectionByPeer;
@property (nonatomic, retain) C2MultipeerDiscovery *listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)addC2MultipeerConnection:(id)arg1 peerID:(id)arg2;
- (id)chunkDelegate;
- (id)clientContextByRequestUUID;
- (id)connectionByPeer;
- (void)discoverChunkSignature:(id)arg1 forContainerIdentifier:(id)arg2 chunkDataCallback:(id /* block */)arg3;
- (id)initWithChunkDelegate:(id)arg1;
- (id)initWithChunkDelegate:(id)arg1 createListener:(bool)arg2;
- (id)listener;
- (id)queue;
- (void)setChunkDelegate:(id)arg1;
- (void)setClientContextByRequestUUID:(id)arg1;
- (void)setConnectionByPeer:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setQueue:(id)arg1;

@end
