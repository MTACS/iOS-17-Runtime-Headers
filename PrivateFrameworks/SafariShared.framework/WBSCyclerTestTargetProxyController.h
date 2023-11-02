
@interface WBSCyclerTestTargetProxyController : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, copy) id /* block */ disconnectionHandler;
@property (nonatomic, readonly) <WBSCyclerTestTarget> *testTargetProxy;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)disconnectionHandler;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (void)setDisconnectionHandler:(id /* block */)arg1;
- (id)testTargetProxy;

@end
