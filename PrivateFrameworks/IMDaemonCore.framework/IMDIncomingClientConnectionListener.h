
@interface IMDIncomingClientConnectionListener : SwiftNativeNSObject <NSXPCListenerDelegate> {
    void allowedEntitlements;
    void clientConnectionWorkloop;
    void clients;
    void listener;
    void machServiceName;
    void requestHandlers;
}

- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
