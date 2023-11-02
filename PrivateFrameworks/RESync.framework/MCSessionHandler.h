
@interface MCSessionHandler : NSObject <MCSessionPrivateDelegate> {
    struct DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle>>="m_allocator"^{Allocator {}  _handles;
    NSLock * _handlesLock;
    <MCSessionPrivateDelegate> * _nextDelegate;
    NSMutableDictionary * _peersToHandles;
    NSMutableArray * _pendingData;
    void * _protocolLayer;
    MCSession * _session;
    struct DynamicArray<unsigned char> { 
        struct Allocator {} *m_allocator; 
        unsigned long long m_capacity; 
        unsigned long long m_size; 
        unsigned int m_version; 
        char *m_data; 
    }  _tempBuf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) void*handles;
@property (nonatomic, retain) NSLock *handlesLock;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MCSessionPrivateDelegate> *nextDelegate;
@property (nonatomic, retain) NSMutableDictionary *peersToHandles;
@property (nonatomic, retain) NSMutableArray *pendingData;
@property (nonatomic) void*protocolLayer;
@property (nonatomic, retain) MCSession *session;
@property (readonly) Class superclass;
@property (nonatomic) struct DynamicArray<unsigned char> { struct Allocator {} *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; char *x5; } tempBuf;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataForPacket:(const void*)arg1 channel:(unsigned char)arg2;
- (void)dealloc;
- (void*)handles;
- (id)handlesLock;
- (id)initWithSession:(id)arg1 protocolLayer:(void*)arg2;
- (id)nextDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)peersToHandles;
- (id)pendingData;
- (void*)protocolLayer;
- (id)session;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(bool*)arg6;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(bool*)arg4;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(bool*)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(bool*)arg5;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(bool*)arg4;
- (void)setHandles:(void*)arg1;
- (void)setHandlesLock:(id)arg1;
- (void)setNextDelegate:(id)arg1;
- (void)setPeersToHandles:(id)arg1;
- (void)setPendingData:(id)arg1;
- (void)setProtocolLayer:(void*)arg1;
- (void)setSession:(id)arg1;
- (void)setTempBuf:(struct DynamicArray<unsigned char> { struct Allocator {} *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; char *x5; })arg1;
- (struct DynamicArray<unsigned char> { struct Allocator {} *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; char *x5; })tempBuf;

@end
