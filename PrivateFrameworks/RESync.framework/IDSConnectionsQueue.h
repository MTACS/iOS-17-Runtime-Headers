
@interface IDSConnectionsQueue : NSObject <IDSServiceDelegatePrivate, IDSSessionDelegatePrivate> {
    NSMutableDictionary * _allConnections;
    NSMutableArray * _endedConnections;
    NSMutableArray * _pendingConnections;
    NSObject<OS_dispatch_queue> * _queue;
    IDSService * _service;
}

@property (nonatomic, retain) NSMutableDictionary *allConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *endedConnections;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *pendingConnections;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IDSService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allConnections;
- (void)dealloc;
- (void)dequeSession:(id)arg1;
- (id)endedConnections;
- (id)initWithIDSService:(id)arg1 queue:(id)arg2;
- (id)pendingConnections;
- (id)queue;
- (void)queueNewSessionForDestination:(id)arg1;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5;
- (void)sessionEnded:(id)arg1;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setAllConnections:(id)arg1;
- (void)setEndedConnections:(id)arg1;
- (void)setPendingConnections:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setService:(id)arg1;

@end
