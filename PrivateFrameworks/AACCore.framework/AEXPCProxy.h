
@interface AEXPCProxy : NSObject <AEXPCConnection> {
    NSXPCConnection * _connection;
    NSXPCInterface * _interface;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    <AEXPCConnectionOrigin> * _origin;
}

@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
