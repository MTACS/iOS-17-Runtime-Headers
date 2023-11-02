
@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler {
    NSXPCListenerEndpoint * _xpcListenerEndpoint;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *xpcListenerEndpoint;

- (void).cxx_destruct;
- (bool)addToRefCountWithError:(id*)arg1;
- (void)createConnection;
- (id)initWithEndpoint:(id)arg1;
- (id)remoteObjectInterface;
- (void)setXpcListenerEndpoint:(id)arg1;
- (id)xpcListenerEndpoint;

@end
