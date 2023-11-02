
@interface ENXPCServiceClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_xpc_object> * _testListenerEndpoint;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *testListenerEndpoint;

- (void).cxx_destruct;
- (id)_ensureXPCStartedAndReturnError:(id*)arg1;
- (void)_invalidateForced:(bool)arg1;
- (void)_xpcReceivedEvent:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)getXPCConnectionAndReturnError:(id*)arg1;
- (id)init;
- (void)invalidate;
- (void)setTestListenerEndpoint:(id)arg1;
- (id)testListenerEndpoint;

@end
