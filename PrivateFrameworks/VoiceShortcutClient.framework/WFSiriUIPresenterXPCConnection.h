
@interface WFSiriUIPresenterXPCConnection : NSObject <WFSiriUIPresenterConnection> {
    bool  _connected;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (bool)connected;
- (id)endpoint;
- (id)initWithEndpoint:(id)arg1;
- (id)presenterWithErrorHandler:(id /* block */)arg1;
- (void)resumeConnectionIfNecessary;
- (void)setConnected:(bool)arg1;
- (id)xpcConnection;

@end
