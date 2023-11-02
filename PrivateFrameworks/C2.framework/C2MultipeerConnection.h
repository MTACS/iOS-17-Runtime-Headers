
@interface C2MultipeerConnection : NSObject {
    NSMutableSet * _oustandingDiscoveryRequestsByRequestUUID;
    C2Multipeer * _parent;
    NSString * _peerID;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _serverContextByRequestUUID;
}

@property (nonatomic, retain) NSMutableSet *oustandingDiscoveryRequestsByRequestUUID;
@property (nonatomic) C2Multipeer *parent;
@property (nonatomic, retain) NSString *peerID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *serverContextByRequestUUID;

- (void).cxx_destruct;
- (void)handleData:(id)arg1;
- (id)initWithParent:(id)arg1 queue:(id)arg2 peerID:(id)arg3;
- (id)oustandingDiscoveryRequestsByRequestUUID;
- (id)parent;
- (id)peerID;
- (id)queue;
- (void)sendMessageWithData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serverContextByRequestUUID;
- (void)setOustandingDiscoveryRequestsByRequestUUID:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServerContextByRequestUUID:(id)arg1;
- (void)startConnection;
- (void)stopConnection;

@end
