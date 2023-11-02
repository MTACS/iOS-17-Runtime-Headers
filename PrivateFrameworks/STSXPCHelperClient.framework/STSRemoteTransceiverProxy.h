
@interface STSRemoteTransceiverProxy : NSObject {
    NSXPCConnection * _xpc;
}

@property (nonatomic, retain) NSXPCConnection *xpc;

- (void).cxx_destruct;
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1;
- (void)setXpc:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)transceive:(id)arg1 outError:(id*)arg2;
- (id)xpc;

@end
