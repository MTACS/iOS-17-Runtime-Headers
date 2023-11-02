
@interface AXDragEndpointVendor : NSObject <AXDragEndpointRequestSatisfierDelegate, NSXPCListenerDelegate> {
    NSMutableSet * _activeConnections;
    <AXDragEndpointVendorDelegate> * _delegate;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXDragEndpointVendorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)endpointForConnection:(id)arg1 forEndpointRequestSatisfier:(id)arg2;
- (void)endpointRequestSatisfierDidDisconnect:(id)arg1;
- (id)initWithXPCListener:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end
