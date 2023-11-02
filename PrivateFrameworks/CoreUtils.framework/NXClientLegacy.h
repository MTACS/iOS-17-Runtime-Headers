
@interface NXClientLegacy : NSObject <CUXPCCodable> {
    unsigned int  _clientID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned char  _flags;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSObject<OS_xpc_object> * _testListenerEndpoint;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSObject<OS_xpc_object> * _xpcCnx;
}

@property (nonatomic) unsigned int clientID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned char flags;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSObject<OS_xpc_object> *testListenerEndpoint;

- (void).cxx_destruct;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_xpcReceivedEvent:(id)arg1;
- (void)_xpcReceivedMessage:(id)arg1;
- (unsigned int)clientID;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)diagnosticControl:(id)arg1 completion:(id /* block */)arg2;
- (void)diagnosticShow:(id)arg1 completion:(id /* block */)arg2;
- (id)dispatchQueue;
- (void)encodeWithXPCObject:(id)arg1;
- (unsigned char)flags;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)liveActionPerform:(id)arg1 completion:(id /* block */)arg2;
- (void)setClientID:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned char)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (id)testListenerEndpoint;

@end
