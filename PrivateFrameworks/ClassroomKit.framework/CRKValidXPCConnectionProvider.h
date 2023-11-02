
@interface CRKValidXPCConnectionProvider : NSObject {
    NSXPCConnection * _backingConnection;
    id /* block */  _builder;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *backingConnection;
@property (nonatomic, readonly) id /* block */ builder;
@property (readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)backingConnection;
- (id /* block */)builder;
- (id)captureConnection;
- (id)connection;
- (void)connectionDied:(id)arg1;
- (void)dealloc;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)invokeBuilder;
- (id)makeConnection;
- (id)queue;
- (void)setBackingConnection:(id)arg1;
- (void)tearDownConnection;
- (id)unprotectedConnection;

@end
