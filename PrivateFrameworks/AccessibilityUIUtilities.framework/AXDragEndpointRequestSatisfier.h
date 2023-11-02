
@interface AXDragEndpointRequestSatisfier : NSObject <AXEndpointVending> {
    NSXPCConnection * _connection;
    <AXDragEndpointRequestSatisfierDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXDragEndpointRequestSatisfierDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithConnection:(id)arg1;
- (void)requestDragEndpoint:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
