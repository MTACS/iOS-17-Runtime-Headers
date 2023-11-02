
@interface MTRDeviceControllerXPCProxyHandle : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (getter=proxy, nonatomic, readonly) <MTRDeviceControllerServerProtocol> *proxy;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)proxy;
- (id)xpcConnection;

@end
