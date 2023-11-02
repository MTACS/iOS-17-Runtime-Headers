
@interface CipherML.CMLXPCServer : NSObject <NSXPCListenerDelegate> {
    void xpcHandler;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
