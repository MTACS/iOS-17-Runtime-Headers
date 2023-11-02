
@interface DropInCore.DropInServiceListenerDelegate : NSObject <NSXPCListenerDelegate> {
    void _xpcClients;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void queue;
    void xpcClientDelegate;
    void xpcDispatcher;
    void xpcServerInterface;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
